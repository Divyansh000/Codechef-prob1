#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    double ta,res;
    cin>>a>>ta;
    if((a%5==0)&&(ta-a)>=0.5)
    {
        res=ta-a-0.5;
        cout<<fixed<<setprecision(2)<<res;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<ta;
    }
    return 0;
}
