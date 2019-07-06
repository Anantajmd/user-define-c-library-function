/*Author : Ananta Jamdhade
* Date   : 03/07/2019
* Description : myatoi() function user define atoi() function whitch is accept string and return integer

*/

#include<stdio.h>
/** 
 ***************************************************************************************
 * int myatoi(char *p);
 *
 * @brief - convert string in to integer
 * 			
 * @return <int> : int
 * 		
 * DESCRIPTION:
 * 		accept string and return integer
 * 
 * @bug  Known Issues:
 *			None
 * 
 **************************************************************************************
*/
int myatoi(char *p)
{
	int data=0,sin=1;
	if(*p=='-')
	{
		sin=-1;
		p++;
	}
	while(*p>=48&&*p<=57)
	{
		data=data*10+((*p)-48);
		p++;
	}
	return data*sin;
}
main()
{
	printf("%d \n",myatoi("123"));
}
