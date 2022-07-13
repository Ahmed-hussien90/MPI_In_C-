#include<stdio.h>
#include<mpi.h>

int main(int argc, char *argv[]){
    int size, myrank;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
if (myrank%2==0)
{
    printf("Processors %d of %d : I am even \n", myrank, size);
}else{
        printf("Processors %d of %d : I am odd \n", myrank, size);

}

    
    MPI_Finalize();
    return 0;

}