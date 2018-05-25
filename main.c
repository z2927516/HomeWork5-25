#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort( int*const array, unsigned int size );/*prototye*/

int main(void) {
	int a[SIZE]={2,10,5,30,8,19,22,16,3,7};/*initlize arry a*/
	
	unsigned int i; /*declare*/
	
	puts(" before");
	
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
		}/*end for*/
		
		bubbleSort(a, SIZE);/*sort the array*/
		
		puts("\n after");/*loop through*/
		
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
	    }
		
		puts("");
}/*end main*/
