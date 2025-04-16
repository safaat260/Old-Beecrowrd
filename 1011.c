#include<stdio.h>
#include<math.h>

int main() {

    double VOLUME, r, pi = 3.14159, a = 4.0, b = 3.0;
     scanf("%lf", &r);

     VOLUME = (a/b) * pi * pow(r,3);

     printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}

