#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin>>t;
    while(t--){
        ll x,y,z,v;cin>>x>>y>>z>>v;
        ll p,maxi=0;
        for(ll i=1;i<=x;i++){
            for(ll j=1;j<=y;j++){
                p=v/(i*j);
                if(p*i*j==v && p<=z){
                    maxi=max(maxi,(x-i+1)*(y-j+1)*(z-p+1));
                }
            }
        }
        cout<<maxi<<endl;
    }
}
