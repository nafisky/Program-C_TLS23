#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double a,b,c,diskriminan,x1,x2;
	cout <<"menentukan akar-akar persamaan kuadrat"<< endl;
	cout <<"masukkan nilai a : "; 
	cin >> a; 
	cout <<"masukkan nilai b : ";
	cin >> b;
	cout <<"masukkan nilai c : ";
	cin >> c;
	diskriminan =b*b - 4*a*c;
	cout << "nilai diskriminan : " << diskriminan << endl;
	
	if (diskriminan >0){
		double x1 = ( -b + sqrt(diskriminan))/(2*a);
		double x2 = (-b - sqrt(diskriminan))/(2*a);
		cout << "akar-akar bersifat riil dan sama"<< endl;
		cout << "x1 : " << x1 << endl;
		cout << "x2 : " << x2 << endl;
	}
	else if (diskriminan == 0){
		double x1 = -b/ (2*a);
		double x2 = -b/ (2*a);
		cout << "akar-akar bersifat riil dan sama "<< endl;
		cout << "x1 : "<< x1 << endl;
		cout << "x2 : "<< x2 << endl;
	}
	else {
		double x1 = -b /(2*a);
		double x2 = sqrt (abs (-diskriminan))/(2*a);
		cout << "akar- akar bersifat imajiner "<< endl;
		if ( x1!=0){
			cout << "x1 : "<< x1 << "+" << x2 << "i"<< endl;
			cout << "x2 : "<< x1 << "-" << x2 << "i" << endl;}
		else {
			cout << "x1 : " << x2 << "i" << endl;
			cout << "x2 : "<< "-" <<  x2 << "i"<< endl;
		}
	}
	return 0; 
}


