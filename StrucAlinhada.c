#include<stdio.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno
{
    int id;
    Data nacismnto;
};


int main(int argc, char const *argv[])
{
    struct Aluno aluno1;

    aluno1.id=142009;
    aluno1.nacismnto.dia = 12;
    aluno1.nacismnto.mes = 8;
    aluno1.nacismnto.ano = 2008;

    printf("Nascido em:%d/%d/%d\n",aluno1.nacismnto.dia,aluno1.nacismnto.mes,aluno1.nacismnto.ano);
    printf("ID:%d\n",aluno1.id);

    return 0;
}
