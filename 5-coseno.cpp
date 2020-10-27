/*
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 28-10-2015
 * Resumen: Soluciones al problema de la aproximación al coseno planteado en la
 *          clase de problemas.
 *          Clase de problemas de Programación 1 del tema 8 (reales).
 */
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Pre:  El valor de «x» viene expresado en radianes.
 * Post: Ha devuelto una aproximación al valor de cos x.
 */
double cos(const double x) {
	// Se tiene en cuenta el desarrollo en serie de la función coseno:
	// cos x = 1 - x2/2! + x4/4! - x6/6! + x8/8! - x10/10! + ...
	const double COTA = 1.0e-15;

	unsigned int i = 0; // índice del término
	double termino = 1.0; // termino = (-1)^i·x^(2i)/(2i)!
	double resultado = termino; // resultado = suma términos calculados

	while (abs(termino) > COTA) {
		// Se incrementa «resultado» con el siguiente término de la serie:
		i++; // siguiente índice
		// termino = (-1)^i·x^(2i)/(2i)!
		termino = -termino * x * x / ((2*i) * (2*i-1));
		// resultado = suma de los términos calculados
		resultado += termino;
	}
	return resultado;
}

/*
 * Programa de prueba de la función anterior.
 */
int main() {
	cout << fixed << setprecision(14);
	for (double x = 0.0; x <= 2 * M_PI; x += M_PI/8) {
		cout << "cos(" << x << ") = " << setw(17) << ::cos(x)
		     << " = " << setw(17) << std::cos(x) << endl;
	}
}
