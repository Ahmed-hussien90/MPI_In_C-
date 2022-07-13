#include <mpi.h>
#include <stdio.h>
#include <sstream>
#include <iostream>
using namespace std;
string NumberToString(int number){
	ostringstream ss;
	ss<< number;
	return ss.str();
}
int main(int argc, char *argv[])
{
	int numprocs, myrank;
	string s0 ="" ,s1="", s2="", s3="";
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myrank);

	if (myrank == 0){
			s0+="Processor 1 Displays : ";
			for (int i = 1; i < 6; i++){
			s0 += NumberToString(i);
			s0+= " ";
			}
			s0+="\n";
			cout<< s0 ;
		}else if (myrank == 1){
			s1+="Processor 2 Displays : ";
			for (int i = 6; i < 11; i++){
				 s1 += NumberToString(i);
				 s1+= " ";
			}
			s1+="\n";
			cout<< s1 ;
		}else if(myrank == 2){
			s2+="Processor 3 Displays : ";
			for (int i = 11; i < 16; i++){
				s2 += NumberToString(i);
				s2+= " ";
			}
			s2+="\n";
			cout<< s2 ;
		}else if (myrank == 3){
			s3+="Processor 4 Displays : ";
			for (int i = 16; i < 21; i++){
				s3 += NumberToString(i);
				s3+= " ";
			}
			s3+="\n";
			cout<< s3 ;
		}

	MPI_Finalize();

	return 0;
}