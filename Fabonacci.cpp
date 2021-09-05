#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,temp,i,n;
    cout<<"Enter NUmber";
    cin>>n;
    cout<<a<<b;
    for(i=3;i<=n;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        cout<<b;
    }
    return 0;
}
