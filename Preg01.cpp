#include<iostream>

using namespace std;

int main()
{
	int A,B,X;
	
	cout<<"INGESAR NUMERO 1 :"; cin >>A;
	cout<<"INGRESAR NUMERO 1 :"; cin >>B;
	cout<<endl;
	
X=A;
A=B;
B=X;
cout << "NUMERO 1 ES :" << A << endl;
cout << "NUMERO 2 ES :"<< B << endl;
return 0 ;
}