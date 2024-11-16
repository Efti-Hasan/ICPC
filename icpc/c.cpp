#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;  

    for (int i = 1; i <= t; i++) 
    {
        int n;
        long long K;
        cin >> n >> K;  

        long long totalWaterings = 0;

        for (int j = 0; j < n; j++) 
        {
            long long X, Y;
            cin >> X >> Y;   
            totalWaterings += K / X;
        }
        cout << "Case " << i << ": " << totalWaterings << endl;
    }

    return 0;
}
