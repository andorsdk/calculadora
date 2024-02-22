//calculadora en c
#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;
    printf("Ingrese un operador (+, -, *, /): ");
    scanf("%c", &operador);
    if(operador== '+' || operador== '-' || operador== '/' || operador== '*'){
    printf("Ingrese dos números separados por espacio: ");
    scanf("%lf %lf", &num1, &num2);

    }
    switch (operador) {
        case '+';
        //operacion resta
         resultado = num1+num2;
            break;
        case '-';
        resultado = num1-num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: División entre  cero\n");
                return 1;  
            }
            break;
        default:
            printf("Error: Operador no válido\n");
            return 1;  // Salir del programa 
    }
}
