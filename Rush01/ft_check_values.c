int ft_check_values(char *str)
{
	int i;
	char suma;

	i = 0;
	suma = 0;
	while (str[i])
	{
		suma = (str[i] + str[i + 8]);
		if (i % 2 != 0) 
		{
			if (str[i] != ' ')
 				return (1);
		}
 		else if (i % 2 == 0)
 		{
 			if(!(str[i] >= '1' && str[i] <= '4'))
 				return (1);
 		}		 
 		else if (suma < '3' || suma > '5')
 			return (2);
 		i++;
 	}
	return (0);
}
