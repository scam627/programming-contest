#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, MIN = 1000000, i, j;
    cin >> n;
    vector<int> soldiers(n);
    for (auto &x : soldiers)
        cin >> x;
 
    for (int idx = 0; idx < n; idx++)
    {
        if (MIN > abs(soldiers[idx % n] - soldiers[(idx + 1) % n]))
        {
            MIN = abs(soldiers[idx % n] - soldiers[(idx + 1) % n]);
            i = idx % n + 1;
            j = (idx + 1) % n + 1;
        }
    }
    cout << i << " " << j << "\n";
    return 0;
}
