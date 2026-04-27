#include <stdio.h>

int main()
{
 
 float weight, height, bmi;
 printf("");
 scanf("%f", &weight);

 printf("");
 scanf("%f", &height);
 bmi = weight * 10000/ (height * height);
 printf("BMI : %.6f", bmi);

}