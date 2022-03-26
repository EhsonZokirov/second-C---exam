#include<iostream>
using namespace std;
int main ()
{
    int N,sum=0,n;
    cin>>N;

    for(int i=0; i<=N; i++)
    {
        sum+= (N%10);
        n=(N/10);

    cout<<sum;
}
