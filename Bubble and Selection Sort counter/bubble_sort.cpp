//Sai Medavarapu

#include <iostream>
using namespace std;

// function prototypes
void bubbleSortArray(int[], int);
void displayArray(int[], int);
int bitr; //Variables to have the count
int sitr; //Variable to have selection sort count.
const int SIZE = 20;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

//******************************************************************
//	SelectionSortArray
//
//  task:	  to sort values of an array in ascending order
//  data in:  the array, the array size
//  data out: the sorted array
//
//******************************************************************


void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]);
			sitr = sitr+2;
    } 
} 

int main()
{
	int values1[SIZE] = { 9, 2, 0, 11, 5,10,22,33,12, 6, 3,4,100,99,93, 64, 88, 84, 75, 81 };
	int values2[SIZE] = { 9, 2, 0, 11, 5,10,22,33,12, 6, 3,4,100,99,93, 64, 88, 84, 75, 81 };
	cout << "The values before the sorting is performed are:" << endl;
	displayArray(values1, SIZE);

	bubbleSortArray(values1, SIZE);
	cout<<endl;
	cout<<"Number of comparisons for the Bubble sort are: "<< bitr<<endl;
	cout << "The values after the bubble sort is performed are:" << endl;
	displayArray(values1, SIZE);

	cout<<endl;
	selectionSort(values2, SIZE);
	cout<<endl;
		cout<<"Number of comparisons for the Selection sort are: "<< sitr<<endl;;
	cout << "The values after the Selection sort is performed are:";
	cout<<endl;
	displayArray(values2, SIZE);
	cout<<endl;
	
	return 0;
}

//******************************************************************
//	displayArray
//
//  task:	  to print the array
//  data in:  the array to be printed, the array size
//  data out: none
//
//******************************************************************

void displayArray(int array[], int elems)	// function heading
{		
	// displays the array 
	for (int count = 0; count < elems; count++)
		cout << array[count] << "	";
}

//******************************************************************
//	bubbleSortArray
//
//  task:	  to sort values of an array in ascending order
//  data in:  the array, the array size
//  data out: the sorted array
//
//******************************************************************

void bubbleSortArray(int array[], int elems)
{
	
	for(int i=0;i< elems-1;i++)
	{
		for(int j=i+1; j<elems;j++)
		{
			int temp;
			if(array[i] > array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				bitr=bitr+2;
			}
		}
	}
	
	
}





