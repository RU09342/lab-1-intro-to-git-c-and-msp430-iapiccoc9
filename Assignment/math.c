#include <stdio.h>
#include math.h


int math(int a, int b, char c)
{
	if (c == '+')
		return a + b;
	else if (c == '-')
		return a - b;
	else if (c == '*')
		return a * b;
	else if (c == '/')
		return a / b;
	else if (c == '%')
		return a % b;
}