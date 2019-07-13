#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
char a;
cout << "SELECTION SORTING"<< endl;
do
{
int n,i,j,temp,arr[999];

cout << "enter array size: ";
cin >> n;
cout << "enter array elements: ";
cout << " "<< endl;
for (i=0; i<n; i++)
{
cin >> arr[i];
}

for(i=0; i<n; i++)
{
	for(j=i+1; j<n; j++)
	{
		if(arr[i]>arr[j])
		{
			temp= arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}

cout << "sorted data: ";
for (i=0; i<n; i++)
{
cout << arr[i]<< " ";
}
cout << " "<< endl;
cout<<"do you want to continue? (y = yes & n = no): ";
cin>> a;
cout << " "<< endl;
}while(a=='y'|| a=='Y');

if(a!='y'||a!='Y')
cout <<"thankyou!";


getch();
return 0;
}
