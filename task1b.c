#include <stdlib.h>
#include <stdio.h>

void task1b(FILE* input, FILE* output){
  char c;
  int num[8];
  while((c = fgetc(input))!= EOF){
    if((c != '\n'){
      a = 1;
      charToBinary(c,num);
      for(int i = 0; i < 8; i++){
	    fprintf(output, "%d ",num[i]);
      }
    }
    else{
        fprintf(output, "%c", c);
    }
  }
 }

void charToBinary(char c, int num[8]){
    int n = (int) c;
    int index = 7;
    while(index >= 0){
        num[index] = n & 1;
        index --;
        n >>= 1;
    }
}
