#include<iostream.h>
#include<conio.h>
class demo()
{
	private:
	    int x;
	public:
	demo()
	{
	cout<<"\tThe constractor with no parameter";
	}
	demo(int a)
	{
	x=a;
	cout<<"\n\tConstractor with one parameter x="<<x;
	cout<<"\n\tSquare of x is "<<x x;
	}
	demo(int a,int b)
	{
	cout<<"\n\tConstructor with two parameter a="<<a<<"b="<<b;
	cout<<"\n\tAddition is a+b="<<a+b;
	}
	demo(int a,int b,int c)
	{
	cout<<"\n\tConstructor with three parameter a="<<a<<"b="<<b<<"c="<<c"
	cout<<"\n\tAddition is a+b+c";
	}
	demo(demo&d)
	{
	cout<<"\n\tCopy of constructor isx=d.x="<<d.x;
}
	void main()
	{
	clrscr();
	demo d1;
	demo d2(10);
	demo d3(20,30);
	demo d4(20,30,40);
	demo d5(d2);
	getch();
}