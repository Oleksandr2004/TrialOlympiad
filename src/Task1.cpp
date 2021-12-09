#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long n1, n2;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n1 >> n2;

    for (int i = 0; i < 16; i++) {
        if (n1 == 0 && n2 == 0) break;
        else {
            if (i % 2 == 0 && n1 != 0) {
                n1--;
            }
            if (i % 2 == 1 && n2 != 0) {
                n2--;
            }
        }
    }

    if (n1 == 0 && n2 == 0) cout << ":)" << "\n";
    else cout << ":(" << "\n";

    return 0;
}