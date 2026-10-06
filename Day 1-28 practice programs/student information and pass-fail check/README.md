## Student Information and Pass/Fail Check

### Question

Write a C program to accept a student's age, percentage, and first initial. Define a constant `PASS_MARK` with a value of 40. Display the entered information and check whether the student's percentage is greater than or equal to the passing mark. If it is, display **"Pass"**; otherwise, display **"Fail"**.

### Concepts Practiced

* Constants using `const`
* Variables
* Primary data types: `int`, `float`, and `char`
* `printf()` — formatted output
* `scanf()` — formatted input
* Relational operator (`>=`)
* `if-else` control statement
* Character input using `%c`
* Understanding whitespace in `scanf()`

### Why is there a space before `%c`?
scanf(" %c", &initial);

The space before `%c` tells `scanf()` to skip whitespace characters such as spaces, tabs, and the newline (`\n`) left in the input buffer after pressing Enter.

For example, after:
scanf("%f", &percentage);

when the user enters:

text: 85.5

and presses Enter, the newline character may remain in the input buffer.

If we use:

scanf("%c", &initial);

`%c` can read that leftover newline instead of waiting for the user's initial.

Therefore:
scanf(" %c", &initial);

skips the whitespace and then reads the actual character.

**Important:** This does not mean that `%c` always requires a space. The space is used when we want `scanf()` to skip leading whitespace before reading the character.

### What I Learned

I learned that `%c` behaves differently from numeric format specifiers such as `%d` and `%f`. `%c` can read whitespace characters, so `" %c"` can be used to skip leading whitespace before reading a character.
