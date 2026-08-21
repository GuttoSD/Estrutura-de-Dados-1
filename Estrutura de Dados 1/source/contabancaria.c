#include "contabancaria.h"
#include "stdlib.h"
#include "stdio.h"

struct ContaBancaria
{
    int numero;
    float saldo;
};

struct ContaBancaria * cb_criar(int num,float saldoInicial)
{
    struct ContaBancaria *conta = NULL;
    
    conta = (struct ContaBancaria *) malloc(sizeof(struct ContaBancaria));
    conta->numero = num;
    conta->saldo = saldoInicial;

    return conta;
}

void cb_imprimir (struct ContaBancaria *conta)
{
    printf("numero: %d; saldo: %.2f", conta->numero, conta->saldo);
}

