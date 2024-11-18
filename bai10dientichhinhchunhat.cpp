#include <iostream>
using namespace std;
int main()
{
	cout << "tinh dien tich hinh chu nhat:\n";
	double dai, rong, chuvi, dientich;
		cout << " chieu dai :"; cin >> dai;
		cout << "chieu rong :"; cin >> rong;

		chuvi = (dai + rong)* 2;
		dientich = (dai * rong);

		cout << "chuvi: " << chuvi << endl; 
		cout << "dientich: " << dientich << endl;

		return 0; 
}