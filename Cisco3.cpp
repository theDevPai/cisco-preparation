// C++ program to Find the missing element
//http://www.geeksforgeeks.org/find-the-missing-number/
#include<iostream>
using namespace std;

void findMissing(int arr[], int N)
{
	int i;
	int temp[N + 1];
	for(int i = 0; i <= N; i++){
	temp[i] = 0;
	}

	for(i = 0; i < N; i++){
	temp[arr[i] - 1] = 1;
	}


	int ans;
	for (i = 0; i <= N ; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}

/* Driver code */
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
	findMissing(a, N);
    return 0;
}
