#include<iostream>
#include<stdlib.h>

using namespace std;

int gcd(int ,int);

int main()
{
    int a,b;
    cout<<"Enter the two no. : \n";
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"ans is : "<<ans;
}

int gcd(int a,int b)
{
    if(a==0)
    {
        return a;
    }

    if(b==0)
    {
        return b;
    }

    while(a != b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}