#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n, m) for(ll i = n; i <= m; i+=2)
#define vll vector<ll>
long long M = 1000000007;
pair<ll, ll> fib (ll n) {
    if (n == 0)
        return {0, 1};
 
    auto p = fib(n >> 1);
    ll c = ((p.first) * ((2 * p.second)%M + M - p.first))%M;
    ll d = ((p.first * p.first)%M + (p.second * p.second)%M)%M;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}
int main() {
    ll t; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        pair<ll, ll> a = fib(n+1);
        pair<ll, ll> b = fib(m+2);
        ll sum = (b.first + M - a.first)%M;
        cout<<sum<<"\n";
    }
	// your code goes here
	return 0;
}
