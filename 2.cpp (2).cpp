#include<iostream>
using namespace std;
int main ()
{
    int N,a,b;
    cin>>N;

    for(int i=0; i<=N; i++)
    {
        a=(N%10);
        b=(N/100 % 10);
    }
    if(a<b)
        cout<<a<<" "<<b;
    else if(b<a)
        cout<<b<<" "<<a;
    else
        cout<<a<<" "<<b;
}

