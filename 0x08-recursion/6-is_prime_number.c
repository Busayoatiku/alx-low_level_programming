
Cashgen@OB-PC MINGW64 ~
$ ssh 0d493bee537c@0d493bee537c.73f338fa.alx-cod.online
0d493bee537c@0d493bee537c.73f338fa.alx-cod.online's password:
root@0d493bee537c:/# cd alx-low_level_programming
root@0d493bee537c:/alx-low_level_programming# mkdir 0x08-recursion
root@0d493bee537c:/alx-low_level_programming# cat > README.md
All about recursion and iteration
^C
root@0d493bee537c:/alx-low_level_programming# touch main.h

Cashgen@OB-PC MINGW64 ~
$ ssh 0d493bee537c@0d493bee537c.73f338fa.alx-cod.online
0d493bee537c@0d493bee537c.73f338fa.alx-cod.online's password:
root@0d493bee537c:/# cd alx-low_level_programming
root@0d493bee537c:/alx-low_level_programming# mkdir 0x08-recursion
root@0d493bee537c:/alx-low_level_programming# cat > README.md
All about recursion and iteration
^C
root@0d493bee537c:/alx-low_level_programming# touch main.h
root@0d493bee537c:/alx-low_level_programming# touch _putchar.c
root@0d493bee537c:/alx-low_level_programming# cat > 0-puts_recursion.c
#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a string,followed by a new line.
* @s: The string to be printed.
*/
void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
}
^C
root@0d493bee537c:/alx-low_level_programming# cd 0x08-recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > README.md
recursion and iteration.
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# touch main.h
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# touch _putchar.c
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 0-puts_recursion.c
#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a string,followed by a new line.
* @s: The string to be printed.
*/
void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 0-puts_recursion.c

========== 0-puts_recursion.c ==========
_puts_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedanic -std=gnu89 0-puts_recursion.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 1-print_rev_recursion.c
#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - To prints a string in reverse.
* @s: The string to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s)
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 1-print_rev_recursion.c
#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - To prints a string in reverse.
* @s: The string to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 1-print_rev_recursion.c

========== 1-print_rev_recursion.c ==========
_print_rev_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedanic -std=gnu89 1-print_rev_recursion.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 2-strlen_recursion.c
#include "main.h"

