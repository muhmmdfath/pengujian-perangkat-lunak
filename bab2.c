#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nama\t: Muhammad Fatih ‘Ad-Li\n");
    printf("NIM\t: 32602200017\n\n");

    int a, b, c, c1, c2, c3;
    char istriangle;

    do
    {
        printf("\nMasukkan 3 bilangan bulat yang merupakan sisi segitiga (1-10):\n");
        scanf("%d%d%d", &a, &b, &c);

        printf("\na = %d\tb = %d\tc = %d", a, b, c);

        // Memeriksa apakah nilai berada dalam rentang 1-10
        c1 = (a >= 1 && a <= 10);
        c2 = (b >= 1 && b <= 10);
        c3 = (c >= 1 && c <= 10);

        if (!c1)
            printf("\nNilai a = %d tidak berada dalam rentang yang diizinkan (1-10)", a);
        if (!c2)
            printf("\nNilai b = %d tidak berada dalam rentang yang diizinkan (1-10)", b);
        if (!c3)
            printf("\nNilai c = %d tidak berada dalam rentang yang diizinkan (1-10)", c);

    } while (!(c1 && c2 && c3));

    // Memeriksa apakah tiga sisi membentuk segitiga
    if (a < b + c && b < a + c && c < a + b)
        istriangle = 'y';
    else
        istriangle = 'n';

    if (istriangle == 'y')
    {
        if ((a == b) && (b == c))
            printf("\nSegitiga Sama Sisi\n");
        else if ((a != b) && (a != c) && (b != c))
            printf("\nSegitiga Sembarang\n");
        else
            printf("\nSegitiga Sama Kaki\n");
    }
    else
    {
        printf("\nBukan Segitiga\n");
    }

    return 0;
}
