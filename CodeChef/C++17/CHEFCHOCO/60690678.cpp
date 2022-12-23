#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int x[t],y[t],c[t],cost[t];
	
	for(int i=0;i<t;i++){
		cin>>c[i]>>x[i]>>y[i];
	}
	
	
	for(int i=0;i<t;i++){
		
		if(c[i]-x[i]>0){
			cost[i]=(c[i]-x[i])*y[i];
		}
		else cost[i]=0;
		cout<<cost[i]<<endl;
	}
		
		return 0;
	}
			
			
			
			

	    
				
		
	
	
	
	
	
	

		

 
 
       
