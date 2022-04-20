//inheritance
#include<iostream.h>
#include<conio.h>
class base
{
	public:
		void display()
		{
		 cout<<"hello i am base class"<<endl;
		}
};
class derived:public base
{

	public:
		void display()
		{
		 cout<<"hello i am derived from base class"<<endl;
		}
};
int main()
{
	clrscr();
	derived d1;
	d1.display();
	d1.display();
	getch();
	return 0;
}
