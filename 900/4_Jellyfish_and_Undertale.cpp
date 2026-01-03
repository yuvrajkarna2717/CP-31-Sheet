#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



void solve(){
    ll a = 0, b = 0, n = 0;
    cin >> a >> b >> n;
    
    vector<ll> v(n);
    ll ans = b;
    for(ll  i = 0; i < n; i++) {
        cin >> v[i];
        
        if(v[i] >= a) ans += (a - 1);
        else ans += v[i];
    }
    
    cout << ans <<"\n";
    
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