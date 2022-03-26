#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int N,counter=0;
    for(int i=1; i>0; i++)
    {
        cin>>N;
        if(N==0)
        {
            break;

        }
        counter++;
    }
    cout<<counter;
}
