#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 1

int main()
{
    float fCelcius = 0.0, fKelvin, fFahr;

    char sCelcius[8] = "Celcius";
    char sKelvin[7] = "Kelvin";
    char sFahr[11] = "Fahrenheit";

    printf("%12s\t%12s\t%12s\n",sCelcius,sKelvin,sFahr);
    while(fFahr < UPPER)
    {
        fKelvin = fCelcius - 273;
        fCelcius = (5 * (fFahr-32) / 9);
        printf("%12.2f\t%12.2f\t%12.2f\n",fCelcius,fKelvin,fFahr);
        fFahr = fFahr + STEP;
    }
}

