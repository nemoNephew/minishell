#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

int	main(int ac, char **av)
{
	char	*c;
	if (ac == 1)
	{
		while ((c = readline("minishell> ")) != 0)
		{
			if (*c)
				add_history(c);
			printf("Your command is : '%s'\n", c);
			free(c);
		}
	}
	else
		return (1);
	return (0);
}
