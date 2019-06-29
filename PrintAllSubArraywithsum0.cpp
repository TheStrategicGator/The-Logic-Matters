
# include <iostream>
# include <unordered_map>

using namespace std;

void printallSubarrays(int arr[], int size){

	unordered_map <int, int>  map;
	map.insert(pair<int,int>(0,-1));

	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
		auto it = map.find(sum);	
		if ( it != map.end()){
						
			while (it != map.end()){

				if (it->first == sum)
				cout << "Found: " << it->second + 1 << " " << i << endl;
				it++;
			}


		}
		
		map.insert(pair<int,int>(sum,i));

	}

}

// main function
int main()
{
	int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
	int n = sizeof(arr)/sizeof(arr[0]);

	printallSubarrays(arr, n);

	return 0;
}