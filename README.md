# C-language


# Valuable resources that help me to understand C language

# https://youtu.be/V_oM9ePJyP8 entitled "Things we must know before learning C language" in Korean.
# https://youtu.be/KJgsSFOSQv0 C programming Tutorial for Beginners
# https://www.freecodecamp.org/learn freecodecamp.org
# https://modoocode.com/9 modoocode.com (one engineer's blog in Korean)
# https://www.guru99.com/c-programming-tutorial.html guru99.com

In the video he explains why they use base 2 numerical system(binary numerical system). = simply because they use electricity. 
Either 'electricty ON' or 'electricty OFF'.
1011(2) = (2^3)*1 + (2^2)*0 + (2^1)*1 + (2^0)*1 = 11
It costs 4 Bits to write 1011. Because there would be '4' imaginary cords to write 1011(2). -> each digit costs one cord.
So to write 10010110(2), we need 8 Bits of memory to write this.
8 Bits = 1 byte. This is equivalent to a memory room for one letter in English. 


We use hexidecimal numerical system , shortened to 'hex'.
How we turn binary to hex.
10110011(2) : the first 4 digit(1011) would be 11, and the next  4 digit(0011) would be 3 so in decimal numerical system it is 14 AND hexidecimal numerical system it'd be B3.
Since 10 = a, 11=b, 12=c, 13=d, 14=e, 15=f. Because it would look so confusing to write 113(16). We don't know whether it is '11 and 3' or '1,1,3' or '1 and 13'.
10110011(2) = b3(16)

So in hex, one digit takes 4 bits. = 0.5byte

Functions are important in C language. We start by functions, and finish by functions.

C language is a Complier language. Complier is a translator. 
In order to 'execute' our source code in C, the computer 'Compile' the sourcecode to assembly language first, and then it executes.
Every time we change our programs, we must change our source codes to execute.

However Java is an interpreter language. It can  write on different operating system(JVM).

Let's look at the following example.
-------------------------------------------

#include <stdio.h>

void main(int argc, char* argv[])
{
    printf("helloWorld\n");
}

--------------------------------------------

#include <stdio.h>

void main(void)
{
    printf("helloWorld\n");
}

--------------------------------------------
#include : preprocessor (전처리기)

Before compiling = pre -
Include 'something'.
the first void is called 반환자료형
main is a name of function
the second void is called 매개변수

# <stdio.h>
It means Standard Input Output
if it ends with ~.h it means it's declaration.
if it ends with ~.c it means it's definition.

# main() and printf()
main()
main() is a caller
printf() is a callee

# Compiler and Linker
Compiler translates sourcecode into object file. (ex. Helloworld.obj)
Object file is like tools (부품)
And Linker translates object file into execution file. ( ex.Helloworld.exe)
execution is a binary file.
Compiling + Linking = Building

# void
void means 'There is nothing'
main () //we don't know whether this is omitted or there is something
main (void) // this shows that there is nothing here.

# return 0;
return 0; there isn't any particular reason.


In our daily life the function is defined like this,
f(x) = y
f is the name of the function = 'main'
x is the second void
y is the first void

What comes inside of the curly braces {} is called 'scope'.

\n is enter key.
printf() is also a function.
main() is a function.

What comes inside of "" is called 문자열상수

*format specifiers
%c	a single character 
%s	a string
%hi	short (signed)
%hu	short (unsigned)
%Lf	long double
%n	prints nothing
%d	a decimal integer (assumes base 10)
%i	a decimal integer (detects the base automatically)
%o	an octal (base 8) integer
%x	a hexadecimal (base 16) integer
%p	an address (or pointer)
%f	a floating point number for floats
%u	int unsigned decimal
%e	a floating point number in scientific notation
%E	a floating point number in scientific notation
%%	the % symbol
