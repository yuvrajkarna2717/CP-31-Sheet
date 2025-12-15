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

// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


void solve() {
    int n = 0; cin >> n;
    
    v32 v(n);
    forn(i, n) {
        cin >> v[i];
    }
    
    bool ans = false;
    forn(i, n) {
        forsn(j, i+1, n) {
            if(gcd(v[i], v[j]) <= 2) {
                cout << "YES\n";
                ans = true;
                return;
            }
        }
    }
    
    if(!ans) cout << "NO\n";
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