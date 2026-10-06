# Program 2: Arithmetic Operations and Number Comparison

## Question

Write a C program that accepts two integers from the user and displays:

1. Sum of the two numbers
2. Difference between the two numbers
3. Product of the two numbers
4. Quotient of the two numbers
5. Whether the first number is greater than the second
6. Whether both numbers are positive
7. Which number is larger

## Explanation

The program accepts two integer values using `scanf()` and performs different operations on them.

* `+` is used to find the sum.
* `-` is used to find the difference.
* `*` is used to find the product.
* `/` is used to find the quotient.
* `>` is used to compare the two numbers.
* `&&` is used to check whether both numbers are positive.

The program uses `if-else` statements to make decisions based on the values entered by the user.

## Sample Output

Enter values for a & b = 20 5
Sum = 25
Difference = 15
Product = 100
Quotient = 4

First number is greater than the second
a is larger
Both numbers are positive

## Lessons Learned

* Learned how to perform arithmetic operations on two integer variables.
* Understood the difference between `/` and `%`. `/` gives the quotient, while `%` gives the remainder.
* Learned that the number of `%d` format specifiers in `printf()` should match the number of integer values being printed.
* Understood how the relational operator `>` can be used to compare two values.
* Learned the difference between the bitwise AND operator `&` and the logical AND operator `&&`.
* Used `if-else` to determine which number is larger and whether both numbers are positive.
* Understood that integer division gives an integer result. For example, `7 / 2` gives `3` in C.
* Recognized that division by zero must be avoided when performing division.

## Key Takeaway

This program helped me combine **input/output, arithmetic operators, relational operators, logical operators, and if-else statements** in a single program instead of practicing each concept separately.
