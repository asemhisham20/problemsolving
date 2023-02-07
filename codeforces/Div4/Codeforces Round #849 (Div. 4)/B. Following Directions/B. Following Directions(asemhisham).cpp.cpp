#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main() {
    fast

    ll t = 1;
    cin>>t;
    while (t--) {
        int x = 0, y = 0, n,f=0;
        string moves;
        cin >> n >> moves;
        for(auto& i : moves){
            if(i == 'L') x--;
            else if(i == 'R') x++;
            else if(i == 'U') y++;
            else y--;
            if(x == 1 && y == 1){
                cout << "YES\n";
                f=1;
                break;
            }
        }
        if(!f)
        cout << "NO\n";
       }
    return 0;
}