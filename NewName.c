/* File Name: NewName.c 
* Program Details: Print the new name that you have entered.
* Author: Manne Rajesh
*/
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter New Name: ");
    scanf("%s", name);
    printf("The New Name you have entered is %s.", name);
    return 0;
}

