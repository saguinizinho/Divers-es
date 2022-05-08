#incluir<stdio.h>
#incluir<string.h>
int principal()
{
	int len,i,flag=0;
	char s[20];
	printf ("\nEnter a string-:");
	scanf("%s",&s);
	len=strlen(s);
	para(i=0;i<len;i++)
	{
		se(s[i]==s[len-i-1])
 ++bandeira; 
	}
	se (flag==len)
	printf ("String é um pallindrome");
	outra impressão ("String é um pallindrome não");
	 
	retorno 0;
	
}
