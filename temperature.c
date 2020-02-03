#include <stdio.h>
/*Convertir de Fahrenheit a Celcius e imprime resultado
para 0-300 */

main(){
    float fahr, cels;
    int lower, upper, separation;

    lower = 0;
    upper = 300;
    separation = 20;

    fahr = lower;
    while (fahr <= upper){
        cels = (5.0/9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, cels);
        fahr = fahr + separation;
    }

}
