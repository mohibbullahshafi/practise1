#include <stdio.h>
#include <math.h>

int main()
{
    int a[2][2] = {5, 4, 4, 4}, b[2][2] = {6, 7, 4, 8}, c[2][2], i, j, k, sum;

    printf("Matrix A is :\n\t\t");
    for (i = 0; i < 2 ; i++ ){
        for (j = 0; j < 2 ; j++ ){
            printf("%d\t", a[i][j]);
        }
        printf("\n\t\t");
    }

    printf("\nMatrix B is :\n\t\t");
    for (i = 0; i < 2 ; i++ ){
        for (j = 0; j < 2 ; j++ ){
            printf("%d\t", b[i][j]);
        }
        printf("\n\t\t");
    }

    printf("\nMultiplication of A and B is : \n\t\t");
    for (i = 0; i < 2; i++ ){
        for (j = 0; j < 2  ; j++ ){
            sum = 0;
            for (k = 0; k < 2 ; k++ ){
                sum = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n\t\t");
    }


//    int a[1][3] = {1,2,3};
//    int b[2][3] = {{11,12,13},{14,15,15}};
//    int c[3][3] = {{11,12,13},{14,15,15},{}};
//
//
//    array2d(a,1);
//    array2d(b,2);
//    array2d(c,2);























    return 0;
}

void array2d(int arrayName[][3],int n){
    int i, j;
    for (i = 0; i < n ; i++ ){
        for (j = 0; j < 3 ; j++ ){
            printf("%2d ", arrayName[i][j]);
        }
        printf("\n");
    }

}

