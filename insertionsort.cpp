#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	cout << arr[i] << " - ";
	cout << endl;
}
int main()
{
    int n,i,arr[50];
    cout<<"**************************************\n";
	cout<<"       *****Insertion Sort*****\n";
    cout<<"**************************************\n";
    cout<<"Enter Total No. of Elements ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements:\n";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
	insertionSort(arr, n);
    cout<<"**************************************\n";
    cout<<"Sorted Array is:-\n";
	printArray(arr, n);
    cout<<"*******************************************\n";
	return 0;
}

