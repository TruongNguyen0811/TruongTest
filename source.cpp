#include <iostream>
using namespace std;
int hieu(int a, int b){
	return a-b;
}
int tong(int a, int b){
	return a+b;
}
int tich(int a, int b){
	return a*b;
}
bool ChanLe(int a){
	cout<<a;
	if(a%2==0)
		cout<<"Chan"
	else
		cout<<"Le"
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if(pheptoan=='-')
	{return hieu;}
	if(pheptoan=='+'){
		return tong;
	}
	if(phepToan=='*'){
		return tich;
	}

	system("pause");
	return 0;
}