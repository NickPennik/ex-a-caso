#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("inserisci 3 variabili per averle in ordine di grandezza\n");
    scanf(" %d\n", &a);
    scanf(" %d\n", &b);
    scanf(" %d", &c);
    if(a>b && a>c)
    {
        if (b>c)
        {
            printf("l'ordine corretto è %d, %d, %d\n", c, b, a);
                
        }
        else if(b<c)
        {
            printf("l'ordine corretto è %d, %d, %d\n", b, c, a);
        }
    }
    else if(b>a && b>c)
    {
        if (c>a)
        {
            printf("l'ordine corretto è %d, %d, %d\n", a, c, b);
        }
        else if (c<a)
        {
            printf("l'ordine corretto è %d, %d, %d\n",c, a, b);
        }
    }
    else 
    {
        if (a>b)
        {
            printf("l'ordine corretto è %d, %d, %d\n", b, a,c);
        }
        else if (a<b)
        {
            printf("l'ordine corretto è %d, %d, %d\n", a, b, c);
        }
    }
    return 0;
}