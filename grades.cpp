#include <iostream>
using namespace std;
 
int main()
{
   float x,y,z,av;
   cout<<"Enter 3 marks";
   cin>>x>>y>>z;
   av=(x+y+z)/3;
       
   if(av>=90)
   cout<<"Grade A";
   else if((av>=80) && (av<90)) 
   cout<<"Grade B";
   else if((av>=60) && (av<80))
   cout<<"Grade C";
   else if(av<60) 
   cout<<"Grade F";
   else 
   cout<<"Invalid";
   return 0;
}
