#include<iostream>
using namespace std;
class calculator{
public:
    double a,b,c;
    operator +()
    {
        cout<<"A: ";
        cin>>a;
        cout<<"B: ";
        cin>>b;
        c=a+b;
        cout<<"Sum="<<c;
    }
    operator -()
    {
        cout<<"A: ";
        cin>>a;
        cout<<"B: ";
        cin>>b;
        c=a-b;
        cout<<"Sub="<<c;
    }
    operator *()
    {
        cout<<"A: ";
        cin>>a;
        cout<<"B: ";
        cin>>b;
        c=a*b;
        cout<<"mul="<<c;
    }
    operator/(int b)
    {
        cout<<"A: ";
        cin>>a;

        c=a/b;
        cout<<"div="<<c;
    }


};
int main()
{
    calculator m,n,o,p,q;
    int k;
    cout<<"1)Add two numbers."<<endl<<"2)Substract two numbers."<<endl<<"3)Multiply two numbers."<<endl<<"4)Divide two numbers."<<endl<<endl;
    cout<<"Enter your choice(serial number only):";
    cin>>k;
    if(k==1)
        +m;
    else if(k==2)
        -n;
    else if(k==3)
        *o;
    else if(k==4)
        p/(2);

    else
        cout<<"Please Choose 1 to 5 only!!";
    return 0;
}
