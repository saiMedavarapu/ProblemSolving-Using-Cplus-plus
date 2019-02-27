#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct LibDB
    {
    string lastName;
    string firstName;
    int memberID;
    string teleNum;
    }record[100];


char menuInput(char &input)
{
    cin.ignore();
    cout<<"Input option...\n";
    cout<<"x. Exit\n";
    cout<<"a. Member ID search\n";
    cout<<"b. Last Name search\n";
    cin>>input;
    input = tolower(input);
    return input;
}

void findByLastName(LibDB *record, int SIZE,string searchLN )
{
            for(int x=0;x<SIZE;x++)
                {
                    if(record[x].lastName == searchLN)
                    {
                        cout<<record[x].lastName<<" ";
                        cout<<record[x].firstName<<" ";
                        cout<<record[x].memberID<<" ";
                        cout<<record[x].teleNum<<endl;
                    }
                }
}


int findByID(LibDB *record, int SIZE, int searchID){
    for(int x=0;x<SIZE;x++)
    {
        if(record[x].memberID == searchID)
            return x;
    }
    return -1;
}



int main(){
    const int SIZE=101;
    int i;
    char menuSelection= ' '; 
    ifstream fin;
    fin.open("library_database.txt");
 int indexFound;
    int recCount = 0;  // keep track of actual number of records

    // loop until we reach the end of file, or until we hit SIZE records,
    // whichever comes first
    while (!fin.eof() && recCount < SIZE)
    {
        fin >> record[recCount].firstName >> record[recCount].lastName >>record[recCount].memberID >> record[recCount].teleNum;
        ++recCount;
    }

    /*for(i=0;i<SIZE-1;i++)
    {
        cout<<record[i].firstName<<" "<<record[i].lastName <<"  "<<record[i].memberID<<"  "<<record[i].teleNum<<endl;
    }*/

    while(menuInput(menuSelection)!='x')
    {
        switch(menuSelection){
            case 'a':
                    cout<<"Enter the ID";
                    int searchID;
                    cin>> searchID;
                    indexFound = findByID(record,  SIZE,  searchID);
                    if(indexFound > 0)
                    {
                        cout<<record[indexFound].lastName<<" ";
                        cout<<record[indexFound].firstName<<" ";
                        cout<<record[indexFound].memberID<<" ";
                        cout<<record[indexFound].teleNum<<endl;
                    }
                    else
                    {
                        cout<<"Nothiing is found";
                    }

                    /*for(int x=0;x<SIZE-1;x++)
                    {
                        if(record[x].memberID == searchID)
                            {
                                 cout<<record[x].lastName<<" ";
                                 cout<<record[x].firstName<<" ";
                                 cout<<record[x].memberID<<" ";
                                 cout<<record[x].teleNum<<endl;
                            }
                    }
                    return -1;*/


                    break;

            case 'b':
                        cout<<"Enter the Last Name";
                                string searchLN;
                                cin.ignore();
                                getline(cin,searchLN);
                    findByLastName(record, SIZE,searchLN );
                               /* for(int x=0;x<SIZE;x++)
                                    {
                                        if(record[x].lastName == searchLN)
                                        {
                                            cout<<record[x].lastName<<" ";
                                            cout<<record[x].firstName<<" ";
                                            cout<<record[x].memberID<<" ";
                                            cout<<record[x].teleNum<<endl;
                                        }
                                    }*/
                    break;
        }
    }

return 0;


}