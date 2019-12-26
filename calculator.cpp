#include <iostream>
#include <string>
using namespace std;

int main()
{
  int c; // variable for output
  float e,f; //variable for inputs
  char o; //variable for operator
  cout<<"Enter the operator: ";
  cin>>o;
  if(o=='+'||'-'||'*') //to check whether the operator entered is desired one
    {
        cout<<"Enter the inputes: ";
        cin>>e>>f;
        int a=e;
        int b=f;
        if(b==f && a==e) //to check whether entered inputes are integers
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
