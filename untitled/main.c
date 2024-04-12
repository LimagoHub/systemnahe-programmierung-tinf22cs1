#include <stdio.h>

int main() {

    int feld[3];

    int * ptr;

    ptr = feld;

    feld[0] = 10;
    feld[1] = 20;
    feld[2] = 30;

    // feld + index * sizeof(int)

    printf("%d\n", *ptr);
    printf("%d\n", *feld);
    printf("%d\n", ptr[1]);
    printf("%d\n", *(ptr + 1));
    ptr ++;
    printf("%d\n", *ptr);
    return 0;
}
