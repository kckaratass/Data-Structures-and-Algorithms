#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};
/// Basit pointer örneği:
/// Bir değişkenin adresini ve o adresteki değeri ekrana yazdırır.
int main()
{
    /// int a = 10;     // a değişkenine 10 değerini ata
    /// int *p;         // int türünde bir pointer tanımla
    /// p = &a;         // p, a değişkeninin adresini tutsun

    /// Değerleri ekrana yazdır
    /// printf("Deger (dogrudan): %d\n", a);            // a'nın değeri
    /// printf("Deger (pointer ile): %d\n", *p);        // pointer kullanarak a'nın değeri
    /// printf("Adres (pointer / &a): %p %p\n", p, &a); // adresleri %p ile yazdırmak gerekir

    ///int A[5] = {2, 4, 6, 8, 10};
    ///int *p;

    /// p = A;  // (İstersen bu şekilde dizi başlangıcını işaret ettirebilirsin.)

    // HATA: sizeofint() yanlıştı. Doğrusu sizeof(int).
   /// p = (int *)malloc(5 * sizeof(int));
   /* if (p == NULL)
    {
        printf("Bellek ayrılamadı.\n");
        return 1;
    }

    p[0] = 10; p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 32;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\n");*/

    //free(p); // Ayrılan belleği serbest bırakmayı unutma.

   int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    printf("int pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(*p1));
    printf("char pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(*p2));
    printf("float pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(*p3));
    printf("double pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(*p4));
    printf("struct Rectangle pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(*p5));

    printf("-------------------------------\n");

    printf("int pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(p1));
    printf("char pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(p2));
    printf("float pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(p3));
    printf("double pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(p4));
    printf("struct Rectangle pointer'in gosterdigi turun boyutu: %d byte\n", sizeof(p5));
    return 0;
}
