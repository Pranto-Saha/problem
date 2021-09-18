#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
   
    cout<<"Enter an integer"<<endl;
    cin>>n;
    (n%2==0)?cout<<n<<"is even":cout<<"is odd";
    return 0;
}