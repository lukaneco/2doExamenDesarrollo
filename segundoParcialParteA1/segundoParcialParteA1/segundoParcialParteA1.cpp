////////////////////////////////////////////////////----------------------------------//////////////////////////////


//ejercicioB12

#include "pch.h"
#include <iostream>

using namespace std;



int main()
{
	//std::cout << "Hello World!\n";
}


//////////////////////////////////////////////////////////////////////
// automovil


enum Gama {
	ALTA = 3, MEDIA = 2, BAJA = 1
};

struct Automovil
{
	string marca;//ford
	string modelo;//focus
	Gama gama;//media
	int anio;//2017
	int valorResidual;//360000
	int kmRecorridos;//80000
};

Automovil agregaAutos(string marca, string modelo, Gama gama, int anio, int valorResidual, int kmRecorridos)
{
	Automovil *nuevo_auto = new Automovil();
	nuevo_auto->marca = marca;
	nuevo_auto->modelo = modelo;
	nuevo_auto->gama = gama;
	nuevo_auto->anio = anio;
	nuevo_auto->valorResidual = valorResidual;
	nuevo_auto->kmRecorridos = kmRecorridos;
	return *nuevo_auto;
}



//////////////////////////////////////////////////////////////////////
//factura

enum TipoFactura {
	C = 3, B = 2, A = 1
};
enum MedioDePago {
	parcialmenteFinanciado = 3, contado = 2, financiado = 1
};

struct Factura
{
	TipoFactura tipoF;//A
	float importe;//80000
	string autox;//ford focus
	int fecha;//DDMMAAAA
	string nombreComprador;//juan
	MedioDePago pago;//contado
};

Factura agregaFacturas(TipoFactura tipoF, float importe, string autox, int fecha, string nombreComprador, MedioDePago pago)
{
	Factura *nueva_factura = new Factura();
	nueva_factura->tipoF = tipoF;
	nueva_factura->importe = importe;
	nueva_factura->autox = autox;
	nueva_factura->fecha = fecha;
	nueva_factura->nombreComprador = nombreComprador;
	nueva_factura->pago = pago;
	return *nueva_factura;
}





//////////////////////////////////////////////////////////////////////////
// punto B3


// libro diario
// ingreso y egreso de dinero diario


void funcionVentaDiaADia(void)
{

}

// ciclo economico
// ingreso y egreso de dinero anual





//////////////////////////////////////////////////////////////////////////


















////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/*

////////////////////////////////////////////////////----------------------------------//////////////////////////////



//ejercicioa2abc

#include "pch.h"
#include <iostream>

using namespace std;

const int cantidadPersonas = 3;
const int cantidadMaquinas = 3;


#define matrizY cantidadPersonas

#define matrizX cantidadMaquinas

#define unaMatriz megaVector


enum vectores
{

};





//veces = horas

//int buscarElMasVicio(int**, int, int);

int main()
{
	int megaVector[cantidadPersonas][cantidadMaquinas];

	//preguntar valores
	for (int index = 0; index < cantidadPersonas; index++)
	{
		for (int index2 = 0; index2 < cantidadMaquinas; index2++)
		{
			cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
			cin >> megaVector[index][index2];
		}
	}


	//el mas vicio//////////////////////////////////////////
	int elmasvicio = 0;

	int lashorasdelmasvicio = 0;
	for (int index3 = 0; index3 < cantidadPersonas; index3++)
	{
		int tamporalisis = 0;
		for (int index4 = 0; index4 < cantidadMaquinas; index4++)
		{
			tamporalisis = tamporalisis + megaVector[index3][index4];

			//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
		}
		if (tamporalisis > lashorasdelmasvicio)
		{
			lashorasdelmasvicio = tamporalisis;

			elmasvicio = index3;
		}
	}

	cout << "el mas vicio es la persona numero " << elmasvicio + 1 << "." << endl;

	//std::cout << "Hello World!\n";





	//la pc mas usada//////////////////////////////////////////

	int lapcmasusada = 0;

	int lashorasdelapcmasusada = 0;
	for (int index3 = 0; index3 < cantidadMaquinas; index3++)
	{
		int tamporalisis = 0;
		for (int index4 = 0; index4 < cantidadPersonas; index4++)
		{
			tamporalisis = tamporalisis + megaVector[index3][index4];

			//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
		}
		if (tamporalisis > lashorasdelapcmasusada)
		{
			lashorasdelapcmasusada = tamporalisis;

			lapcmasusada = index3;
		}
	}
	cout << "la pc mas usada fue la numero " << lapcmasusada + 1 << "." << endl;
	cout << endl;


	int personita = 0;
	cout << "ingrese el numero de persona del que quiere saber cuantos horas uso las pcs: ";
	cin >> personita;
	int tiempodepersonita=0;

	//////tomado del punto 2b

	for (int index4 = 0; index4 < cantidadMaquinas; index4++)
	{
		tiempodepersonita = tiempodepersonita + megaVector[personita][index4];

		//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
	}
	cout << "el id de persona que ingresaste uso " << tiempodepersonita << " horas la pc";





}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



