/*
id: 22011393
name: Loo Hong Sheng
group: g1
lab: L2 (Easy) - Efficiently compute sums of diagonals of a matrix
problem: https://geeksforgeeks.org/efficiently-compute-sums-of-diagonals-of-a-matrix/
*/
#include <iostream>
using namespace std;

const int M = 4;
const int N = 4;

void printDiagonalSums(int mat[M][N])
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // Condition for principal diagonal
            if (i == j)
                principal += mat[i][j];

            // Condition for secondary diagonal
            if ((i + j) == (N - 1))
                secondary += mat[i][j];
        }
    }

    printf("%s", "Principal Diagonal:");
    printf("%d\n", principal);
    printf("%s", "Secondary Diagonal:");
    printf("%d\n", secondary);
}

// Driver code
int main()
{
    int a[][4] = { {1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {1, 2, 3, 4},
                  {5, 6, 7, 8} };
    printDiagonalSums(a);
    return 0;
}