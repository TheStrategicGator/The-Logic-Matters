//
// Created by optimus on 29/6/19.
//

// Example program
#include <iostream>
#include <unordered_map>

using namespace std;

void findPair( int arr[], int n, int sum){

    unordered_map<int,int> map;
    for ( int i = 0; i < n; i ++){
        if (map.find(sum-arr[i]) != map.end()){
            cout << "Found: " << map[sum-arr[i]] << " " << i << endl;
        }
        else {
            map[arr[i]] = i;
        }

    }

}


int main()
{
    int arr[] = { 8, 7, 2, 5, 3, 1};
    int sum = 10;

    int n = sizeof(arr)/sizeof(arr[0]);

    findPair(arr, n, sum);

    return 0;
}