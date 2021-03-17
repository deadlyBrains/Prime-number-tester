#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    int i;
    int flag = 0;

    printf("Please enter the number to be checked: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; ++i) {

        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {

        printf("1 is neither prime nor composite");

    }
    else  {
        if (flag == 0) {
            printf("Is a prime number");
        }
        else {
            printf("%d is not a prime number");
        }
    }
    return 0;
}