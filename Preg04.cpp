#include<iostream>

using namespace std;

int main(){
	
	int ganancia, donacion;

	cout << endl;
	cout << "\t\t Donacion de Pablito" << endl << endl;
	cout << "Pablito tuvo una ganancia de: S/ ";
	cin >> ganancia;
	
	if(ganancia>=0 && ganancia <=1000) donacion = ganancia*0.05;
	if(ganancia>1000 && ganancia <=1500) donacion = ganancia*0.07;
	if(ganancia>1500 && ganancia <=2000) donacion = ganancia*0.08;
	if(ganancia>2000 && ganancia <=5000) donacion = ganancia*0.1;
	if(ganancia>5000) donacion = ganancia*0.15;
	
	cout << endl << "Pablito donara: S/" << donacion << endl; 
	
}