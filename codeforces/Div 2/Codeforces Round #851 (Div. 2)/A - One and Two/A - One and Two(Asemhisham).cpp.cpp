//author Asemhisham

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e6+5;
signed main() {
    fast
  
    ll t = 1;
 cin>>t;
    while (t--) {
map<int,int>mp;
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;++i) {
    int z;cin >> z;
    if (z == 2)
        mp[z]++;
    v[i]=mp[2];
}
if(mp[2]&1){
    cout<<"-1\n";
}

else{
    int x=mp[2]/2;
    for (int i = 0; i < n; ++i) {
        if(v[i]==x){
            cout<<i+1<<"\n";
            break;
        }
    }
}

    }

    return 0;
}