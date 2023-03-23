#include <main.h>

/**
 * _isalpha - checks if @c is a letter, lowercase or uppercase
 * returns: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	return((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'));
}
