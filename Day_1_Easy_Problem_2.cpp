#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    bool palin = true;
    int n = s.size();
    for (int i=0; i<(n/2); i++){
	if (s[i] != s[n-1-i]){ //replace this by if (tolower(s[i]) != tolower(s[n-1-i])) if case insensitive match is needed 
	    palin = false;
	    break;
	}
    }
    if (palin)
	cout << s << " is a palindrome";
    else
	cout << s << " is not a palindrome";
    return 0;
}
