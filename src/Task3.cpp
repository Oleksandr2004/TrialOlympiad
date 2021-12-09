#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;

    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;

    if (n % sum == 0) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}