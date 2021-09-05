
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THREE NUMBERS : "<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<a<<"IS LARGEST \n";
    else if(b>a&&b>c)
    cout<<b<<"IS LARGEST \n";
    else
    cout<<c<<"IS LARGEST \n";
    return 0;
}
