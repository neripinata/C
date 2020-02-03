#include <stdio.h>

main(){
    
    int fhar;

    /* Orden normal */
    for(fhar = 0; fhar <= 300; fhar = fhar + 20){
        printf("%d\t%6.1f\n", fhar, (5.0/9.0) * (fhar-32));
    }

    /* Orden interso */
    for(fhar = 300; 0 <= fhar; fhar = fhar - 20){
        printf("%d\t%6.1f\n", fhar, (5.0/9.0) * (fhar-32));
    }

}