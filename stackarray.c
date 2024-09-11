#include <stdio.h>
#include <stdlib.h>

#define max 100 

int i;
int stack[max];
int top=-1;
void pushArray(int stack[],int value);
void popArray(int stack[]);
void peepArray(int stack[]);
void displayArray(int stack[]);

int main(){

int ch;
int ele;
while (1) {
        printf("\nMenu:\n");
        printf("1. Push to Array Stack\n");
        printf("2. Pop from Array Stack\n");
        printf("3. Display Array Stack\n");
        printf("4. Peep to Array Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d",&ele);
                pushArray(stack,ele);
                displayArray(stack);
                break;
            case 2:
                popArray(stack);
                break;
            case 3:
                displayArray(stack);
                break;
            case 4:
                peepArray(stack);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
void pushArray(int stack[],int value){
    if (top==max-1){
    printf("overflow");}
    else{
    top=top+1;
    stack[top]=value;}
}
void popArray(int stack[]){
    if (top==-1){
    printf("underflow");}
    else{
    printf("Element removed %d ",stack[top]);
    top=top-1;}
}
void peepArray(int stack[]){
    if (top==-1){
    printf("underflow");}
    else{
    printf("Top Element is : %d ",stack[top]);}
}
void displayArray(int stack[]){
    if (top==-1){
    printf("underflow");}
    else{
        for(int i=top;i>=0;i--){
            printf(" %d \n",stack[i]);}}
}
