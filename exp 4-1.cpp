#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

float add (float x, float y)
{
float sum ;
sum = x + y;
return sum;
}
float sub (float x, float y)
{
float diff;
diff = x - y;
return diff;
}
float multi (float x , float y)
{
float prod;
prod = x * y;
return prod; 
}
float div (float x, float y)
{
float quo;
quo = x / y;
return quo;
}
float mod (float x , float y)
{
float rem;
rem = fmod(x,y);
return rem;
}

int main ()
{
char a;

do
{
int c;
double x,y;

cout << "MENU:"<< endl;
cout << "1.addition"<< endl;
cout << "2.subtraction"<< endl;
cout << "3.multiplication"<< endl;
cout << "4.divide"<< endl;
cout << "5.modulus"<< endl;
cout << "please choose number of operation to be performed: ";
cin >> c;


switch (c)
{
case 1:
cout << "input value for x: ";
cin >> x;
cout << "input value for y: ";
cin >> y;
cout << "the application to be performed is addition!"<<endl;
cout << "the sum of the two values is : "<< add (x,y);
break;


case 2:

cout << "input value for x: ";
cin >> x;
cout << "input value for y: ";
cin >> y;
cout << "the application to be performed is subtraction!"<<endl;
cout << "the difference of the two values is : "<<sub (x,y) ;
break;


case 3:

cout << "input value for x: ";
cin >> x;
cout << "input value for y: ";
cin >> y;
cout << "the application to be performed is multiplication"<<endl;
cout << "the product of the two values is : "<< multi (x,y);
break;


case 4:
cout << "input value for x: ";
cin >> x;
cout << "input value for y: ";
cin >> y;
cout << "the application to be performed is division!"<<endl;
cout << "the quotient of the two values is : "   << div (x,y);
break;


case 5:

cout << "input value for x: ";
cin >> x;
cout << "input value for y: ";
cin >> y;
cout << "the application to be performed is modulus! "<< endl;
cout << "the remainder of the two values after dividing is: "<< mod(x,y);
break;

default:
cout <<"invalid input!";
break;
}
cout << " "<< endl;
cout << "do you want to continue? (y = yes & n = no) : ";
cin >> a;
cout << " "<< endl;
}while (a=='y'|| a=='Y');

if (a!='y' || a!='Y')
cout << "thankyou!";

getch();
return 0;
}
