#include <stdio.h>
#include <math.h>


double func(double x) {
    return x*x+3*x;
}


double simpson(double a, double b, int n) {
    double h = (b - a) / n;
    double integral = func(a) + func(b);
    
    for (int i = 1; i < n; i += 2) {
        double x = a + i * h;
        integral += 4 * func(x);
    }
    
    for (int i = 2; i < n - 1; i += 2) {
        double x = a + i * h;
        integral += 2 * func(x);
    }
    
    integral *= h / 3.0;
    
    return integral;
}

int main() {
    double a, b, mew=0; 
    int n;       
    
    printf("Enter lower limit of integration: ");
    scanf("%lf", &a);
    
    printf("Enter upper limit of integration: ");
    scanf("%lf", &b);
    
    printf("Enter the number of subintervals (must be even): ");
    scanf("%d", &n);
    
    if (n % 2 != 0) {
        printf("Number of subintervals must be even.\n");
        return 1;
    }
    
    double result = simpson(a, b, n);
    
    printf("Result of integration: %lf\n", result);
    
    mew=result/(b-a);
    printf("The value of mew is.... %lf",mew);
    
    
    return 0;
}