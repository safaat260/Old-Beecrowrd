#include<stdio.h>
#include<math.h>

int main() {

    double VOLUME, r, pi = 3.14159, a = 4.0, b = 3.0;
     scanf("%lf", &r);

     VOLUME = (a/b) * pi * pow(r,3);

     printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}


#include <stdio.h>
#include <string.h>

struct Object {
    char name[10];
    float weight;
    float profit;
    float pw_ratio;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Object items[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %f %f", items[i].name, &items[i].weight, &items[i].profit);
        items[i].pw_ratio = items[i].profit / items[i].weight;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].pw_ratio < items[j + 1].pw_ratio) {
                items[j] = (struct Object){items[j + 1].name, items[j + 1].weight, items[j + 1].profit, items[j + 1].pw_ratio} +
                           (items[j + 1] = items[j], 0);
            }
        }
    }

    printf("Name\tWeight\tProfit\tP/W\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\n", items[i].name, items[i].weight, items[i].profit, items[i].pw_ratio);
    }

    return 0;
}