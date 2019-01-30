// This program demonstrates a Binary Search

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int binarySearch(int[], int, int);// function prototype 
int linearSearch(int [], int, int);	// function prototype 
const int SIZE = 20;
int litr = 0;
int bitr = 0;

int main()
{
	int found, lfound, value;

	int array[] = { 34, 19, 19, 18, 17, 13, 12, 12, 12, 11,10, 9,8, 7, 6 , 5, 3, 2, 2, 0 };
	// array to be searched
	
	cout << "Enter an integer to search for:" << endl;
	cin >> value;

	lfound = linearSearch(array, SIZE, value);
cout<<"***************************************Linear Search***************************"<<endl;	
	if(lfound==-1)
		cout << "The value " << value << " is not in the list" << endl;
	else
		cout << "The value " << value << " is in position number "
		     << lfound + 1 << " of the list" << " and number of comparisons are :"<< litr <<endl;
	
	found = binarySearch(array, SIZE, value);
	
	// function call to perform the binary search
	// on array looking for an occurrence of value 
cout<<"***************************************Binary Search***************************"<<endl;	
	if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
		cout << "The value " << value << " is in position number "
		     << found + 1 << " of the list" << " and the number of comparisons are : "<< bitr <<endl;

	return 0;
}

//*******************************************************************
//	binarySearch
//
//  task:	       This searches an array for a particular value
//  data in:	   List of values in an orderd array, the number of
//	               elements in the array, and the value searched for
//	               in the array
//  data returned: Position in the array of the value or -1 if value
//	               not found
//
//*******************************************************************

int binarySearch(int array[], int SIZE, int value)	// function heading
{
	int first = 0;				// First element of list
	int last = SIZE - 1;	// last element of the list
	int middle;					// variable containing the current
								// middle value of the list
	while (first <= last)
	{
		bitr++;
		middle = first + (last - first) / 2;

		if (array[middle] == value)
		{
			bitr++;
			return middle;		// if value is in the middle, we are done
		}
		else if (array[middle]<value)
		{
			bitr++;
			last = middle - 1;	// toss out the second remaining half of
		}

		else
			first = middle + 1;	// toss out the first remaining half of
								// the array and search the second
	}

	return -1;	// indicates that value is not in the array
}


int linearSearch(int array[], int numElems, int value)
{
	int i; 
    for (i = 0; i < numElems; i++) 
	{
		litr++;
        if (array[i] == value) 
		{
			//litr++;
            return i; 
		}
	}
    return -1; 
}