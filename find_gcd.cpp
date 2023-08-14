#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    cout<<"first number"<<endl;
    int fn;
    cin>>fn;
    cout<<"second number"<<endl;
    int sn;
    cin>>sn;
    cout<<"gcd of the above two number is"<<endl;
    int a=gcd(fn,sn);
    cout<<a<<endl;
}