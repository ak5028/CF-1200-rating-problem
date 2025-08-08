#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin>>t;
    while(t--){
       ll x,y,k;
       cin>>x>>y>>k;
       ll a,b;
       while(true){
        if(k==0){break;}
        if(x>=y){
            a=x/y;
            a++;
            b=a*y-x;
            if(b>k){x+=k;break;}
            else{
                x+=b;
                while(x%y==0){
                    x/=y;
                }
                k-=b;
                
            }
        }
        else if(x<y && x!=1){
            a=y-x;
            if(a>k){x+=k;break;}
            else{
                x=1;
                k-=a;
            }
        }
        else if(x==1){
            a=y-x;
           // b=k/a;
            if(k%a==0){x=1;}
            else{
                b=k%a;
                x+=b;
            }
            break;
        }
       }
       cout<<x<<endl;


    }
}