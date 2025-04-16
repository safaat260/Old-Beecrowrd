#include<stdio.h>
int main(){

int a,b,c,d;
float e,f,total;

scanf("%d %d %f", &a,&b,&e);
scanf("%d %d %f", &c,&d,&f);

total = (b*e) + (d*f);

printf("VALOR A PAGAR: R$ %.2f\n", total);
return 0;
}


//uths0

#include <stdio.h>
#include <string.h>

#define MAX 100

// Object structure
typedef struct {
    char name[50];
    float weight;
    float profit;
    float ratio;  // profit-to-weight ratio
} Object;

void swap(Object *a, Object *b) {
    Object temp = *a;
    *a = *b;
    *b = temp;
}

// Sort objects in descending order of profit-to-weight ratio
void sortObjects(Object objs[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(objs[i].ratio < objs[j].ratio) {
                swap(&objs[i], &objs[j]);
            }
        }
    }
}

int main() {
    Object objs[MAX];
    int n;

    printf("Enter number of objects: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for object %d\n", i + 1);

        printf("Name: ");
        scanf("%s", objs[i].name);

        printf("Weight: ");
        scanf("%f", &objs[i].weight);

        printf("Profit: ");
        scanf("%f", &objs[i].profit);

        // Calculate profit-to-weight ratio
        objs[i].ratio = objs[i].profit / objs[i].weight;
    }

    // Sort the objects
    sortObjects(objs, n);

    // Print sorted list
    printf("\nSorted list (by profit-to-weight ratio):\n");
    printf("Name\tWeight\tProfit\tP/W Ratio\n");
    for(int i = 0; i < n; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\n", objs[i].name, objs[i].weight, objs[i].profit, objs[i].ratio);
    }

    return 0;
}