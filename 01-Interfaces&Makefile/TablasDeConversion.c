#include "Conversion.h"
#include "Conversion.c"

int main(){
printf("Celsius\t\tFarenheit\n");
for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
    printf("%2.0f\t\t%6.2f\n", fahr, Celsius(fahr));
}

printf("\nFarenheit\tCelsius\n");
for(celsius = LOWERF; celsius <= UPPERF; celsius = celsius + STEPF){
    printf("%6.2f\t\t%4.2f\n", celsius, Farenheit(celsius));
}
}