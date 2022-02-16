int	ft_iterative_factorial(int nb)
{
	int	multiplier;
	int	result;

	multiplier = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (multiplier <= nb)
	{
		result = result * multiplier;
		multiplier++;
	}
	return (result);
}