*/









////////////////////////////////////////////////////----------------------------------//////////////////////////////

/*

//ejercicioa2ab

#include "pch.h"
#include <iostream>

using namespace std;

const int cantidadPersonas = 3;
const int cantidadMaquinas = 2;


#define matrizY cantidadPersonas

#define matrizX cantidadMaquinas

#define unaMatriz megaVector


enum vectores
{

};





//veces = horas

//int buscarElMasVicio(int**, int, int);

int main()
{
	int megaVector[cantidadPersonas][cantidadMaquinas];

	//preguntar valores
	for (int index = 0; index < cantidadPersonas; index++)
	{
		for (int index2 = 0; index2 < cantidadMaquinas; index2++)
		{
			cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
			cin >> megaVector[index][index2];
		}
	}
	int elmasvicio = 0;

	int lashorasdelmasvicio = 0;
	for (int index3 = 0; index3 < cantidadPersonas; index3++)
	{
		int tamporalisis = 0;
		for (int index4 = 0; index4 < cantidadMaquinas; index4++)
		{
			tamporalisis = tamporalisis + megaVector[index3][index4];

			//cout << "Ingrese la cantidad de horas uso la computadora " << index2 + 1 << " la persona " << index + 1 << " :";
		}
		if (tamporalisis > lashorasdelmasvicio)
		{
			lashorasdelmasvicio = tamporalisis;

			elmasvicio = index3;
		}
	}

	cout << "el mas vicio es la persona numero " << elmasvicio + 1 << "." << endl;

	//std::cout << "Hello World!\n";
}








*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/*
////////////////////////////////////////////////////----------------------------------//////////////////////////////


//ejercicioB1

#include "pch.h"
#include <iostream>

using namespace std;



int main()
{
	//std::cout << "Hello World!\n";
}



struct Automovil
{
	string marca;//ford
	string modelo;//focus
	Gama gama;//media
	int anio;//2017
	int valorResidual;//360000
	int kmRecorridos;//80000
};

Automovil agregaAutos(string marca, string modelo, Gama gama, int anio, int valorResidual,int kmRecorridos)
{
	Automovil *nuevo_auto = new Automovil();
	nuevo_auto->marca = marca;
	nuevo_auto->modelo = modelo;
	nuevo_auto->gama = gama;
	nuevo_auto->anio = anio;
	nuevo_auto->valorResidual = valorResidual;
	nuevo_auto->kmRecorridos = kmRecorridos;
}


enum Gama {
	ALTA = 3, MEDIA = 2, BAJA = 1
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


*/




/*
// punto A3

#include "pch.h"
#include <iostream>
using namespace std;


int factorial(int);

int main()
{
	int numerito = 0;
	cout << "Ingrese un numero: ";
	cin >> numerito;
	cout<< "El Factorial de "<<numerito<<" es: " << factorial(numerito);
	//std::cout << "Hello World!\n";
}

int factorial(int n)
{
	int contaNumeros = n;
	int resultado = 1;
	do
	{
		resultado = resultado * contaNumeros;
		contaNumeros = contaNumeros - 1;
	} while (contaNumeros != 0);
	return resultado;
}
*/


/*

//ejercicioa1

#include "pch.h"
#include <iostream>
using namespace std;

const int largoVectores = 5;
const int cantidadVectores = 3;


#define vector1 0
#define vector2 1
#define vector3 2

enum vectores
{

};


int main()
{
	int megaVector[cantidadVectores][largoVectores];

	for (int index = 0; index < cantidadVectores; index++)
	{

		for (int index2 = 0; index2 < largoVectores; index2++)
		{
			if (index == vector3)
			{

				if ((index2 % 2) != 0 || megaVector[index][index2] == 0)
				{
					megaVector[index][index2] = megaVector[vector1][index2];
				}
				else
				{
					megaVector[index][index2] = megaVector[vector2][index2];
				}
			}
			else
			{
				cout << "Ingrese un valor para el vector " << index + 1 << ": ";
				cin >> megaVector[index][index2];
			}

		}
	}
	for (int algo = 0; algo < largoVectores; algo++)
	{
		cout << megaVector[vector3][algo] << ",";
	}

	//std::cout << "Hello World!\n";
}


void pedirValores(void)
{
	cout << "Ingrese un numero para el vector";
}




*/


