
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
    int count;
    
    
    
   int t;
   cin>>t;
   int a[t];
   for(int i=0; i<t;i++)
   {
    cin>>a[i];   
   }
   for(int i=0; i<t;i++)
   { count=0;
       while(a[i]!=0)
       {   
           if(a[i]%10==4)
           {
               count++;
           }
         a[i]=a[i]/10;
           
       }
     cout<<count<<endl;  
   }
	return 0;
}
