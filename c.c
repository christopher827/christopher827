#include<stdio.h>
int main(){
    // A string is a collecton of chararcters
    // Difference betwen a string and an array__An array is a collection of multiple data of same data-type,while a string  is a collection of data of just caracter data-type
    //  Initialization of a string---char yul[23]="Christoper";
   // printf("%s",yul);
   //Prototype(declaration) of a string
    char name[50];
    printf("Enter a string:");
    scanf("%s", name);
    printf("%s",name);

    return 0;
}