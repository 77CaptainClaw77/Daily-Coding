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
    int max = arr[0];
    for (int i = 0; i < n; i++)
	if (max < arr[i])
	    max = arr[i];
    cout << "The maximum among ";
    for (int i = 0; i < n; i++) 
	cout << arr[i] << " ";
    cout << "is " << max;
    return 0;
}
