#include<stdio.h>
#include<stdlib.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char *argv[]){

  int i,N;
  
  //test
  char bu[]="bubble";
  char nser[]="insertion";
  //--

  printf("There are %d arguments\n",argc);
  for(i=0;i<argc;i++){
         printf("argv %d: %s\n",i,argv[i]); 
  }

  N=argc-1;

  int *a;
  a=(int*) malloc(sizeof(int)*N);

  for(i=1;i<argc;i++){
        a[i-1]=atoi(argv[i]);
        
  }

  //test
if(argv[i]==bu){
  argv[1]==NULL;
  
}
bubble(a,N);
  
if(argv[i]==nser){
  argv[1]==NULL;
  
}
insertion(a,N);
  
  
  /*if(argv[1]=="bubble")
    argv[1]=NULL;*/

  //else(arvg[i]=="insertion")
  //  insertion(a,N);
  //selection(a,N);
 
  return 0;
}