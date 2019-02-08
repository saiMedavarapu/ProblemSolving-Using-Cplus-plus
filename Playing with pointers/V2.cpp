//Sai Medavarapu
//Thanks Sameera
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int arr[5];
	int i;
	int *ptrarr = nullptr;
	
	for (i=0; i < 5; i++)
	{
		cout << "Enter a number\t";
		cin >> arr[i];
		cout << endl;
	}
	
	for (i=0; i < 5; i++)
	{
		ptrarr = arr;
		cout << ptrarr[i];
		cout << endl;
	}
	for (i=0; i < 5; i++)
	{
		ptrarr[i] = pow(ptrarr[i], 2);
		cout << endl;
		cout << ptrarr[i];
	}
	cout << endl;
	return 0;
}