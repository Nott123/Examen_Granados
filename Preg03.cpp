#include <iostream>
using namespace std;
int main(){
	
	int horas, total;
	cout <<endl;
	cout <<"\t\t MI COCHERA " << endl << endl;
	cout <<"Ingrese el numero de horas estacionado: ";
	cin >> horas;
	if(horas <= 4){
		total = 6;
	}
	else{
		total = 6 + (horas-4)*2;
	}
	
	cout <<endl <<"Total a pagar: "<< total << " Soles" <<endl;
}