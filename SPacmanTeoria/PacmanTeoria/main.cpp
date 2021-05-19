#include <iostream>
#include "Pacman.h"
#include "Jugador.h"
#include <vector>
#include <fstream>
using namespace std;

template <typename T>
T minimo(T a, T b)
{
    return a < b ? a : b;
};


template <class T>
void ordenar(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}
template <typename T>
void imprimirElementos(T array)
{
    auto inicio = array.begin();
    auto fin = array.end();
    cout << "Punteros inicalmente" << endl;
    cout << &inicio << "  " << &fin << endl;
    for (auto i=inicio; i != fin; ++i)
    {
        i->presentarDatos();
        cout << &i << endl;
    }
}

int main()
{
    Jugador j1, j2("lola","femenino"), j3("fer","masculino",3000, 10, 1), j4, j5;
    j1.presentarDatos();
    j1.formatearTiempo(false);
    vector<Jugador> jugadores;
    jugadores.push_back(j1);
    jugadores.push_back(j2);
    jugadores.push_back(j3);
    imprimirElementos(jugadores);
    jugadores.pop_back();
    jugadores.pop_back();
    imprimirElementos(jugadores);

    ifstream cin2("lista.txt");
    ofstream cout2("lista.txt", fstream::app);

    vector<Jugador> lista;
    int conta = 0;

    if (cin2.fail())
    {
        cout << "no se leyo el archivo";
    }
    else
    {
        string nombre, sexo, nivel;
        string puntaje;  string tiempo;

        while (cin2.peek() != EOF)
        {
            //string linea;
            getline(cin2, nombre, ';');
            getline(cin2, sexo, ';');
            getline(cin2, puntaje, ';');
            getline(cin2, tiempo, ';');
            getline(cin2, nivel, ';');
            Jugador j1(nombre, sexo, stof(tiempo), stoi(puntaje), stoi(nivel));
            conta++;
            lista.push_back(j1);

        }
        cout << lista.size();

        lista[0].resaltarDatos();
        lista[1].resaltarDatos();
    }

    //cout2 << "Luis Antonio Molina Yampa;Masculino;505;2375;4"<<endl;
    getchar();



    return 0;
}
