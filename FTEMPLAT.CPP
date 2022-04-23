//program to demonstrate function template for finding maximum number between 2 number
#include<iostream.h>
#include<conio.h>
template<class T>
T max(T a,T b)
{
	if(a>b)
	      return a;
	else
	      return b;
}
void main()
{
	clrscr();
	char ch1,ch2,ch3;
	cout<<"\n enter two character:";
	cin>>ch1>>ch2;
	cout<<"\n-------------------------\n";
	cout<<"\n maximum character is:\n";

	ch3=max(ch1,ch2);
	cout<<"\nch3:\t"<<ch3;

	cout<<"\n--------------------------\n";
	int a,b,c;
	cout<<"\n enter two integer:\n";
	cin>>a>>b;
	cout<<"\n---------------------------\n";
	cout<<"\n maximum integer is :\n";

	c=max(a,b);

	cout<<"\nc:\t"<<c;
	getch();
}

