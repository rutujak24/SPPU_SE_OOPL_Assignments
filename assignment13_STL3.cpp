/*NAME : RUTUJA KAWADE
  ROLL NO : 21230
  ASSIGNMENT :13

  Write C++ program using STL for sorting and searching with user-defined 
records such as Person Record (Name, birth date, telephone no), item record 
(item code, item name, quantity and cost)
*/

#include <iostream>
#include <algorithm>
using namespace std;

class student{
public:
	int dob;
	long tel;
	string name;

	void input(){

			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Birth date: ";
			cin>>dob;
			cout<<"Enter telephone: ";
			cin>>tel;

	}
	void display(){

		cout<< name<<"          ";
		cout<< dob<<"           ";
		cout<<tel<<endl;

	}
};
bool camparename(student s1,student s2){
	return(s1.name< s2.name);
}
int main() {
	student s[10];
	string nm, name1[10];
	int n;
	cout<<"Enter the no of students :";
	cin>>n;
	for(int i=0;i<n;i++){

		s[i].input();

	}
	sort(s,s+n,camparename);
	cout<<"NAME     BIRTH DATE    TELEPHONE "<<endl;
	for(int i=0;i<n;i++){
		name1[i]=s[i].name;
		s[i].display();
	}
	cout<<"Enter the record to be searched";
	cin>>nm;
	if(binary_search(name1,name1+n,nm))
		cout<<"Record found";
	else
		cout<<"Record not found";
	return 0;
}