#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(ll n,ll m){
  if(m==0){
    return n;
  }else{
    return gcd(m,n%m);
  }
}


int main() {
  
  
 ll t;cin>>t;
 while(t--){
   ll n,m;cin>>n>>m;

   ll k=gcd(n,m);

   ll lcm=n*m/k;

   cout<<k<<" "<<lcm<<endl;


 }
  return 0;
}
