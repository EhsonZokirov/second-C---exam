#include<iostream>
using namespace std;
int main ()
{
    int hour,minute,sec,a;
    cin>>a;
    hour=a/3600%24;
    minute=a/60%60;
    sec=a%60;

    cout<<hour<<":";
    if(minute<10)cout<<"0";
    cout<<minute<<":";
    if(sec<10)cout<<"0";
    cout<<sec;
}

