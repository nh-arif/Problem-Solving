#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        const int BITS = 30;
        vector<int> cnt1(BITS, 0), cnt0(BITS, 0);
        for (int b = 0; b < BITS; b++)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] & (1LL << b))
                    cnt1[b]++;
                else
                    cnt0[b]++;
            }
        }

        long long ans = 0;
        for (int k = 0; k < n; k++)
        {
            long long sum = 0;
            for (int b = 0; b < BITS; b++)
            {
                if (a[k] & (1LL << b))
                {
                    sum += 1LL * cnt0[b] * (1LL << b);
                }
                else
                {
                    sum += 1LL * cnt1[b] * (1LL << b);
                }
            }
            ans = max(ans, sum);
        }

        cout << ans << "\n";
    }
    return 0;
}
