#include <iostream>

using namespace std;

// Function to sort binary array in linear time
int sort(int A[], int n)
{
	int allSorted = 0;
	cout << n << endl;
	
	for (int i = 0; i < n; ++i)
	{
		if (!A[i])
			A[allSorted++] = 0;
	}

	while(allSorted != n){
		A[allSorted++] = 1;
	}

}

// Sort binary array in linear time
int main(void)
{
	int A[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 };
	int n = sizeof(A)/sizeof(A[0]);

	sort(A, n);

	// print the rearranged array
	for (int i = 0 ; i < n; i++) {
		printf("%d ", A[i]);
	}

	return 0;
}