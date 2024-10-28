#include <stdio.h>

typedef void (*Operation)(double, double); 

void add(double a, double b) {
    printf("RESULT: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("RESULT: %.2f\n", a - b);
}

void multiply(double a, double b) {
    printf("RESULT: %.2f\n", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("RESULT: %.2f\n", a / b);
    } else {
        printf("ERROR: DIVISION BY ZERO!\n");
    }
}
void addand2(double a, double b) {
    printf("RESULT: %.2f\n", a + b + 2);

/*void add3 (double a, double b ) {
    printf("RESULT: %.2f\n", a + b + 3 );
}
void add50(double a) {
    printf("RESULT: %.2fn", a + 50);
}
*
void squareRoot(double a) {
    if (a >= 0) {
        printf("RESULT: %.2fn", sqrt(a));
    } else {
        printf("ERROR: CANNOT TAKE SQUARE ROOT OF A NEGATIVE NUMBER!n");
    }
}
*/
}

int main() {
    Operation operations[] = {add, subtract, multiply, divide, addand2};
    const char *operation_names[] = {"ADDn", "SUBTRACTn", "MULTIPLYn", "DIVIDEn", "add+2n"};

    int choice;
    double num1, num2;

    while (1) {
        printf("CHOOSE ACTION\n");
        for (int i = 0; i < sizeof(operations) / sizeof(operations[0]); i++) {
            printf("%d. %s", i + 1, operation_names[i]);
        }
        printf("%d. EXIT\n", sizeof(operations) / sizeof(operations[0]) + 1);
        printf("CHOOSE COMMAND: ");
        scanf("%d", &choice);

        if (choice == sizeof(operations) / sizeof(operations[0]) + 1) {
            printf("EXITING THE PROGRAM\n");
            break;
        }

        if (choice < 1 || choice > sizeof(operations) / sizeof(operations[0])) {
            printf("ERROR: INVALID CHOICE!\n");
            continue;
        }


   
   /* if (choice <= 5) { // Для операций с двумя числами
    printf("CHOOSE TWO NUMBERS: n");
    scanf("%lf %lf", &num1, &num2);
    operations[choice - 1](num1, num2);

    } else { // Для операций с одним числом
    printf("CHOOSE ONE NUMBER: n");
    scanf("%lf", &num1);
    operations[choice - 1](num1, 0); // Передаём второе число как 0 (не используется)*/
}

        /*printf("CHOOSE TWO NUMBERS: \n");
        scanf("%lf %lf", &num1, &num2);

        operations[choice - 1](num1, num2); */ 
        
       // if (choice < 7 || choice > sixeo(operations) / sizeof )
    //}

    return 0;
}


/*

void add(double a, double b) {
    printf("RESALT: %.2fn", a + b);
}

void subtract(double a, double b) {
    printf("RESALT: %.2fn", a - b);
}

void multiply(double a, double b) {
    printf("RESALT: %.2fn", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("RESALT: %.2fn", a / b);
    } else {
        printf("EROR. DEVISION ON 0!n");
    }
}

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf(" CHOOSE ACTIONS: ");
        printf("1. ADD ");
        printf("2. SUBTRACTIONS ");
        printf("3. MULTI ");
        printf("4. DEVISION ");
        printf("5. EXIT ");
        printf("CHOOSE COMAND ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("EXIT FROM THE PROGRAM");
            break;
        }

        printf(" CHOOSE TWO NUMBERS: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("ERRRRROOOOR");
                break;
        }
    }

    return 0;
}*/
