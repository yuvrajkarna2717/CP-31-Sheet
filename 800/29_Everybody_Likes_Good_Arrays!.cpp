#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;

#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define INF 2e18
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define endl "\n"


void solve() {
    int n = 0; cin >> n;
    
    v32 v(n);
    int run_odd = 0, run_even = 0, ans = 0;
    
    forn(i, n) {
        cin >> v[i];
        if(v[i] & 1) {
            ans += max((run_even - 1), 0);
            run_even = 0;
            run_odd++;
        } else {
            ans += max((run_odd - 1), 0);
            run_odd = 0;
            run_even++;
        }
    }
    
    ans += max((run_even - 1), 0);
    ans += max((run_odd - 1), 0);
    
    cout << ans << "\n";
    
}

int main() {
    fastIO();

    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}