#include <bits/stdc++.h>
using namespace std;

void solve() {
    

    int n = 0, k = 0, x = 0;
    cin >> n >> k >> x;
    
    if(x != 1) {
        cout << "YES\n";
        cout << n <<"\n";
        while(n--) {
            cout <<"1 ";
        }
        cout << "\n";
        
        return;
    }
    
    if(k == 2 && x == 1) {
        if(n&1) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << n/2 << "\n";
            while(n) {
                cout << "2 ";
                n -= 2;
            }
            cout << "\n";
        }
        return;
    }
    
    if(k <= 2 && x == 1) {
        cout << "NO\n";
        return;
    }
    
    
    cout <<"YES\n";
    
    // for (int a = 0; a <= n / 2; a++) {
    //     for (int b = 0; b <= n / 3; b++) {
    //         if (2 * a + 3 * b == n) {
    //             cout << a+b <<"\n";
    //             // Print 3s first, then 2s (or any order)
    //             for (int i = 0; i < b; i++) cout << "3 ";
    //             for (int i = 0; i < a; i++) cout << "2 ";
    //             cout << "\n";
    //             return;
    //         }
    //     }
    // }
    
    // alternate way 
    // 2a + 3b = n
    // 2a = n - 3b
    // a = (n - 3b) / 2

    for (int b = 0; b <= n / 3; b++) {
        int rem = n - 3 * b;
        if (rem < 0) break;
        if (rem % 2 == 0) {
            int a = rem / 2;

            cout << a + b << "\n";
            for (int i = 0; i < b; i++) cout << "3 ";
            for (int i = 0; i < a; i++) cout << "2 ";
            cout << "\n";
            return;
        }
    }

    cout << "\n";
    
}

int main() {
    
    int t = 0;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}
