#include <stdio.h>

/* program to count tabs, newline and blank spaces */

main()
{
	int nl, bl, tb;

	nl = bl = tb = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
		else if (c == ' ')
		{
			++bl;
		}
		else if (c == '\t')
		{
			++tb;
		}
	}
	printf("tab: %d\n space: %d\n newline: %d\n", tb, bl, nl)
}
