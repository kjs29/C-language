# C-language

I thought I might struggle with learning C language as a complete beginner.
Thankfully Youtube Algorithm suggested me this video.
https://youtu.be/V_oM9ePJyP8
This video is entitled "Things we must know before learning C language".

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
In order to 'execute' our source code in C, the computer 'Compile' the sourcecode to assembly language, and then it executes.
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
