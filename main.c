#include <stdio.h>

int main() {
    int a,b,c;
    b=1;
    c=1;
    printf("Podaj wartosc silni:\n");
    scanf("%i",&a);
    for (int i = 0; i < a; ++i)
    {
        c=c*b;
        ++b;
    }
    printf("Silnia liczby %i wynosi: %i",a,c);
    return 0;
}