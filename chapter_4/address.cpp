//address.cpp	--using the & operator to find addresses
#include <iostream>
int main()
{
	using namespace std;
	int donuts =6;
	double cups=4.5;

	cout<<"donuts valus = "<<donuts;
	cout<<" and donuts address = "<<&donuts<<endl;
	cout<<"cups valus = "<<cups<<" and cups address = "<<&cups<<endl;
	return 0;
}
