#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// I/O struct with function 
// Definition struct 
struct student{
	char name[100],MSSV[50];
	int age;
};
typedef student HS;

// Input function 
void Input(HS *x){
	// gets(x->name);
	scanf("%[^\n]",&x->name);
    scanf("%d", &x->age);
	scanf("%s", &x->MSSV);
}

//Output function 
void Output(HS a){
	printf("%s %d and MSSV is : %s", a.name, a.age, a.MSSV);
} 

int main(){
	HS a; 
	Input(&a);
	Output(a);
}