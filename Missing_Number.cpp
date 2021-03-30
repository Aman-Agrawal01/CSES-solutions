#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll arr[n-1];
    for(ll i=0;i<n-1;i++) cin>>arr[i];
    sort(arr,arr+n-1);
    int flag=0;
    ll i;
    for(i=0;i<n-1;i++){
        if(arr[i]!=(i+1)){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<i+1<<endl;
    else
        cout<<n<<endl;
    return 0;
}