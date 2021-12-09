#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long n, k;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> k;

    long long a;
    for (int i = 0; i < n; i++) cin >> a;

    if ((n - 1) % (k - 1) == 0) cout << (n - 1) / (k - 1) << "\n";
    else cout << ((n - 1) / (k - 1)) + 1 << "\n";

    return 0;
}