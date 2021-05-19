#include <iostream>
#include <vector>
#include <string>
using namespace std;
class CovidController
{
public:
	int horaInicio=8;
	int horaFin=16;
	int horaIngreso;
	float temperatura;
	int CI;
	int dia;
	bool apto;
	//"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"
	vector<int> dias = {1,2,4,5,6};
	
	CovidController(int _horaIngreso, float _temperatura, int _CI, int dia);
	bool verificarHoradeIngreso();
	bool verificarTemperatura();
	bool verificarCI();

};
