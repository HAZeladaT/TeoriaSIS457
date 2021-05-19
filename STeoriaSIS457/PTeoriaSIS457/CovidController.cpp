#include "CovidController.h"
using namespace std;

CovidController::CovidController(int _horaIngreso, float _temperatura, int _CI,int _dia) {
	horaIngreso=_horaIngreso;
	temperatura = _temperatura;
	CI=_CI;
}
bool CovidController::verificarHoradeIngreso() {
	if ((horaIngreso < horaInicio) || (horaIngreso > horaFin)) return apto;
}

bool CovidController::verificarTemperatura() {
	if (temperatura < 38)
		return apto;
}

bool CovidController::verificarCI() {
	int aux = CI % 10;
	switch (aux)
	{
	case 1:
		if(dia == dias[0])
			return apto;
	case 2:
		if (dia == dias[0])
			return apto;
	case 3:
		if (dia == dias[1])
			return apto;
	case 4:
		if (dia == dias[1])
			return apto;
	case 5:
		if (dia == dias[2])
			return apto;
	case 6:
		if (dia == dias[2])
			return apto;
	case 7:
		if (dia == dias[3])
			return apto;
	case 8:
		if (dia == dias[3])
			return apto;
	case 9:
		if (dia != dias[4])
			return apto;
	case 0:
		if (dia != dias[4])
			return apto;
	default:
		if (dia != dias[5])
			return apto;
	}
}