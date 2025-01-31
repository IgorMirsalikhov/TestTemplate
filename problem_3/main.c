#include <stdio.h>

double fahrenheitToKelvin(double fahrenheit);

int main(void) {
    printf("%.3f\n", fahrenheitToKelvin(123));
    printf("%.3f\n", fahrenheitToKelvin(76));
    printf("%.3f\n", fahrenheitToKelvin(0));
    printf("%.3f\n", fahrenheitToKelvin(89));

    return 0;
}
