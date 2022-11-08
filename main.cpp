//Marcus K. Strsughter. j00938999. 11/4/22  Page 259
//This program prompts the user to input the value of 'a' (the coefficient of x squared), 'b'( the coefficient of x), and 'c'(the constant term). 
#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
  double a,b,c,discriminant,root1,root2;

  cout<<"Enter value of a:";
  cin>>a;
  cout<<endl;

  cout<<"Enter value of b:";
  cin>>b;
  cout<<endl;

  cout<<"Enter value of c:";
  cin>>c;
  cout<<endl;

  discriminant= (pow(b,2.0))-4*a*c;

  cout<<"Discriminant="<<discriminant<<endl;

  if (discriminant==0)
    cout<<"There is one real root."<<endl;

  if (discriminant>0)
    cout<<"There are two real roots."<<endl;

  if (discriminant<0)
    cout<<"There are two complex roots"<<endl;

  root1= (-b+sqrt(pow(b,2.0)-(4*a*c)))/(2*a);
  root2=(-b-sqrt(pow(b,2.0)-(4*a*c)))/(2*a);

  cout<<"root 1:"<<"x="<<root1<<
    endl;
  cout<<"root 2:"<<"x="<<root2<<
    endl;

  return 0;
}
