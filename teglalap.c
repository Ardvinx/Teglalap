#include <stdio.h>

int main()
{
    //system("clear");

    int SideA = 0;
    int sideB = 0;

    printf("Ez a program egy téglalap kerületét és területét számolja ki!\n");
    printf("Adja meg a téglalap A oldalának hosszát (cm): ");
    scanf("%d",&SideA);

    printf("Adja meg a téglalap B oldalának hosszát (cm): ");
    scanf("%d",&sideB);

    printf("\nA téglalap kerülete: %dcm, a területe: %dcm2\n",(SideA+sideB)*2,SideA*sideB);

    return 0;
}
