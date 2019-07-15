#include <iostream>
#include <conio.h>

using namespace std;

void selection()
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
}

void bubble()
{
char a;
cout << "BUBBLE SORTING"<< endl;
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
	for(j=0; j<n-i-1; j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp= arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
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
}

int main ()
{
char c;
cout << "choose between bubble or selection sort (b for bubble & s for selection): ";
cin >> c;
if (c=='b'|| c=='B')
{
bubble();
}
else if (c=='s'|| c== 'S')
{
selection();
}
else 
{
cout << "invalid input!" << endl;
}
getch();
return 0;
}
