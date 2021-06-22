#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers: "; 
    for (int i = 0; i < n; i++) 
	cin >> arr[i];
    int msum=arr[0];
    int seq_start = 0, seq_end = 0, best_start = 0, best_end = 0;
    int sum = 0;
    for (int i = 0; i < n; i++){
	sum += arr[i];
	if ( sum >= 0 ){
	    if (sum > msum){
		msum = sum;
		seq_end = i;
		best_start = seq_start;
		best_end = seq_end;
	    }
	}
	if ( sum < 0 ){
	    seq_start = i + 1;
	    sum = 0;
	}
    }
    cout << "Max subarray sum is " << msum << ", of elements ";
    for (int i = best_start; i <= best_end; i++) 
	cout << arr[i] << " ";
    cout << " which is a contiguous subarray.";
    return 0;
}
