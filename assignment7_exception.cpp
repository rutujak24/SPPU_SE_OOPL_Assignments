/*
NAME: RUTUJA KAWADE
 ROLL NO : 21230
ASSIGNMENT :7

Crete User defined exception to check the following conditions and throw 
the exception if the criterion does not meet.
P:F:-LTL-UG/01/R0
B
a. User has age between 18 and 55 
b. User has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/Mumbai/Bangalore/Chennai
d. User has 4-wheeler
Accept age, income, city, vehicle from the user and check for the conditions 
mentioned above. If any of the condition does not met then throw an 
exception
*/

#include <iostream>
using namespace std;
class test
{
	int age,vehical;
	double income;
	string city;
	public:
		class error
		{
			public:
				error(int a)
				{
					cout<<" Invalid age or vehical type"<<endl;
				}
				error(double b)
				{
					cout<<"Invalid income"<<endl;

				}
				error(string c)
				{
					cout<<"Invalid city"<<endl;
				}

		};
		void input()
		{
			cout<<"Enter age: "<<endl;
			cin>>age;
			cout<<"Enter type of vehical: "<<endl;
			cin>>vehical;
			cout<<"Enter salary: "<<endl;
			cin>>income;
			cout<<"Enter city: "<<endl;
			cin>>city;
			if(age<18 || age>55)
				throw error(age);
			else
			if(vehical!=4)
				throw error(vehical);
			else
			if(city!="Pune" && city!="Mumbai" && city!="Bangalore" && city!="Chennai")
				throw error(city);
			else
			if(income<50000 || income>100000)
				throw error(income);
			else
				display();

		}
		void display()
		{
			cout<<"Age: "<<age<<endl;
			cout<<"Vehical type: "<<vehical<<endl;
			cout<<"City: "<<city<<endl;
			cout<<"Salary: "<<income<<endl;
		}
};
int main()
{
	test t;
	try
	{
		t.input();
	}
	catch(test::error)
	{
		cout<<"Invalid data";
	}
	return 0;
}