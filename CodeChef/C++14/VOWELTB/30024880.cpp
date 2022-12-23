
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
char inp;
cin>>inp;
if (inp=='a'||inp=='e'||inp=='i'||inp=='o'||inp=='u'||inp=='A'||inp=='E'||inp=='I'||inp=='O'||inp=='U')
  {cout<<"Vowel";
  }
 else{
     cout<<"Consonant";
 } 
	return 0;
}