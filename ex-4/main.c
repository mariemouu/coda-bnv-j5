#include <stdio.h>
#include "functions.h"

int main()
{
    int nombre_1;
    int nombre_2;

    print_str("coucou !\n");

    printf("Donne un nombre :\n");
    scanf("%d", &nombre_1);
    printf("Donne un autre nombre :\n");
    scanf("%d", &nombre_2);
    printf("Resultat : %d\n", add(nombre_1, nombre_2));

    printf("%.2f\n", compute_average(12, 15, 10));
    printf("%.2f\n", compute_average(10, 20, 30));

    return(0);
}
