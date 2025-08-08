#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n][m],b[n][m];
        for(int i=0;i<n;i++){
            string s;cin>>s;
            for(int j=0;j<m;j++){
                int k=s[j]-'0';
                a[i][j]=k;
            }
        }
        for(int i=0;i<n;i++){
            string s;cin>>s;
            for(int j=0;j<m;j++){
                int k=s[j]-'0';
                b[i][j]=k;
            }
        }
    
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                int x=a[i][j];
                int y=b[i][j];
                if(x==y){
                    continue;
                }
                if(y-x==1 || y-x==-2){
                    a[i][j]=(a[i][j]+1)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+1)%3;
                    a[i+1][j]=(a[i+1][j]+2)%3;
                    a[i][j+1]=(a[i][j+1]+2)%3;
                }
                else if(y-x==-1 || y-x==2){
                    a[i][j]=(a[i][j]+2)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+2)%3;
                    a[i+1][j]=(a[i+1][j]+1)%3;
                    a[i][j+1]=(a[i][j+1]+1)%3;
                }
            }
        }
        int x=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]!=b[i][j]){x++;cout<<"NO"<<endl;break;}
            }
            if(x>0){break;}
        }
        if(x==0){cout<<"YES"<<endl;}
    }
}
