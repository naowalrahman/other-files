/**
 * @file D.cpp
 * @author Naowal Rahman
 * @date 2024-05-27 14:56
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    for(int i = 0; i < k - 3; i++) cout << "1 ";
    n -= k - 3;
    if(n % 2 == 1) cout << "1 " << n / 2 << " " << n / 2;
    else {
        int n2 = n / 2;
        if(n2 % 2 == 0) cout << n2 / 2 << " " << n2 / 2 << " " << n2;
        else cout << "2 " << n2 - 1 << " " << n2 - 1;
    }
    cout << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
