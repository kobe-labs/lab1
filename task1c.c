#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void task1c(FILE* input, FILE* output){
    char c;
    while((c = fgetc(input))!= EOF){
        if(c != '\n'){
            if(c > 100 && c < 133){
                c += 40;
            }
            else if(c > 140 && c < 173){
                c-= 40;
            }
            fprintf(output, "%c ", c);
        }
        else{
            fprintf(output, "%c", c);
        }
    }
}
