
# include <iostream>
# include <set>

using namespace std;

int zeroSumSubarray(int arr[], int size){

	set <int> set;
	set.insert(0);

	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
		if (set.find(sum) != set.end()){
			return 1;
		}
		else {
			set.insert(sum);
		}
	}

	return 0;
}

// main function
int main()
{
	int A[] = { 4, 2, -3, -1, 0, 4 };
	int n = sizeof(A)/sizeof(A[0]);

	zeroSumSubarray(A, n) ? 
			cout << "Subarray exists":
			cout << "Subarray do not exist";

	return 0;
}