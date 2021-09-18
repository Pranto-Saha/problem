#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping--"<<endl;
    cout<<"a=" <<a<<",b="<<b<<endl;
    return 0;
}