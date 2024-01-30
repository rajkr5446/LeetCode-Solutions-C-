#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int s = x;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i != 0)
                continue;
            if (x / i >= n)
                s = min(s, x / i);
            if (i >= n)
                s = min(s, i);
        }
        cout << x / s << endl;
    }
    return 0;
}