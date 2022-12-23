#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    ll l;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l;
        vector<int> v;
        for(ll j=0;j<l;j++){
            int in;
            cin>>in;
 
            v.push_back(in);
        }
        ll sum=0;
        auto it=v.begin();
        auto end=v.end();
        auto min=v.end();
        ll size;
        while(it < end){
            min=min_element(it,end);
            size=end-min;
            sum+=size*(*min);
            end=min;
        }
        cout<<sum<<endl;
    }
}