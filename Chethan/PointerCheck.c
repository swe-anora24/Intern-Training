#include <stdio.h>
#include<string.h>

typedef struct company{
    int x;
    int y;
    char c;
}comp1;

int main(){
    comp1 comp2;
     comp1 *ptr=(comp1 *)(malloc(sizeof(comp2)));

     ptr->x=10;
     ptr->y=20;
     ptr->c='H';

     printf("%d\n",ptr->x);
     printf("%d\n",ptr->y);
     printf("%c\n",ptr->c);

     free(ptr);

     printf("%d\n",ptr->x);
     printf("%d\n",ptr->y);
     printf("%c\n",ptr->c);
     printf("I am in branch ");

}
