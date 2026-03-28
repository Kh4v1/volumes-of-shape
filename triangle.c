#include <stdio.h>

double triangle(double a, double v){
    return a * v / 2;
}
double rectangle(double a, double b){
    return a * b;
}
double circle(double const pi, double r){
    return pi * r * r;
}

int main (){
    double r = 0.0;
    double a = 0.0;
    double b = 0.0;
    double v = 0.0;
    const double pi = 3.14;
    int choice = 0;
    
    printf(" 1 for triangle\n");
    printf(" 2 for rectangle\n");
    printf(" 3 for circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice){
        case 1:{
            printf("Enter the side length in cm: ");
            scanf("%lf",&a);
            printf("Enter the height in cm: ");
            scanf("%lf",&v);
            double S = triangle(a,v);
            printf("the S of triangle is %.2lf cm2\n",S);
            break;
            }
        case 2:{
            printf("Enter the side length in cm: ");
            scanf("%lf",&a);
            printf("Enter the width in cm: ");
            scanf("%lf",&b);
            double S = rectangle(a,b);
            printf("the S of rectangle is %.lf\n",S);
            break;
            }
        case 3:{
            printf("Enter the radius in cm: ");
            scanf("%lf",&r);
            double S = circle(pi,r);
            printf("the S of circle is %.2lf\n",S);
            break;
            }
        default:
            printf("you can enter number between 1-3 ");
            break;
          }
    return 0;
}
