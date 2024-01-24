#include <stdio.h>

int errore()
{
    int n;

    printf("inserisci una variabile maggiore di 0 per ottenere il suo quadrato\n");
    scanf(" %d", &n);

    if (n>0)
    {
        int moltiplicazione;
        
        printf("la variabile è buona\n");
        moltiplicazione= n*n;
        printf("il quadrato del tuo numero è %d\n", moltiplicazione);
    }
    else if (n==0)
    {
        printf("la variabile inserita è uguale a 0 inserire un altro numero\n");
        errore();
    }
    else if (n<0)
    {
        printf("la variabile inserita è minore di 0, inserire un altro numero\n");
        errore();
    }
}

int main()
{
    errore();
    return 0;
}