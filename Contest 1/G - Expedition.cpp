#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void ppq(    priority_queue<pair<ll,ll>>pqfila){
    
    while(pqfila.size()){
        pair<ll,ll> x = pqfila.top();
        pqfila.pop();
        cout<<x.first<<" "<<x.second<<" | ";
    }
    cout<<endl;
    

}
void pg(vector<pair<ll,ll>>&v){

    for (pair<ll,ll> x : v){
        cout<<x.first<<" "<<x.second<<" | ";
    }
    cout<<endl;
}

void solve(){
    ll n; cin>>n;

    vector<pair<ll,ll>>v;
    vector<pair<ll,ll>>va;

    for (ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll dis,comb;
    cin>>dis>>comb;

    for(ll i=n-1;i>=0;i--){
                        //first = dis | second = comb
        va.push_back({dis-v[i].first, v[i].second});
    }

    priority_queue<pair<ll,ll>>pqfila;

    ll pos = 0;
    ll ans = 0;
    

    //pg(va);
    for(pair<ll,ll> ponto:va){
        
        if (pos+comb >= ponto.first){
            // vira -> first = combXtra  | second =  posicao
            pqfila.push({ponto.second,ponto.first});
            
            //cout<<"add ponto"<<endl;
        }
        
        else{

            while(! (pos+comb >= ponto.first)){

                if (!pqfila.size()){
                    cout<<-1<<endl;
                    return;
                }
                pair<ll,ll> parada = pqfila.top();
                //cout<<"escolhido: "<< parada.second<<" "<<parada.first<<endl;
                pqfila.pop();
                
                comb = parada.second + ( comb - (parada.first-pos));
                pos = parada.first;
                ans++;

                pqfila.push({ponto.second,ponto.first});

            }
            
            
            
        }
        //cout<<"pq: ";
        //ppq(pqfila);
        //cout<<"pos: "<<pos<<"| comb: "<<comb<<endl;

    }

    if (pos+comb>=dis){
            cout<<ans<<endl;
            return;
        }
    cout<<-1<<endl;





}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll w; cin>>w;
    while(w--)solve();
}

/*
1
4
4 4
5 2
11 5
15 10
25 10
*/