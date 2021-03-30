#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len = str.length();
    int ans = 1;
    char x=str[0];
    int n=1;
    for(int i=1;i<len;i++){
        if(x==str[i])
            n++;
        else{
            n=1;
            x = str[i];
        }
        ans = max(ans,n);
    }
    cout<<ans<<endl;
    return 0;
}