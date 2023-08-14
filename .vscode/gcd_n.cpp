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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=gcd(arr[0],arr[1]);
    for(int i=1;i<n;i++)
    {
        // cout<<a<<" "<<arr[i]<<endl;
         a=gcd(a,arr[i]);
    }
    cout<<a<<endl;

    return 0;
}