#include "contabancaria.h"

    int main()
    {
        struct ContaBancaria *c1;

        c1 = cb_criar(521, 1000000);

        cb_imprimir(c1);
       /* c1.numero = 521;
        c1.saldo = 1000000;

        c1.saldo *= 5;

        printf("%.2f \n", c1.saldo)
        */
    }