#include <stdio.h>

int main() {
    int znak;
    for (znak = 0; znak < 256; ++znak) {
        printf("Wartosc całkowita: %d,\tkod ASCII %c\n",znak,znak);

    }
    return 0;
}