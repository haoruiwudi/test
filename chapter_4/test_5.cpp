//test_5.cpp	--using string and string combine first and last name
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string strfirst,strlast;
	cout<<"Enter your first name: ";
	getline(cin,strfirst);
	string strdouhao=", ";
	cout<<"Enter your last name: ";
	getline(cin,strlast);
	strfirst=strfirst+strdouhao+strlast;
	cout<<"Here's the information in a single string: "<<strfirst<<endl;
}
