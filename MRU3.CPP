//multiple inheritance
#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	char sname[20];
	public:
		void get();
		void put();

};
class std
{
	int clas;
	public:
		void getclas();
		void putclas();
};
class marks:public student,public std
{
	int m1,m2;
	public:
		void getmarks();
		void putmarks();

};
void std::getclas()
{
	cout<<"enter class->"<<endl;
	cin>>clas;
}
void std::putclas()
{
	cout<<"class is->"<<clas<<endl;
}
void student::get()
{
	cout<<"enter your roll no->"<<endl;
	cin>>rno;
	cout<<"enter student name->"<<endl;
	cin>>sname;
}
void student::put()
{
	cout<<"your roll no is->"<<rno<<endl;
	cout<<"your name is->"<<sname<<endl;
}
void marks::getmarks()
{
	cout<<"enter marks"<<endl;
	cin>>m1>>m2;
}
void marks::putmarks()
{
	cout<<"marks->"<<m1<<endl;
	cout<<"marks->"<<m2<<endl;
}
main()
{
	clrscr();
	marks a1;
	a1.get();
	a1.getmarks();
	a1.getclas();
	cout<<"######################################################"<<endl;
	a1.put();
	a1.putmarks();
	a1.putclas();
	cout<<"######################################################"<<endl;
	getch();
}

