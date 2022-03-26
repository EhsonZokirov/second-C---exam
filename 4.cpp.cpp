#include<iostream>

using namespace std;
int main ()
{
    int hour,min,sec,a,b;
    cin>>sec;
    hour=sec*60%12;
    min=sec*60%60;
    cout<<hour<<":"<<min<<":"<<sec;
}
