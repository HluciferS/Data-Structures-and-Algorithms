#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,x;
    cout<<"Enter a number : ";
    cin>>n;
    x=n;
        while(x!=0)
        {
            x=x/10;
            i++;
            if(x==0)
                cout<<"Number of digits are "<<i<<" in "<<n;
        }
    return 0;
}