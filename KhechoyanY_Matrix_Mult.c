/* This program will ask the user for how large matrix A is, ho large matrix B is.
Then ask the user to input the amount of numbers into both matrices.
After, it will multiply the matrices together and output a final answer.

Created: 11-17-15

Yuri Khechoyan
*/

#include <stdio.h>

//function prototype
void printmatrix(int row, int col, int matrix[row] [col]);
int calcEntry(int first[], int second[], int length);

int main (void){

    //Declaring the Variables
          int row, col, row_2, a, b, c, d, e;


        //Ask the user how many rows and columns they want to add
        printf("Enter the number of rows and columns of matrix\n");
        scanf("%d%d", &row, &col);

        //function call
        int first[row] [col], second [row] [col], x[row], y[col];
        int product [row] [col];

        int matrix [row][col];

        printf("Enter the elements of first matrix\n");

        //Provide Conditions for the 1st Matrix
        for (c = 0; c < row; c++)
        for (d = 0; d < col; d++)
        scanf("%d", &first[c][d]);

            printf("Enter the elements of second matrix\n");

        //Provide Conditions for the 2nd Matrix
        for (c = 0; c < row; c++)
        for (d = 0 ; d < col; d++)
        scanf("%d", &second[c][d]);

    printf("Product of entered matrices:\n");

        //function call
    for(a = 0; a < row; a++){
        for(b = 0; b < col; b++){
            for(e = 0; e < col;e++){
                x[e] = first[a][b];
                y[e] = second [e][a];
            }
            product [a] [b] = calcEntry(x, y, col);
        }

    }

    printmatrix(row, col, product);

    return 0;
            }

      //function definition
       void printmatrix(int row, int col, int matrix[row] [col]){
           int a;
           int b;
       for(a = 0; a < row; a++){
            for(b = 0; b < col; b++){

                printf("%d \t", matrix [a][b]);

                }
                printf("\n");
            }
       }
        //function definition
            int calcEntry(int x[], int y[], int length){
                int product = 0, a;
            for(a = 0; a < length; a++){
            product += x[a] * y[a];
            }
            return product;
            }

