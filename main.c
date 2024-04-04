#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(int argc, char *argv[]) {
    if (argc == 3) {
        struct DegreeType dt;

        // argv'den alınan değerler dt yapılarına kopyalanıyor
        dt.baseDegree = atoi(argv[1]);
        strcpy(dt.degreeToConvert, argv[2]);

        if (strcmp(dt.degreeToConvert, "Kelvin") == 0) {
            degreeToKelvin(dt.baseDegree);
        }
        else if (strcmp(dt.degreeToConvert, "Celcius") == 0 ) {
            printf("%d", dt.baseDegree);
        }
        else if (strcmp(dt.degreeToConvert, "Fahreneit") == 0) {
            degreeToFahreneit(dt.baseDegree);

        } else {
            printf("Invalid degree type: %s\n", dt.degreeToConvert);
        }

    } else {
        printf("Input format: <degree to convert> <first degree type>");
    }
    return 0;
}
