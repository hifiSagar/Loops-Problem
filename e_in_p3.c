/*1. if else
2. loops
3. break and co ntinue
4. switch case   */   

#include<stdio.h>
void main(){
float temperature;
printf("Enter temperature: ");
scanf("%f",&temperature);

if(temperature <=20){
printf("wear sweatter\n");
}
else if (temperature > 20 && temperature <30){
    printf("normal\n");
}
else{
    printf("wear a t-shirt and dirnk more water\n");
}

}



