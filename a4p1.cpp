//classificar palavras em ordem lexicográfica.
#incluir<stdio.h>
#incluir<string.h>
int principal()
{
	char str[20][10],temp[10];
	printf ("\nEnter lista de nomes-:");
	para(int i=0;i<=9;i++)
	{
		scanf("%s",&str[i]);
	}
	
	para(int i=0;i<=8;i++)
	{
		para(int j=i+1;j<=9;j++)
		{	
			se(strcmp(str[i],str[j])>0)
			{
				strcpy (temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
				
			}
		}
	}
	printf("\nList de nomes em ordem lexicográfica");
	para(int i=0;i<=9;i++)
	{
		printf ("%s",&str[i]);
		printf ("\n");
	}
	
	retorno 0;
	
			
}
