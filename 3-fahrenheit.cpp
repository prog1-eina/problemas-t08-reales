/*******************************************************************************
 * Autores: Miguel Ángel Latre
 * Última revisión: 27-10-2020
 * Resumen: Programa interactivo que solicita una temperatura expresada en
 *          grados Fahrenheit y escriba en la pantalla su equivalente en grados
 *          Celsius.
 *          Clase de problemas de Programación 1 del tema 8 (reales).
 ******************************************************************************/
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
 * Programa interactivo que que solicita una temperatura expresada en grados
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