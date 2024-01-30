#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char a = 'a';
        string str = "";
        for (int i = 0; i < k; i++)
        {
            str.push_back(char(int(a) + i));
        }
        string rev = "";
        for (int i = k - 1; i >= 0; i--)
        {
            rev.push_back(char(int(a) + i));
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                cout << str;
            else
                cout << rev;
        }
        cout << endl;
    }
    return 0;
}