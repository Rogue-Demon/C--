#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Opretor"<<endl;
    cin>>c;
    cout<<"Enter the Numbers"<<endl;
    cin>>a>>b;
    switch(c)
    {
        case 1:
        cout<<"sum= "<<a+b;
        break;
        case 2:
        cout<<"Sub= "<<a-b;
        break;
        case 3:
        cout<<"Multiply= "<<a*b;
        break;
        case 4:
        cout<<"Divide= "<<a/b;
        break;
        case 5:
        cout<<"Remainder= "<<a%b;
        break;
        default:
        cout<<"Unknown opreator"<<endl;
        break;
    }
    return 0;

}
