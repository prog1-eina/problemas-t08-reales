/******************************************************************************\
 * Autores: Miguel Ángel Latre
 * Última revisión: 25-10-2022
 * Resumen: Programa interactivo que pregunta repetidamente por los coeficientes
 *          de una ecuación de segundo grado y escribe en la pantalla si dicha
 *          ecuación tiene soluciones reales o no, y, en caso de tenerlas,
 *          también escribe dichas soluciones.
 *          Clase de problemas de Programación 1 del tema 8 (reales).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 1-2-ecuacion-segundo-grado.cpp -o 1-2-ec
 *       y ejecutarse en Windows a través de la orden
 *           .\1-2-ec.exe
 *       o en Linux y macOS
 *           ./1-2-ec
\******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

/*
 * Pre:  a ≠ 0
 * Post: Si la ecuación ax² + bx + c = 0 tiene soluciones reales, la función 
 *       devuelve el valor booleano «true» y asigna a los parámetros «raiz1» y
 *       «raiz2» las soluciones de la ecuación. En caso contrario, devuelve el
 *       valor booleano «false».
 */
bool resolverEcuacion(double a, double b, double c,
                      double& raiz1, double& raiz2) {
    double discriminante = b * b - 4 * a * c;
    if (discriminante >= 0) {
        double raizD = sqrt(discriminante);
        raiz1 = (-b + raizD) / (2 * a);
        raiz2 = (-b - raizD) / (2 * a);
        return true;
    }
    else {
        return false;
    }
}


/*
 * Programa interactivo que pregunta repetidamente por los coeficientes de una 
 * ecuación de segundo grado y escribe en la pantalla si dicha ecuación tiene 
 * soluciones reales o no, y, en caso de tenerlas, también escribe dichas
 * soluciones. El programa termina cuando el usuario da valor 0 al coeficiente 
 * cuadrático (a).
 */
int main() {
    cout << "Escriba los coeficientes a, b y c de la ecuación ax² + bx + c: ";
    double a;
    cin >> a;
    while (a != 0) {
        double b, c;
        cin >> b >> c;

        double x1, x2;
        if (resolverEcuacion(a, b, c, x1, x2)) {
            cout << "Las soluciones de la ecuación son " 
                 << x1 << " y " << x2 << endl;
        }
        else {
            cout << "La ecuación no tiene soluciones reales." << endl;
        }

        cout << endl;
        cout << "Escriba los coeficientes a, b y c de la ecuación ax² + bx + c: ";
        cin >> a;
    }
    return 0;
}