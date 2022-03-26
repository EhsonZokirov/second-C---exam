#include<iostream>
using namespace std;
int main ()
{
    int hour,min,sec,a;
    cin>>a;
    hour=a/3600%24;
    min=a/60%60;
    sec=a/3600%60;
    cout<<hour<<":"<<min<<":"<<sec;
}

