#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

int count_prime(int);

int main()
{
    int n;
    system("CLS");
    cout<<"Enter the number : \n";
    cin>>n;
    int ans = count_prime(n);
    cout<<"ans is : "<<ans;
    return 0;
}

int count_prime(int n)
{
    int i,j;
    int count =0;
    vector<int> prime(n+1,true);
    for(i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
        }
        for(j=2*i;j<n;j=j+i)
        {
            prime[j] = false;
        }
    }
    return count;
}