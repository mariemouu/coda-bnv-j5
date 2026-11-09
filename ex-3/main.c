#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3)

{
    double average = (nb1 + nb2 + nb3) / 3;
    return(average);
}

int main()
{
    double average;

    average = compute_average(12, 15, 10);
    printf("%.2f\n", average);

    average = compute_average(10, 20, 30);
    printf("%.2f\n", average);

    return(0);
}
