/* Escribe en pantalla una tabla con una cierta temperatura en grados fahrenheit
 * y a su derecha dicha temperatura expresada en celcius
 * Daniel Marcelletti
 * Daian Pato
 * 27/04/2015
 */

#include <stdio.h>

	const int LOWER = 0; /* límite inferior de la tabla */
	const int UPPER = 300; /* límite superior */
	const int STEP = 20; /* tamaño del incremento */
	float getCelcius(float fahr);

int main(void)

{
	float fahr;
	printf("Grados\tFahrenheit\n");
	for (fahr = LOWER ;fahr <= UPPER ;fahr = fahr + STEP)
		printf("%3f\t%6.1f\n",fahr,(getCelcius(fahr)));

return 0;
}

float getCelcius(float fahr)
{
	float grados;
	grados = ((5.0/9.0)*(fahr-32));
	return grados;
}
