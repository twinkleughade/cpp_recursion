// WAP to find nth terms of fibonacci series
# include <iostream>
using namespace std;
int fib(int a)
{
    if(a==0)
    {
        return 1;
    }
    if(a<0)
    {
        return 0;
    }
    return fib(a-1)+fib(a-2);
}
int main()
{
    int a;
    cout<<"enter any no for fibonacci \n";
    cin>>a;
    cout<<fib(a);
}