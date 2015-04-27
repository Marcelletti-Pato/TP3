/* Escribe en pantalla una tabla con una cierta temperatura en grados fahrenheit
 * y a su derecha dicha temperatura expresada en celcius
 * Daniel Marcelletti
 * Daian Pato
 * 27/04/2015
 */

#include <stdio.h>

#define LOWER 0 /* límite inferior de la tabla */
#define UPPER 300 /* límite superior */
#define STEP 20 /* tamaño del incremento */

main (void)
{
	int fahr;
	printf("Grados\tFahrenheit\n");
	for (fahr = LOWER ;fahr <= UPPER ;fahr = fahr + STEP)
		printf("%3d \t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
