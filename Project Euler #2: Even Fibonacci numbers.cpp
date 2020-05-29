#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll ans(ll n){
    ll sum = 0;
    ll a = 1, b = 2, k;
    while(b <= n){
        if(b%2 == 0) sum += b;
        k = b;
        b += a;
        a = k;
    }
    return sum;
}
int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout<<ans(n)<<"\n";
    }  
    return 0;
}

