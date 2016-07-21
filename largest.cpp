#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
int a,b,c,max;
cout<<"Enter the numbers";
cin>>a>>b>>c;
max=a; 
if(max<b) 
max=b; 
if(max<c) 
max=c; 
cout<<"Max: "<<max; 

return 0;
}
