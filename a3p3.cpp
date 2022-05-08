// Ass-3 P3
#incluir<stdio.h>
int principal()
{
	int arr1[10],arr2[10],arr3[20],i,k,j,n;
	printf ("\nEnter o tamanho da matriz-:");
	scanf ("%d",&n);
	printf ("\nEnter os elementos da matriz-:");
	para(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	} 
	
	para(i=0;i<n;i++)
	{
		se(arr1[i]%2!=0)
		arr2[j++]=arr1[i];
		mais arr3[k++]=arr1[i];
	} 
	printf ("\nOs elementos da matriz 1 -:");
	para(i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
		printf ("\n");
	} 
	
	printf ("\nOs elementos da matriz 2 -:");
	para(int m=0;m<j;m++)
	{
		printf ("%d",arr2[m]);
		printf ("\n");
	} 
		
	
	printf ("\nOs elementos da matriz 3 -:");
	para (int m=0;m<k;m++)
	{
		printf ("%d",arr3[m]);
		printf ("\n");
	} 
		
	retorno 0;
	
	
}
