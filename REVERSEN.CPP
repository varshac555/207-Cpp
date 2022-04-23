//program to demostrate by reverse number
#include<iostream.h>
#include<conio.h>
void main()
{
	int rev=0,n,r;
	clrscr();
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
	r=n%10;
	rev=(rev*10)+r;
	n=n/10;
	}
	cout<<"reverse no is"<<rev;

getch();
}

