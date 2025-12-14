#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t = 0;
    cin >> t;
    
    while(t--) {
        int n = 0; cin >> n;
        
        int a = 0, run = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == 0) run++;
            else {
                ans = max(ans, run);
                run = 0;
            }
        }
        
         ans = max(ans, run);
         
         cout << ans << "\n";
    }
    
    return 0;
}
