#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long n;

long long withdraw(long long sum, long long ops) {
    if (sum < 6) {
        long long res = ops + sum;
        return res;
    }

    long long sumToWithdraw6 = 0;
    long long sumToWithdraw9 = 0;

    for (int p = 2;; p++) {
        if (pow(6, p) > sum) {
            sumToWithdraw6 = pow(6, p - 1);
            break;
        }
    }

    if (sum >= 9) {
        for (int p = 2;; p++) {
            if (pow(9, p) > sum) {
                sumToWithdraw9 = pow(9, p - 1);
                break;
            }
        }
        long long withdraw6 = withdraw(sum - sumToWithdraw6, ops + 1);
        long long withdraw9 = withdraw(sum - sumToWithdraw9, ops + 1);
        return min(withdraw6, withdraw9);
    } else {
        return withdraw(sum - sumToWithdraw6, ops + 1);
    }

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;

    cout << withdraw(n, 0) << endl;

    return 0;
}
