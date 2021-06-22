#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    // Swap with 3rd variable
    int temp = a;
    a = b;
    b = temp;
    //Swap without third variable: comment the above 3 line and uncomment the below 3 lines.
    // a = a + b;
    // b = a - b;
    // a = a - b;
    cout << "The value of a is " << a << "\n";
    cout << "The value of b is " << b;
    return 0;
}
