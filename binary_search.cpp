#include<iostream>
/*
*Binary_Search -> Working_Algoritm
*/
#include<cstdlib>

using namespace std;

bool binary_search(int* arr, long size, int key)
{
	int  Left = 0, Right = size, mid;

	while (Left<=Right)
	{
		mid = (Left + Right) / 2;

		if (arr[mid] == key) { return true; }

		else if (arr[mid] < key) { Left = mid + 1; }

		else if (arr[mid] > key) { Right = mid - 1; }
	}
	return true;
}

int main(void)
{
	int size = 10000;

	int* arr = new int[size];

	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = i + 1;
	}

	cout << boolalpha << binary_search(arr, size, 6090) << endl;

	delete[] arr;

	arr = nullptr;

	system("pause > nul");

	return EXIT_SUCCESS;
}
