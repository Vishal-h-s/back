#include<stdio.h>
#include<mpi.h>

int main(int argc,char ** argv){

    MPI_Init(&argv,&argv);

    int rant,size;
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    MPI_Comm_size(MPI_COMM_WORLD,&size);

    printf("Process %d, size %d",rank,size);
    MPI_Finalize();
}
