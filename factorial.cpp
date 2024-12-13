// WAP to print the factorial of a given nuber using recursion

# include <iostream>
using namespace std;
int fact(int a)
{
 if(a==0)
 {
    return 1;
 }
 return (a*fact(a-1));
}
int main()
{
    int a;
    cout<<"Enter any number for factorial\n";
    cin>>a;
    cout<<fact(a);
}