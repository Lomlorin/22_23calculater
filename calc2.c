#include <stdio.h>
#include <string.h>
#include <math.h>

typedef void (*TwoArgOperation)(double, double);
typedef void (*OneArgOperation)(double);

void add(double a, double b) {
    printf("RESULT: %.2fn", a + b);
}

void subtract(double a, double b) {
    printf("RESULT: %.2fn", a - b);
}

void multiply(double a, double b) {
    printf("RESULT: %.2fn", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("RESULT: %.2fn", a / b);
    } else {
        printf("ERROR: DIVISION BY ZERO!n");
    }
}

void add50(double a) {
    printf("RESULT: %.2fn", a + 50);
}

void squareRoot(double a) {
    if (a >= 0) {
        printf("RESULT: %.2fn", sqrt(a));
    } else {
        printf("ERROR: CANNOT TAKE SQUARE ROOT OF A NEGATIVE NUMBER!n");
    }
}

int main() {
    TwoArgOperation operations_two[] = {add, subtract, multiply, divide};
    OneArgOperation operations_one[] = {add50, squareRoot};

    const char *operation_names_two[] = {"ADD", "SUBTRACT", "MULTIPLY", "DIVIDE"};
    const char *operation_names_one[] = {"ADD 50", "SQUARE ROOT"};

    while (1) {
        printf("CHOOSE ACTIONn");

        // Выводим операции с двумя аргументами
        for (int i = 0; i < sizeof(operations_two) / sizeof(operations_two[0]); i++) {
            printf("%d. %sn", i + 1, operation_names_two[i]);
        }

        // Выводим операции с одним аргументом
        for (int i = 0; i < sizeof(operations_one) / sizeof(operations_one[0]); i++) {
            printf("%d. %sn", i + 1 + sizeof(operations_two) / sizeof(operations_two[0]), operation_names_one[i]);
        }

        // 
        printf("%d. EXITn", sizeof(operations_two) / sizeof(operations_two[0]) + sizeof(operations_one) / sizeof(operations_one[0]) + 1);
        
        int choice;
        printf("CHOOSE COMMAND: ");
        scanf("%d", &choice);

        if (choice == sizeof(operations_two) / sizeof(operations_two[0]) + sizeof(operations_one) / sizeof(operations_one[0]) + 1) {
            printf("EXITING THE PROGRAMn");
            break;
        }

        if (choice < 1 || choice > sizeof(operations_two) / sizeof(operations_two[0]) + sizeof(operations_one) / sizeof(operations_one[0])) {
            printf("ERROR: INVALID CHOICE!n");
            continue;
        }

        double num1, num2;

        if (choice <= sizeof(operations_two) / sizeof(operations_two[0])) { // Для операций с двумя числами
            printf("CHOOSE TWO NUMBERS: n");
            scanf("%lf %lf", &num1, &num2);
            operations_two[choice - 1](num1, num2);
        } else { // Для операций с одним числом
            printf("CHOOSE ONE NUMBER: n");
            scanf("%lf", &num1);
            operations_one[choice - 1 - sizeof(operations_two) / sizeof(operations_two[0])](num1);
        }
    }

    return 0;
}


