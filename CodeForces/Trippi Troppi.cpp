#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, acronym = "", word;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> word)
        {
            acronym += tolower(word[0]);
        }
        cout << acronym << endl;
    }
    return 0;
}