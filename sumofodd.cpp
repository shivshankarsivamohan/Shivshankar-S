#include<iostream>
using namespace std;
int main()
{
int n;
int sum=0, sum1=0;
cout<<"Enter the number of elements"<<endl;
cin>>n
for(i=0;i<n;i++)
{
if(i%2==0)
{
sum=sum+i;
}
}
cout<<"sum of even numbers is="<<sum<<endl;
for(int i=0; i<=n; i++)
{
if(i%2!=0)
{
sum1=sum1+i;
}
}
cout<<"sum of odd numbers is="<<sum1;
}

