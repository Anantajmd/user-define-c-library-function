/*Author : Ananta Jamdhade
* Date   : 03/07/2019
* Description : myatoi() function user define atoi() function whitch is accept string and return integer

*/

#include<stdio.h>
/** 
 ***************************************************************************************
 * char *mystrcat(char *s1,char *s2,int n);
 *
 * @brief - mystrcat() is user define strcat() function
 * 			
 * @return <char *> : char * 
 * 		
 * DESCRIPTION:
 * 		The mystrcat function appends a copy of the string pointed to by s2 to the end of the string pointed to by s1. It returns a pointer to s1 where the resulting concatenated string resides.
 * 
 * @bug  Known Issues:
 *			None
 * 
 **************************************************************************************
*/
char *mystrcat(char *s1,char *s2,int n)
{
	char *p=s1;
	int i=1;
	while(*s1!='\0')
		s1++;
	while(*s2!='\0'&&i<=n)
	{
		*s1++=*s2++;
		i++;
	}
	
	*s1='\0';
	return p;
}
main()
{
 	char s1[20]="ananta ";
	char s2[20]="jamdhade";
	char *p;
	p=mystrcat(s1,s2,4);
	puts(p);
}
