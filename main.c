#include <omp.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	int nthreads; int tid;
		
	//ask for threads giving them each a private copy of nthreads and tid
	#pragma omp parallel private(tid)
	{
		//get thread id and print Hello World from strings
		tid = omp_get_thread_num();
		printf("Hello World from thread %d!\n", tid);
		
<<<<<<< HEAD
	//only master counts and prints number of threads
	#pragma omp master
=======
		//only master counts and prints number of threads
		#pragma omp master
>>>>>>> 31c43147254eeb3a803fe2fc32e7b4871dccbedb
		{
			nthreads = omp_get_num_threads();
			printf("There is a total of %d threads.\n", nthreads);
		}
	}
	
	return 0;
}
