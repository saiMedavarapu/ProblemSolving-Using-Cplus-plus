//Sai Medavarapu
//Thanks Sameera
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int arr[5];
	int i;
	int *ptr = nullptr;
	
	for (i=0; i < 5; i++)
	{
		cout << "Enter a number\t";
		cin >> arr[i];
		cout << endl;
	}
	
	for (i=0; i < 5; i++)
	{
		ptr = &arr[i];
		cout << *ptr << endl;
	}
	for (i=0; i < 5; i++)
	{
		ptr = &arr[i];
		*ptr = pow(arr[i], 2);
		cout << endl;
		cout << *ptr;
	}
	cout << endl;
	return 0;
}