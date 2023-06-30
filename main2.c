#include <stdio.h>
#include <unistd.h>

 int fork() {
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sumOdd = 0, sumEven = 0, n, i;

    // Checking if n is not 0
if( n>0){
        for (i = 0; i < 10; i++) {
            if (a[i] % 2 == 0)
                sumEven = sumEven + a[i];
        }
        printf("Parent process\n");
        printf("Sum of even no. is %d\n", sumEven);
}

    // If n is 0 i.e. we are in child process
    else {
        for (i = 0; i < 10; i++) {
            if (a[i] % 2 != 0)
                sumOdd = sumOdd + a[i];
        }
        printf("Child process\n");
        printf("Sum of odd no. is %d\n", sumOdd);
    }
}
int main()
{
    fork();
}
