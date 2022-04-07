#include <stdio.h>

main()
{
        float fahr, celsius; /* declared the temperatures */
        float lower, upper, step; /* variables for calculations */
	lower = -17.8; /* lower temperature boundary */
	upper = 148.9; /* upper temperature boundary */
	step = 11.1; /* step size */

	printf("celsius\t fahrenheit\n");
        for (celsius = upper; celsius >= lower; celsius -= step)
        {
       		fahr = ((9.0/5.0) * celsius) + 32.0;
        	printf("%5.1f %8.0f\n", celsius, fahr);
        }
}
