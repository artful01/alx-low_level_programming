#include "main.h"
/**
 * _prime - evaluates if n is prime.
 * @n: number to be evaluated
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if it's not prime.
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}

/**
 * is_prime_number - evaluates if n is a prime.
 * @n: number to be evaluated
 *
 * Return: 1 if n is prime, 0 if no prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
