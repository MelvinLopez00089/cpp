#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[3][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion"; libros[0][2] = "Bill Gates" ;
	libros[1][0] = "Algoritmos"; libros[1][1] = "Base de Datos"; libros[1][2] = "Ben Afleck" ;
	libros[2][0] = "Algoritmos"; libros[2][1] = "Metodologias de desarrollo de software"; libros[2][2] = "Ben Afleck" ;
	

}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "", buscar1 ="";
        system("cls");
        cout << "Ingrese el nombre del autor: ";
        cin >> buscar;
        cout << endl;
        cout << endl;

        // busqueda
        for (int i = 0; i < 1; i++)
        {
            string libro = libros[i][1]; //
            string libroEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
        
            
            string autor = libros[i][2]; //
            string autorEnminuscula = autor;
            // transformamos a minuscula los string buscar y libro
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            
            if (libroEnminuscula.find(buscar) != string::npos ||autorEnminuscula.find(buscar) !=string::npos) {
                cout << "Libros encontrados del autor: " << libro << endl;
                cout << endl;
                        buscar1 = libro;
                        for (int i = 0; i < 1; i++)
                        {
                        

                        if (libroEnminuscula.find(buscar1) != string::npos) {
                        }
                        cout << "   Titulo : " << libro << endl;
                        }
                
                cout << endl;
                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 1;
                int sugerencia2 = rand() % 1;
                int sugerencia3 = rand() % 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}
