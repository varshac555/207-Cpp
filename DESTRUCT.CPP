//program demostrate to destructor
#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	   ~demo();
};
demo::~demo()
{
	cout<<"destructor called";
}
void main()
{
	clrscr();
	demo d;
	getch();
}