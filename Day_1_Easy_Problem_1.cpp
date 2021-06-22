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
    for (int i = 0; i < (n/2); i++){
	int temp = arr[i];
	arr[i] = arr[n-1-i];
	arr[n-1-i] = temp;
    }
    cout << "The reversed array is ";
    for (int i = 0; i < n; i++)
	cout << arr[i] << " ";
    return 0;
}
