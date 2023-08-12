// Optimized implementation of Bubble sort
//http://www.geeksforgeeks.org/bubble-sort/
#include <iostream>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
	int N;
    cout<<"Enter the size of the array:";
    cin>>N;
    int a[N];
    cout<<"Enter the elements in the array:";
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }
	bubbleSort(a, N);
	cout << "Sorted array: \n";
	printArray(a, N);
	return 0;
}
// This code is contributed by shivanisinghss2110
