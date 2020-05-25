// DeQuyDaTuyen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;
void print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
void print_permutations(int arr[], int n, int i)
{
	int j, swap;
	print_array(arr, n);
	for (j = i + 1; j < n; j++)
	{
		if (arr[i] > arr[j])
		{
			swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
		}
		print_permutations(arr, n, i + 1);
	}
}
int main()
{
	int M[3];
	M[0] = 10;
	M[1] = 2;
	M[2] = 5;
	print_permutations(M, 3, 0);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
