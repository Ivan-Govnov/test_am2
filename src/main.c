#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "is_integer.h"

int main() {
	char *A_str = NULL;
	char *B_str = NULL;
	int a, b;


    while (1) {
        printf("Введите A: ");
        if (scanf("%ms", &A_str) != 1) {
            printf("Ошибка чтения.\n");
            free(A_str);
	    continue;
        }
        if (is_integer_string(A_str)) {
    	    a = atoi(A_str);
	    free(A_str);
	    break;
        } else {
	    free(A_str); 
	    printf("Некорректный ввод!\n");
        }
    }

    while (1) {
        printf("Введите B: ");
        if (scanf("%ms", &B_str) != 1) {
            printf("Ошибка чтения.\n");
            free(B_str); 
            continue;
        }
        if (is_integer_string(B_str)) {
            b = atoi(B_str);
	    free(B_str);
            break;
        } else {
	    printf("Некорректный ввод!\n");
	    free(B_str); 
	}
    }

	//scanf("%i %i", &a, &b);

	printf("Сумма = %i\n", sum(a, b));
	printf("Разность = %i\n", sub(a, b));
	printf("Программа завершила работу\n");
	return 0;
}
