#include <iostream>
#include <string>
using namespace std;

int main()
{
  int c;
  float e,f;
  char o;
  cout<<"Enter the operators: ";
  cin>>o;
  if(o=='+'||'-'||'*')
    {
        cout<<"Enter the inputes: ";
        cin>>e>>f;
        int a=e;
        int b=f;
        if(b==f && a==e)
        {
            if(o=='+')
             {
                 c=a+b;
             }
            if(o=='-')
             {
                 c=a-b;
             }
            if(o=='*')
             { 
                 c=a*b;
             }
             cout<<"Result is";
               cout<<c;
        }
        else
        {
        cout<<"Error! No two integer inputes are identified ";
        }
    }
    else
    {
  cout<<"Error!unknown opereator is identified ";
    }
}
