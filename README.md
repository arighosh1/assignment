**Task Description**

This task asks you to write a program that uses the Clang ( https://clang.llvm.org/ ) frontend of the Flex/Bison tools ( http://www.jonathanbeard.io/tutorials/FlexBisonC++ ) to transform an arbitrary piece of C++ code to a new one with the relational and logical operators at IF statements reversed.

**Example of C++ Logical OR Operator**

**Explanation**

In this program, we declare and initialize two int variables a and b with the values 4 and 8 respectively. We then print a logical expression
((a == 0) || (a > b))
Here, a == 0 evaluates to false as the value of a is 4. a > b is also false since the value of a is less than that of b. We then use the OR operator || to combine these two expressions.
From the truth table of || operator, we know that false || false (i.e., 0 || 0) results in an evaluation of false (0). This is the result we get in the output.

**Example of C++ OR Operator**

**Explanation**

In this program, we declare and initialize two int variables a and b with the values 4 and 8 respectively. We then print a logical expression

((a == 0) && (a > b))

Here, a == 0 evaluates to false as the value of a is 4. a > b is also false since the value of a is less than that of b. We then use the AND operator && to combine these two expressions.
From the truth table of && operator, we know that false && false (i.e., 0 && 0) results in an evaluation of false (0). This is the result we get in the output.


