#include <stdio.h>
/*Convertir de Celcius a Fahrenheit e imprime resultado
para 0-300 */

main(){
    float fahr, cels;
    int lower, upper, separation;

    lower = 0;
    upper = 300;
    separation = 20;

    cels = lower;

    printf("Convertir de Celcius a Fahrenheit\n");

    while (cels <= upper){
        fahr = cels * (9.0/5.0) + 32;
        printf("%3.0f\t%6.1f\n", cels, fahr);
        cels = cels + separation;
    }

}
