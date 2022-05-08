// Ass-3 P1
#incluir<stdio.h>
mesclagem de vazio (int arr1[],int arr2[],int n1,int n2,int arr3[])
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		se(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		outra coisa arr3[k++]=arr2[j++];
		 
	}
	enquanto (i<n1)
	{
			arr3[k++]=arr1[i++];
		
	}
	enquanto (j<n2)
	{
		arr3[k++]=arr2[j++];
		
	}
	printf ("\n Elementos mesclados e classificados são os seguintes-:");
	para(int s=0;s<(n1+n2);s++)
	{
		printf("%d",arr3[s]);
		printf ("\n");
	}
	se(n1+n2)%2==0)
	{
		int x=(n1+n2)/2;
		printf ("\nmedian is-: %d",arr3[x]);
	}
	mais
	{
		int x=(n1+n2+1)/2;
		printf ("\nmedian is-: %d",arr3[x-1]);
	}
}
int principal()
{
	int a[10],b[10],c[20],n1,n2;
	printf ("\nEnter o tamanho do array1-:");
	scanf ("%d",&n1);
	printf ("\nEnter os elementos do array1-:");
	para(int i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf ("\nEnter o tamanho do array2-:");
	scanf("%d",&n2);
	printf ("\nEnter os elementos do array2-:");
	para(int i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	mesclagem(a,b,n1,n2,c);
	retorno 0;
}
