#define SIZE 10
void bubbleSort(int *const array, unsigned int size )
	{
		void swap(int *element1Ptr, int *element2Ptr );
		unsigned int pass;/*declare*/
		unsigned int j;/*declare*/
		
	for (pass= 0;pass<SIZE;++pass){
	    for(j=0;j<size-1;++j){
				if(array[j]>array[j+1]){
					swap(&array[j],&array[j+1]);		
				}/*end if*/
			}/*end inner for*/
		}/*end out for*/
}/*end function bubblesort*/
void swap(int *element1Ptr,int *element2Ptr)
{
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr= hold;
}/*end function swap*/
