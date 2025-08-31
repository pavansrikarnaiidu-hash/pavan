#include<stdio.h>
int mian ()
{
char c;	
//taking input of character
printf("enter a character:");
scanf("%c",&c);

// checking for vowel
if (c=='a' || c== 'A')
{
	printf("%c is a vowel" ,c);
}
else if (c== 'e' || c=='E')
{
	printf("%c is a vowel",c);
}
else if (c=='i'|| c=='I')
{
	printf("%c is a vowel",c);
}
else if (c=='o'|| c=='O')
{
	printf("%c is a vowel",c);
}
else if (c=='u'|| c=='U')
{
	printf("%c is a vowel ",c);
}
else
{
	printf ("%c is a consonant",c);
}
	return 0;
	

}
