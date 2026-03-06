#include<stdio.h>
#include<math.h>

int main() {
    int a,b;
    float c;
    printf("Enter length of rectangle:");
    scanf("%d",&a);
    printf("Enter width of rectangle:");
    scanf("%d",&b);
    c=sqrt(a*a+b*b);
    printf("Diagonal of rectangle=%f",c);
return (0);
} 