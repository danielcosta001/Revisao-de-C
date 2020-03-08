#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 10;//declra variavel
    printf("variavel Count: %i\n",count);

    int *p;//declara ponteiro

    p = &count; //associa o ponteiro p ao endereço onde está guadado o valor da variavel count
    printf("Endereço de p: %d\n",p);
    printf("Valor de p: %d\n",*p);
    *p = 12;//atribui um novo valor á posição de memoria.... então altera junto a variavel count!!!
    printf("apontado por p %d\n",*p);//utiliza-se o operador asterisco(*) para acessar o valor contido na posiçao de memoria do ponteiro
    printf("conteudo da variavel count %d\n",count);
    return 0;
}
/*
"*" Declara um ponteiro: int *x;
    Conteúdo para onde o pointeiro aponta: int y = *x;
"&" Endereço onde uma varíavel está gurdada na memória: &y
*/
