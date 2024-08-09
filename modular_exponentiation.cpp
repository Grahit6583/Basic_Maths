#include<iostream>
#include<stdlib.h>

using namespace std;

int modular_exponentiation(int , int , int);

int main()
{
    int x,n,m;
    system("CLS");
    cout<<"Enter the numbers : \n";
    cin>>x>>n>>m;
    int res = modular_exponentiation(x,n,m);
    cout<<"the modular exponentiation is : "<<res;
    return 0;
}

int modular_exponentiation(int x , int n , int m)
{
    int res =1;
    while(n>0)
    {
        if(n&1)
        {
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL *(x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}