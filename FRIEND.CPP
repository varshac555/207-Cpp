#include<iostream.h>
#include<conio.h>
class one
{
int a,b;
public:
void setA(int x,int y)
{
a=x;
b=y;
}
friend int add(one);
};
int add(one p)
{
return p.a+p.b;
}
void main()
{
int sum,a,b;
clrscr();
one q1;
cout<<"\nenter the value a";
cin>>a>>b;
q1.setA(a,b);
sum=add(q1);
cout<<"\nadditon of A+B:"<<sum;
getch();
}