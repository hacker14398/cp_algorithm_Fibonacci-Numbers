#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long M = 1000000007;

pair<ll, ll> fib (ll n) {
    if (n == 0)
        return {0, 1};
 
    auto p = fib(n >> 1);
    ll c = ((p.first) * ((2 * p.second)%M + M - p.first))%M;
    ll d = ((p.first * p.first)%M + (p.second * p.second)%M)%M;
    if (n & 1)
        return {d, (c + d)%M};
    else
        return {c, d};
}
int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n == 0){
            cout<<"0"<<"\n";
            continue;
        }
        if(n == 1){
            cout<<"2"<<"\n";
            continue;
        }
        pair<ll, ll> a = fib(n+1);
        cout<<(a.first + a.second)%M<<"\n";
    }
	// your code goes here
	return 0;
}
