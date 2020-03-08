#include<stdio.h>

int cubrByValue(int n){
    return n * n * n;
}

int main(int argc, char const *argv[])
{
    int number = 5;
    printf("Valor original %d\n", number);
    number = cubrByValue(number);
    printf("Valor novo %d\n", number);
    return 0;
}
