#include <iostream>

#include "startShip.h"

#include "snake.h"



using namespace std;

int main (int argc, char const *argv[])
{

	int opcion = 0;

	
	

	while(true)

	{

		system("cls");

		cout << "MELVIN YOVANI LOPEZ" << endl;
		

		cout << "**************" << endl;

		cout << "MENU DE JUEGOS" << endl;

		cout << "**************" << endl;

		cout << endl;

		

		cout << "Selecione un juego" << endl;

		cout << "1 - startShip" << endl;

		cout << "2 - snake" << endl;

		cout << endl;

		

		cout << "Ingrese un numero del menu para seleccionar un juego: ";

		cin >> opcion;

		

		switch(opcion)

		{

			case 1:

				system ("cls");

				starShip();

				break;

			case 2:

				system ("cls");

				snake();
				
			default:
				break;
		}

		
		
			}
			return 0;
}