/**
* _strlen_recursion - It returns the length of a string.
* @s: The string to be measured.
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
int len = 0;

if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 2-strlen_recursion.c

========== 2-strlen_recursion.c ==========
_strlen_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedanic -std=gnu89 2-strlen_recursion.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 3-factorial.c
#include "main.h"

/**
* factorial - to return the factorial of a given number.
* @n: The number to find the factorial of
* Return: If n > 0 - the factorial of n.
* if n < 0 - 1 to indicate an error.
*/
int factorial(int n)
{
int result = n;

if (n < 0)
return (-1);

else if (n >= 0 && n <= 1)
return (1);

result *= factorial(n - 1);
return (result);
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 3-factorial.c

========== 3-factorial.c ==========
factorial
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedanic -std=gnu89 3-factorial.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 4-pow_recursion.c
#include "main.h"

/**
* _pow_recursion - to return the value of x raised to
* the power of y.
* @x: the number to be raised.
* @y: the power raised.
* Return: The value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
int result = x;

if (y < 0)
return (-1);

else if (y == 0)
return (1);

result *= _pow_recursion(x, y-1);
return (result);
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 4-pow_recursion.c

========== 4-pow_recursion.c ==========
4-pow_recursion.c:20: ERROR: spaces preferred around that '-' (ctx:VxV)
total: 1 errors, 0 warnings, 22 lines checked
_pow_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 4-pow_recursion.c
#include "main.h"

/**
* _pow_recursion - to return the value of x raised to
* the power of y.
* @x: the number to be raised.
* @y: the power raised.
* Return: The value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
int result = x;

if (y < 0)
return (-1);

else if (y == 0)
return (1);

result *= _pow_recursion(x, y - 1);
return (result);
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 4-pow_recursion.c

========== 4-pow_recursion.c ==========
_pow_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedanic -std=gnu89 4-pow_recursion.c
gcc: error: unrecognized command line option ‘-pedanic’; did you mean ‘-pedantic’?
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-pow_recursion.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 5-sqrt_recursion.c
#include "main.h"

/**
* find_sqrt - Finds the natural square root of an inputted number.
* @num: The number to find the square root of.
* @root: The root to be tested.
* Return: If the number has a natural square root - square root.
* if the number does have a natural square root - -1.
*/
int find_sqrt(int num, int root)
{
if (root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to return the square root of.
* Return: If n has a natural square root - the natural square root of n.
*         If n does not have a natural square root - -1.
*/
int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, root));
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 5-sqrt_recursion.c

========== 5-sqrt_recursion.c ==========
5-sqrt_recursion.c:12: ERROR: trailing statements should be on next line
total: 1 errors, 0 warnings, 38 lines checked
find_sqrt
_sqrt_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 5-sqrt_recursion.c
#include "main.h"

/**
* find_sqrt - Finds the natural square root of an inputted number.
* @num: The number to find the square root of.
* @root: The root to be tested.
* Return: If the number has a natural square root - square root.
* if the number does have a natural square root - -1.
*/
int find_sqrt(int num, int root)
{
if
((root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to return the square root of.
* Return: If n has a natural square root - the natural square root of n.
*         If n does not have a natural square root - -1.
*/
int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, root));
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 5-sqrt_recursion.c

========== 5-sqrt_recursion.c ==========
find_sqrt
_sqrt_recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-sqrt_recursion.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 6-is_prime_number.c
#include "main.h"

/**
* is_divisible - Checks if a number is divisible.
* @num: The number to be checked.
* @div: The divisor.
* Return: if the number is divisible -0
* If the number is not divisible - 1.
*/
int is _divisible(int num, int div)
{
if (num % div == 0)
return (0);

if (div == num / 2)
return (1);

return (is_divisible(num, div + 1));
}

/**
* Is_prime_number - checks if a number is a prime.
* @n: The number to be checked
* Return: If the integer is not prime - 0.
* If the integer is prime -1.
*/
int is_prime_number(int n)
{
int div = 2;

if (n <= client_loop: send disconnect: Connection reset by peer

Cashgen@OB-PC MINGW64 ~
$ ssh 0d493bee537c@0d493bee537c.73f338fa.alx-cod.online
ssh: Could not resolve hostname 0d493bee537c.73f338fa.alx-cod.online: Name or service not known

Cashgen@OB-PC MINGW64 ~
$ ssh 0d493bee537c@0d493bee537c.73f338fa.alx-cod.online
0d493bee537c@0d493bee537c.73f338fa.alx-cod.online's password:
root@0d493bee537c:/# cd alx-low_level_programming
root@0d493bee537c:/alx-low_level_programming# cd 0x08-recursion.c
bash: cd: 0x08-recursion.c: No such file or directory
root@0d493bee537c:/alx-low_level_programming# cd 0x08-recursion
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# ls
0-puts_recursion.c       3-factorial.c       6-is_prime_number.c  README.md
1-print_rev_recursion.c  4-pow_recursion.c   main.h
2-strlen_recursion.c     5-sqrt_recursion.c  _putchar.c
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat > 6-is_prime_number.c
#include "main.h"

/**
* is_divisible - Checks if a number is divisible.
* @num: The number to be checked.
* @div: The divisor.
* Return: if the number is divisible -0
* If the number is not divisible - 1.
*/
int is _divisible(int num, int div)
{
if (num % div == 0)
return (0);

if (div == num / 2)
return (1);

return (is_divisible(num, div + 1));
}

/**
* Is_prime_number - checks if a number is a prime.
* @n: The number to be checked
* Return: If the integer is not prime - 0.
* If the integer is prime -1.
*/
int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
return (0);
if (n >= 2 && n<= 3)
return (1);

return (is_divisible(n, div));
}
^C
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# betty 6-is_prime_number.c

========== 6-is_prime_number.c ==========
6-is_prime_number.c:33: ERROR: spaces required around that '<=' (ctx:VxW)
total: 1 errors, 0 warnings, 37 lines checked
_divisible
6-is_prime_number.c:27: warning: no description found for function is_prime_number
is_prime_number
root@0d493bee537c:/alx-low_level_programming/0x08-recursion# cat >
