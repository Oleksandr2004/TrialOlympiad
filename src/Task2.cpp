#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string input;

long long res, inputSize;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    res = 0;
    cin >> input;

    inputSize = input.size();
    for (int i = 0; i < inputSize; i++)
        if (input[i] == '+') res++;

    cout << (2 * res) - inputSize << "\n";

    return 0;
}