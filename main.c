/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 1 - Overview of the C Language 
 *   Hari dan Tanggal    : Rabu, 8 Febuari 2023
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 1 - Overview of the C Language
 *   Hari dan Tanggal    : Rabu, 8 Febuari 2023
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int factorial = 1;
    char temp[sizeof(int) * 8];
    int i;

    printf("Enter decimal number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial: %d\n", factorial);
    printf("Result is %s.\n", factorial % 2 ? "odd" : "even");

    printf("Binary: ");
    for (i = 0; 1 << i <= factorial; i++)
    {
        temp[i] = (factorial >> i) & 1 ? '1' : '0';
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", temp[i]);
    }
    printf("\n");

    printf("Hexadecimal: %x\n", factorial);

    return 0;
}
