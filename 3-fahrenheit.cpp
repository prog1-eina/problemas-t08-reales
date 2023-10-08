/******************************************************************************\
 * Autores: Miguel Ángel Latre
 * Última revisión: 25-10-2022
 * Resumen: Programa interactivo que solicita una temperatura expresada en
 *          grados Fahrenheit y escriba en la pantalla su equivalente en grados
 *          Celsius.
 *          Clase de problemas de Programación 1 del tema 8 (reales).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 3-fahrenheit.cpp -o 3-fahrenheit
 *       y ejecutarse en Windows a través de la orden
 *           .\3-fahrenheit.exe
 *       o en Linux y macOS
 *           ./3-fahrenheit
\******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Pre:  gradosFahrenheit >= −459.67 (cero absoluto en ºF).
 * Post: Devuelve la temperatura en grados Celsius equivalente al valor del
 *       parámetro «gradosFahrenheit».
 */
double convertirACelsius(double gradosFahrenheit) {
    return 5.0/9.0 * (gradosFahrenheit - 32.0);
}

/*
 * Programa interactivo que solicita una temperatura expresada en grados
 * Fahrenheit y escriba en la pantalla su equivalente en grados Celsius.
 */
int main() {
    cout << "Escriba una temperatura expresada en grados Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;

    cout << fixed << setprecision(2)
         << fahrenheit << " °F equivalen a " 
         << convertirACelsius(fahrenheit) << " °C." << endl;
    return 0;
}