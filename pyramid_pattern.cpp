#include<iostream> 
using namespace std;
int main()
{
    int k=6;
        for(int i=1;i<=6;i++)
        {
            for(int j=1;j<=6;j++)
            {
            
               
                   if(j>=k)
                   {
                       cout<<"* ";
                   }
                   else{
                    cout<<" ";
                   }

               
            }
            k--;
            cout<<endl;
        }
    
    return 0;
}