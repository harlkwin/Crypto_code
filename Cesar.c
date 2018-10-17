#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char *cesar(char * str , int cle){



}

int map_char_to_number(char *alpha){
     int a;
     FILE * fd=fopen("data.txt","w+");
     char *line=NULL;
     
     
      if(fd==NULL) {
          exit(EXIT_FAILURE);
      }
      while(fgets(line,3,fd)!=NULL){
           char * c = line[0];   
           if(strcmp(c,alpha)==0){
              
              
              
      }
      }

  

}
int main(){

    map_char_to_number();
    
}