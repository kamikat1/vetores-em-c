#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vet[5]={1, 2, 3, 4, 5};
    printf("%f ", sqrt((pow(vet[0], 2)) + (pow(vet[1] , 2)) + (pow(vet[2] , 2) + pow(vet[3] , 2)) + pow(vet[4] , 2) + pow(vet[5] , 2)));
}

