#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); \

signed main() {
    fast
    //freopen("popcorn.in","r",stdin);
    // freopen("output.txt","w", stdout);
    ll t = 1;
    cin>>t;
    map<char ,int >mp;
    //codeforces

    mp['c']++;
    mp['o']++;
    mp['d']++;
    mp['e']++;
    mp['f']++;
    mp['o']++;
    mp['r']++;
    mp['c']++;
    mp['e']++;
    mp['s']++;

    while (t--) {
 char x;cin>>x;
 if(mp[x])cout<<"yes\n";
 else cout<<"NO\n";

       }

    return 0;
}