#include <iostream>
#include "CovidController.h"
#include <vector>
using namespace std;
int hI, ci, n, d, cf = 0,cv=0,extra1,extra2;
float t;
bool apto;
vector<int> carnet;
int main() {
	cout << "¿Cuantos clientes desea ingresar?";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Cliente " << i + 1 << endl;
		cout << "Introduzca la hora de ingreso: ";
		cin >> hI;
		cout << "Introduzca su temperatura: ";
		cin >> t;
		cout << "Introduzca su numero de carnet: ";
		cin >> ci;
		carnet.push_back(ci);
		cout << " ";
		cout << "Lunes     [1]" << endl;
		cout << "Martes	   [2]" << endl;
		cout << "Miercoles [3]" << endl;
		cout << "Jueves    [4]" << endl;
		cout << "Viernes   [5]" << endl;
		cout << "Sabado    [6]" << endl;
		cout << "Indique que dia es: ";
		cin >> d;
		CovidController Cliente(hI, t, ci,d);
		Cliente.verificarHoradeIngreso();
		if (apto == false)
			extra1 += 1;
		else extra2 += 1;
		Cliente.verificarTemperatura();
		if (apto==false)
			extra1 += 1;
		else extra2 += 1;
		Cliente.verificarCI();
		if (apto==false) 
			extra1 += 1;
		if (extra1 > 0) cf += 1;
		if (extra2 == 3) cv += 1;
	}
	cout << "Las personas que pudieron ingresar son " << cv << endl;
	cout << "Las personas que no se dejo ingresar son " << cf;
}