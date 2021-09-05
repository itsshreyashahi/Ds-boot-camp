#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers : \n";
    cin>>a>>b;
    cout<<"......BEFORE SWAPPING......\n";
    cout<<"X is "<<a<<endl;
    cout<<"Y is "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"......AFTER SWAPPING......\n";
    cout<<"X is "<<a<<endl;
    cout<<"Y is "<<b<<endl;
    return 0;
}