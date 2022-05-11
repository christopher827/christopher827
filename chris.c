#include<stdio.h>
int main(){

//Calculate the  total amount of food bought by a customer using switch
//food items are:
//1.burger-200
//2.frenchfries-50
//3.pizza-500
//4.sandwiches-150

int Array[2][3]={
    {1,3,4},
    {2,2,3}
};
for (int i = 0; i < 2; i++)
{
    for (int a = 0; a < 3; a++)
    {
        printf("Array[%d][%d]=%d\n",i,a,Array[i][a]);
    }
    
}





















    return 0;
}