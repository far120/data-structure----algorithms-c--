#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int h, int element)
{
	while (l <= h) {
		
		int m = (l + h) / 2;//both=>m = l + (r - l) / 2 both=>m = (2 l + r -l)/2

		
		if (arr[m] == element)
			return m;
        
		if (arr[m] > element)
			
		h = m - 1;

		else

		l = m + 1;

	}

	return -1;
}

/*
int binarySearchRec(int arr[], int l, int h, int element)
{
	if (h >= l) {
		int mid = (l + h) / 2;

		if (arr[mid] == element)
			return mid;

		if (arr[mid] > element)
			return binarySearch(arr, l, mid - 1, element);

		return binarySearch(arr, mid + 1, h, element);
	}
	return -1;
}
*/

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int num;
	cout << "Enter an Integer :";
	cin >> num;

	int result = binarySearch(arr, 0, n - 1, num);
	if(result == -1)
		cout << "The Number : (" << num << ") Was Not Found." << endl;
	else
		cout << "The Number : (" << arr[result] << ") Was Found At Index : (" << result << ")" << endl;
	
	return 0;
}

