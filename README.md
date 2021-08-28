# C-Programming

- Find the greatest common divisor of two positive integers. The greatest common divisor of two positive 
integers M and N, GCD (M, N), is the largest positive integer that divides both M and N. Thus, for instance,
 
GCD (100, 5) == 5, GCD (100, 33) = 1, GCD (102, 30) = 6. 

This can be found by using the division algorithm, as follows:

102 = 30 * 3 + 12
30 = 12 * 2 + 6
12 = 6 * 2 + 0

Notice that:
GCD (102, 30) = GCD (30, 12)
 = GCD (12, 6)
 = 6

In each case, the remainder is used in the next step. The process terminates when a remainder of 0 is 
obtained. Write a modular C code for this purpose