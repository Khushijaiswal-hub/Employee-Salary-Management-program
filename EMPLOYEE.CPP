#include<iostream.h>
#include<conio.h>
class employee
{
private:
char name[10];
int  id ;
int salary ;
int performance;
public:
void get()
{
cout<<"name= ";
cin>>name;
cout<< " employee id= " ;
cin >> id;
cout<<" salary= "  ;
cin>> salary;
cout <<" performace of employee upto 100%= " ;
cin>>performance;
}
void show ()
{
if(performance<20%)
{
cout<<"salary=20000  " ;
}
if (performance <40%    )
{
cout<<"salary=40000";
}
if{

cout<< "salary=8000" ;
}
if( performance<100%)                {
cout<< "salary =100000";
}}};
   void main()
   {
   clrscr();
   employee asmit;
   khushi.get();
   khushi.show();
   getch()
   ;
   }