#include<stdio.h>

struct Car{
    char model[20];
    int year;
    int price;
};
int main()
{   
    int n;
    struct Car c1;
    printf("enter the number of the car\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        printf("Enter the model of the car: %s\n",c1.model[i]);
        scanf("%s",&c1.model[i]);
        printf("Enter the year of the car: %d\n",c1.year);
        scanf("%d",&c1.year);
        printf("Enter the price of the car: %d\n",c1.price);
        scanf("%d",&c1.price);
    }

    for(int i = 1;i<=n;i++){
        printf("Model of car is %s",c1.model[i]);
        printf("Model of car is %d",c1.year);
        printf("Model of car is %d",c1.price);
    }
}