#include <bits/stdc++.h>
using namespace std;

bool canMatch(string p, string s)
{
    int i = 0, j = 0;
    while (i < p.length() && j < s.length())
    {
        if (p[i] != s[j])
            return false;

        int pCount = 1;
        while (i + 1 < p.length() && p[i] == p[i + 1])
        {
            pCount++;
            i++;
        }

        int sCount = 1;
        while (j + 1 < s.length() && s[j] == s[j + 1])
        {
            sCount++;
            j++;
        }

        if (sCount < pCount || sCount > 2 * pCount)
            return false;

        i++;
        j++;
    }

    return i == p.length() && j == s.length();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;

        if (canMatch(p, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}