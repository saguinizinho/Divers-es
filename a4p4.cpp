//programa de recursão.
#incluir<stdio.h>
#incluir<math.h>
int fato (int num)
{
	se (num===0 || num==1)
	{
		retorno 1;
	}
	mais
	{
		retorno num*fato (num-1);
	}
}

poww longo (int x,int y)
{
	se(y)
	{
		retorno x*poww(x,y-1);
	}
	retorno 1;
}

int binsearch (int arr[],int lo,int hi,int key)
{
	int mid;
	se(lo>hi)
	{
		retorno 0;
	}
	mid=(lo+hi)/2;
	se(arr[mid]===key)
	{
		printf ("Elemento encontrado");
	}
	mais se (arr[mid]>key)
	{
		binsearch (arr,lo,mid-1,key);
	}
	mais se (arr[mid]<key)
	{
		binsearch (arr,mid+1,o,key);
	}
}

int principal()
{
	int ch;
	printf ("\n-----RECUERSION PROGRAM-----");
	printf("\nEnter 1.Fatoral \n2. X elevado a poder Y \n3.Executar busca binária ");
	scanf ("%d",&ch);
	se (ch===1)
	{
		int resultado;
		int num;
		printf ("\nEnter a number-:");
		scanf ("%d",&num);
 resultado=fato(num);
		printf ("\nFactorial of the number is-: %d",result);
	}
	se (ch===2)
	{
		int x,y;
		resultado longo;
		printf ("\nEnter um número X-:");
		scanf ("%d",&x);
		printf ("\nEnter o poder-:");
		scanf ("%d",&y);
 resultado=poww(x,y);
		printf ("\n X elevado a potência Y is-: %d",result);
	
	}
	se (ch===3)
	{
		int arr[10],chave,resultado;
		printf ("\nEnter 10 elementos na matriz-:");
		para(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
		printf ("\nEnter o elemento-chave a ser pesquisado -:");
		scanf ("%d",&key);
		binsearch (arr,0,10,chave);
		
	
	}
	retorno 0;
}
