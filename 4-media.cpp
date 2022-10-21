/******************************************************************************\
 * Autores: Miguel Ángel Latre
 * Última revisión: 27-10-2020
 * Resumen: Programa interactivo que solicita una secuencia de datos reales al
 *          usuario terminada en 0 y que le informa, a continuación de la media 
 *          de los datos leídos de teclado, excluido el 0 que finaliza la
 *          secuencia.
 *          Clase de problemas de Programación 1 del tema 8 (reales).
\******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


/*
 * Programa interactivo que solicita una secuencia de datos reales al usuario 
 * terminada en 0 y que le informa, a continuación de la media de los datos
 * leídos de teclado, excluido el 0 que finaliza la secuencia.
 */
int main() {
    cout << "Escriba una secuencia de reales terminada en 0: ";
    double ultimoDato;
    cin >> ultimoDato;

    unsigned numDatos = 0;
    double suma = 0.0;
    while (ultimoDato != 0) {
        numDatos++;
        suma += ultimoDato;
        cin >> ultimoDato;
    }

    if (numDatos > 0) {
        cout << "La media es: " << fixed << setprecision(2)
            << suma / numDatos << endl;
    }
    else {
        cout << "No hay datos que promediar." << endl;
    }
    return 0;
}