/* naive string copy */
#include <stdio.h>
#include <stdlib.h>

int main () 
{
	char * var1 = "yellow";
	char * var2 = malloc (6 * sizeof(char));
	int i = 0;
	
	printf ("var1 = %s\n",var1);
	while (*(var2 + i) = *(var1 + i) )
	{
		i++;
	}
	printf ("var2 = %s\n",var2);
return 0;
}