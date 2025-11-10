
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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
 
void solve(){
    
    int n = 0, m = 0;
    cin >> n;
    map<int, int> mp;
    forn(i, n)  {
        cin >> m;
        mp[m]++;
    }
    
    if(mp.size() <= 1) {
        cout << "-1\n";
        return;
    }
    
    int c = 0;
    for(auto it: mp) {
        int freq = it.second;
        if(c == 0) {
            cout << freq << " " << n - freq << "\n";
        }
        while(freq--) {
            cout << it.first << " ";
        }
        if(c == 0) cout << "\n";
        c++;
    }
    
    cout<< "\n";
 
}

int main()
{
    fast_cin();
    int t = 1;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}