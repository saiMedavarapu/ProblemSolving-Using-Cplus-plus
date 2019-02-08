//Sai Medavarapu
//Thanks Sameera
#include <iostream>

using namespace std;

const int MAXNAME = 10;

int main()
{
  int pos;
  char *name = nullptr;
  int *one = nullptr;
  int *two = nullptr;
  int *three = nullptr;
  int result;
  
  //Fill in the code to allocate the integer variable one here.
  int ONE;
  one = &ONE;
  //Fill in the code to allocate the integer variable two here.
  int TWO;
  two = &TWO;
  //Fill in the code to allocate the integer variable three here.
  int THREE;
  three = &THREE;
  //Fill in the code to allocate the character array pointed to by name.
  char NAME;
  name = &NAME;
  
  
  cout << "Enter your last name with exactly 10 characters." << endl;
  cout << "If your name has < 10 characters, repeat last letter." << endl;
  cout << "Blanks at the end do not count." << endl;
  
  
  for (pos = 0; pos < MAXNAME; pos++)
    
    cin >> name[pos];
                 
  cout << "Hi ";
  
  for (pos = 0; pos < MAXNAME; pos++)
  
    cout << name[pos];     
                 
  cout << endl << "Enter three integer numbers separated by blanks" << endl;
  
  cin >> *one >> *two >> *three;

  cout << "The three numbers are " << endl;
  cout << *one << " " << *two << " " << *three << endl;
  
  //Fill in the code to output those numbers.
  
  result = (*one + *two + *three);
  
  //Fill in the code to sum the amount of the three numbers.
  cout << "The sum of the three values is " << result << endl;
  
  //Fill in the code to deallocate one, two, three, and name.
	
	return 0;
}
