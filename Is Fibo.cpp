#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
bool fib(long n){
    long f0 = 0, f1 = 1, k;
    while(f0 <= n){
        if(f0 == n) return true;
        k = f1;
        f1 += f0;
        f0 = k;
    }
    return false;
}
string solve(long n) {
    if(fib(n)) return "IsFibo";
    return "IsNotFibo";
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long n;
        cin >> n;
        string result = solve(n);
        cout << result << "\n";
    }
    return 0;
}

