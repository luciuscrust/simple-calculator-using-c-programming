// Online C compiler to run C program online
#include <stdio.h>

double add(double num1, double num2){
    return  num1 + num2;
    
}

double sub(double num1,double num2){
    return num1 - num2;
}

double multiply(double num1,double num2){
    return num1 *  num2;
}

double divide(double num1, double num2){
    return num1/num2;
}

int main() {
    double num1,num2;
    int choice;
    
    printf("Calculator!!\n");
    printf("Functions:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    scanf("%d",&choice);
    
    printf("input num1\n");
    scanf("%lf",&num1);
    printf("input num2\n");
    scanf("%lf",&num2);
    
    double result;
    switch(choice){
        case 1:
            result = add(num1,num2);
            printf("result = %.2lf", result);
            break;
        
        case 2:
            result = sub(num1,num2);
            printf("result = %.2lf", result);
            break;
        
        case 3:
            result = multiply(num1,num2);
            printf("result = %.2lf", result);
            break;
        
        case 4:
            result = divide(num1,num2);
            printf("result = %.2lf", result);
            break;
        
        case 5:
            return 0;
        
        default:
            printf("Invalid input\n");
        
    }

    return 0;
}