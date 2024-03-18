#include<iostream>
using namespace std;
int main()
{
int a,b,c,grate;
cin>>a;
cin>>b;
cin>>c;
if(a>b && a>c)
{
    cout<<"grate "<<a<<endl;
}
else if(b>a && b>c)
{
    cout<<"grate "<<b<<endl;
}
else
{
    cout<<"grate "<<c;
}
}

