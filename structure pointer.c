/* BY using typedef */
#include <stdio.h>
#include<string.h>

typedef struct company{
    int x;
    int y;
    char c;
}comp1;  

int main(){
     comp1 *ptr=(comp1 *)malloc(sizeof(comp1));

     ptr->x=10;
     ptr->y=20;
     ptr->c='H';

     printf("%d\n",ptr->x);
     printf("%d\n",ptr->y);
     printf("%c\n",ptr->c);

     free(ptr);

     printf("%d\n",ptr->x);
     printf("%d\n",ptr->y);
     printf("%c",ptr->c);
     printf("This is the main");
    }