#include<iostream>
using namespace std;

struct employ
{
   char name[23];
   int age;
   float salary;
   int hours;
};
main()
{
	employ e1;
  cout<<"the salaryis 2000"<<endl;
	cout<<"enter the employ name"<<endl;
	cin>>e1.name,23;
	cout<<"enter the employ age"<<endl;
	cin>>e1.age;
	cout<<"enter the hours"<<endl;
    cin>>e1.hours;
	cout<<"the name is ="<<e1.name<<endl;
	cout<<"the age is ="<<e1.age<<endl;
	cout<<"the hoiurs is ="<<e1.hours<<endl;
 
	
	return 0;
}
