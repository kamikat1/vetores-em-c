#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, fibo[10];
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<10;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(i=0;i<10;i++){
        printf("%d ", fibo[i]);
    }
}
