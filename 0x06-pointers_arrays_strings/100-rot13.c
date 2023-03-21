#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		     'G', 'F', 'G','H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R',
		     'S', 'T', 'U', 'V', 'W', 'X',
		     'Y', 'Z', 'a', 'b', 'c', 'd',
		     'e', 'f', 'g', 'h', 'i', 'j',
		     'k', 'l', 'm', 'n', 'o', 'p',
		     'q', 'r', 's', 't', 'u', 'v',

