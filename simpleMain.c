#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char *argv[]){

  int i,N;

  printf("There are %d arguments\n",argc);
  for(i=0;i<argc;i++){
         printf("argv %d: %s\n",i,argv[i]);

  }


  N=argc-1;
  //N=*argv[i-1];
  int *a;

 a=(int*) malloc(sizeof(int)*N);

  for(i=1;i<argc;i++){
        a[i-1]=atoi(argv[i]);
        
  }

  if(strcmp(argv[1],"bubble")==0){
    //argv[1]=NULL;
  bubble(a,N);
  }

  if(strcmp(argv[1],"insertion")==0){
    //argv[1]=NULL;
  insertion(a,N);
  }

  /*a=(int*) malloc(sizeof(int)*N);

  for(i=1;i<argc;i++){
        a[i-1]=atoi(argv[i]);
        
  }*/


  return 0;
}