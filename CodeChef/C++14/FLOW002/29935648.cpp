
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
    int count;
    
    
    
   int t;
   cin>>t;
   int a[t],b[t];
   for(int i=0; i<t;i++)
   {
    cin>>a[i]>>b[i];   
   }
   int an;
   for(int i=0; i<t;i++)
   {an=0;
     an=a[i]%b[i];
       cout<<an<<endl;
   }
	return 0;
}