//test_4  using char and cstring combine first and last name
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char first [10];
	char last[10];
	cout<<"Enter your first name: ";
	cin.getline(first,10);
	char douhao[3]=", ";
	strcat(first,douhao);
	cout<<first;
	cout<<"Enter your last name: ";
	cin.getline(last,10);
	strcat(first,last);
	cout<<"Here's the information in a single string: "<<first<<endl;
}
