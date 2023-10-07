// EX1:
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//int main(){
//    system("cls");
//    char a[] = "HOA";
//    char b[10];
//    char c[] = " LA";
//
//    // INPUT 
//    
//
//    printf("\nOUTPUT:\n");
//    // STUDENT : WRITE YOUR OUTPUT HERE
//    //a and b 
//    strcpy(b, a);
//    printf("b = %s\n", b);
//    strcat(a , c);
//    printf("a = %s\n",a);
//
//    //c
//    printf("strcmp(HOA,LA) = %d\n",strcmp(c,b));
//    printf("strcmp(LA,HOA) = %d\n",strcmp(b,c));
//    printf("strcmp(HOA,HOA) = %d\n",strcmp(b,b));
//
//    // FIXED PART : DO NOT EDIT ANY THING HERE
//    printf("\n");
//    system("pause");
//    return (0);
//}


//EX2:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Create n numbers in the interval [10,100] randomly
void createData(int a[], int n){
 	srand(time(NULL));
    for(int i = 0; i<n; i++)
        a[i] = 10 + rand()%91; 
    }
void swap(int &a, int&b){
	int temp = a;
	a = b;
	b = temp;
} 
void view(int a[], int n)
  {
  	for (int i=0 ; i<n ; i++)
  		printf("%d ", a[i]);
  }
void sort_bubbleSort(int a[], int n)
  { 
    for (int i=0; i<n-1; i++){
        bool act = false; 
        for (int j=0; j<n-i-1; j++){
            if (a[j] > a[j+1]){ 
                swap(a[j] , a[j+1]);
                act  = true;
            }
        }
        if (act == false)
            break;
    }
  }

int main()
  { system("cls");
	
    int a[100], n = 10;
    createData(a,n);
	
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    printf("\nBefore sorting:\n");
    view(a,n);
    printf("\nAfter sorting:\n");
    sort_bubbleSort(a,n);
    view(a,n);
    printf("\n");
	
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
  }
//

