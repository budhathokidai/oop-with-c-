#include<iostream>
using namespace std;
class student
{
	char fname[20];
	int rollno;
	string mobno;
	public:
		void getinfo()
		{
			cout<< "Enter first name: ";
			cin >> fname;
			cout << "Enter roll no: ";
			cin >> rollno;
			cout << "Enter mobileno: ";
			cin >> mobno;
		}
		void displayinfo()
		{
			cout << "Students deatails :"<<endl;
			cout << "Fisrt Name :"<< fname<<endl;
			cout << "Roll no:"<< rollno<<endl;
			cout << "Mobile no :" << mobno<<endl;	
		}
};
int main()
{
	student std;
	std.getinfo();
	std.displayinfo();
	return 0;
}