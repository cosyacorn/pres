#include<stdio.h>
#include<stdlib.h>

int ** matmul(int **A, int **B, int size){

  int i, j, k;
  int **C;

  C=(int**)malloc(sizeof(int*)*size);

  for(i=0;i<size;i++){
    c[i]= (int*)malloc(sizeof(int)*size);
     for(j=0;j<size;j++){
        for(k=0;k<size;k++){
	  C[i][j]+=A[i][k]*B[k][j];
	}
     }
  }
  return C;
  for(i=0;i<size;i++){
    free(C[i]);
  }
  free(C);
}
