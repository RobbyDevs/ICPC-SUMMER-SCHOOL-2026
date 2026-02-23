#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n){
    if(n == 0)
        return;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ind=1;
    stack<ll> pilha;

    for(ll i=0; i<n; i++){
        while(!pilha.empty() && pilha.top() == ind){
            pilha.pop();
            ind++;
        }

        if(v[i] == ind)
            ind++;

        else
            pilha.push(v[i]);
    }

    while(!pilha.empty() && pilha.top() == ind){
        pilha.pop();
        ind++;
    }

    if(ind == n+1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    while(cin>>n) solve(n);
    return 0;
}