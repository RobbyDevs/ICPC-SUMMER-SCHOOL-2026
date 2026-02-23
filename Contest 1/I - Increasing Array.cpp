#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,ant,ans = 0;
    cin>>n;
    cin>>ant;
    vector<ll>v(n);

    for (int i = 1;i<n;i++){
        ll atu; cin>>atu;

        if (ant>atu){
            ans += ant-atu;
            ant = atu + (ant-atu);
        }
        else
            ant = atu;
    }  

    cout<<ans<<endl;
}