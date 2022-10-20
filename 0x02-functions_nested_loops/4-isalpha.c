#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character that is going to be checked
 * Return: 1 if @c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
