#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ll a,b,c;
    while (true)
    {
    
        cin>>a>>b>>c;
        if (a==b && a==c & a==0)break;
        ll ans = 0;

        if(c-b == b-a) cout<<"AP "<<c+c-b<<endl;
        else{
            ans = (c/b)*c;
            cout<<"GP "<<ans<<endl;
        }
    }
}