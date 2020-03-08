#include<stdio.h>

void cubeByReference(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}

int main(int argc, char const *argv[])
{
    int number = 5;
    printf("Valor original %d\n", number);

    cubeByReference(&number);

    printf("Novo valor %d\n",number);
    return 0;
}
