/******************************************************************************\
 * Autores: Miguel Ángel Latre
 * Última revisión: 25-10-2022
 * Resumen: Programa interactivo que solicita una secuencia de datos reales al
 *          usuario terminada en 0 y que le informa, a continuación de la media 
 *          de los datos leídos de teclado, excluido el 0 que finaliza la
 *          secuencia.
 *          Clase de problemas de Programación 1 del tema 8 (reales).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 4-media.cpp -o 4-media
 *       y ejecutarse en Windows a través de la orden
 *           .\4-media.exe
 *       o en Linux y macOS
 *           ./4-media
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