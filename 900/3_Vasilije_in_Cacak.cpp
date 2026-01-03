#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll getSum(ll n) {
    return ((n + 1) * n) / 2;
}

void solve(){
    ll n = 0, x = 0, k = 0;
    cin >> n >> k >> x;
    
    ll min_sum = getSum(k);
    ll max_sum = getSum(n);
    ll max_last_k_sum = max_sum - getSum(n - k);
    
    if( min_sum <= x && max_sum >= x && max_last_k_sum >= x) cout << "YES\n";
    else cout <<"NO\n";
}

int main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}