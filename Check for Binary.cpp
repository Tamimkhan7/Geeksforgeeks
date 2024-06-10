#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int c = 0, k = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1' || s[i] == '0')
            c++;
        else
            k++;
    }
    // cout << k << endl;
    if (c == 0 || k != 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
}