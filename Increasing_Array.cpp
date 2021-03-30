#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll ans=0;
    for(ll i=1;i<n;i++){
        while(arr[i]<arr[i-1]){
            ans++;
            arr[i]++; 
        }
    }
    cout<<ans<<endl;
    return 0;
}