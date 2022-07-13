#include <stdio.h>
#include <mpi.h>

/*#include<sstream>
string NumberToString(int Number){
    ostringstream ss;
    ss << Number;
    return ss.str();
}*/

int main(int argc, char *argv[])
{
    int size, myrank;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (myrank == 0)
    {
         printf("Processors %d display \n ", myrank);
        for (int i = 1; i < 6; ++i)
        {
            printf("%2d", i);
        }
    }
    if (myrank == 1)
    {
        printf("Processors %d display \n ", myrank);
        for (int i = 6; i < 11; ++i)
        {
            printf("%4d", i);
        }
    }
/*  if (myrank == 2)
    {
        printf("Processors %d display \n ", myrank);
        for (int i = 11; i < 16; ++i)
        {
            printf("%4d", i);
        }
    }
    if (myrank == 3)
    {
        printf("Processors %d display \n ", myrank);
        for (int i = 16; i < 21; ++i)
        {
            printf("%4d", i);
        }
    } 
*/
    MPI_Finalize();
    return 0;
}

