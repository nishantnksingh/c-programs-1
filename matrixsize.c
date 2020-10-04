#include <stdio.h>

int main()
{
 
 int row, col,s;
 int a, b, c, d, e, f, g, h, i;
 long det;
 printf("Enter the size of array");
 scanf("%d",&s);

int A[s][s];
 printf("Enter elements in matrix \n");
 for(row=0; row<s; row++)
 {
 for(col=0; col<s; col++)
 {
 scanf("%d", &A[row][col]);
 }
 }
 
 a = A[0][0];
 b = A[0][1];
 c = A[0][2];
 d = A[1][0];
 e = A[1][1];
 f = A[1][2];
 g = A[2][0];
 h = A[2][1];
 i = A[2][2];
 
 det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));
 printf("Determinant of matrix A = %ld", det);
 return 0;
}
