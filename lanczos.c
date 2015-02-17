#include<stdio.h>
#include<stdlib.h>


int** Mat(int n, int m)
{
  int r, i, j;
  int ** mat = (int **)malloc(sizeof(int *) * n);

  for(i=0;i<n;i++){
    mat[i] = (int *)malloc(sizeof(int)*m);
      for(j=0; j<m; j++){
	r=rand()%10;
	mat[i][j]=r-2;
      }
  }

  return mat;
  for(i=0;i<n;i++) free(mat[i]);
  free(mat);
}

int ** matmul(int **A, int **B, int nrow, int ncol, int ncol2){

  int i, j, k;
  int **C;

  C=(int**)malloc(sizeof(int*)*nrow);

  for(i=0;i<nrow;i++){
    C[i]= (int*)malloc(sizeof(int)*ncol2);
     for(j=0;j<ncol2;j++){
        for(k=0;k<ncol;k++){
	  C[i][j]+=A[i][k]*B[k][j];
	}
     }
  }
  return C;
  for(i=0;i<nrow;i++){
    free(C[i]);
  }
  free(C);
}

int main(){

  int a[10][10];

  a=Mat(10,10);

  

}
