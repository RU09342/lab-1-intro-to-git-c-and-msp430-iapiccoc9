# MSP430 Math Library
The MSP430 math library is available for every MSP430 processor, and does not vary for each. The library is designed to allow designers to implement basic math operations easily into their code.

# Dependencies
The code is only dependant on the MSP430.h file, and the device specific header file that is located in the code composer library. 

# Usage
After placing all of the files in their correc workspaces, by calling the function:

'Math(int1, int2, operator);'

The function allows you to get any of four solutions from a set of integers based on addition, subtraction, multiplication, or division.

## Valid Inputs

### int1, int2

16-bit signed integers.

### Operator
Takes in the following characters: +, -, *, /, which symbvolize addition, subtraction, multiplication, and division respectively.

# Function
## Addition
int1 and int2 will be added together and the sum will be returned.

### Example of addition format

'Math(3,5,'+');'

## Subtraction
int2 will be subtracted from int1, and the difference will be returned.

### Example of subtraction format

'Math(5,2,'-');' 

## Multiplication

int1 and int2 will be multiplied and the product will be returned.


### Example of multiplication format

'Math(3,6,'*');'

## Division
int1 will be divided by int2 and the quotient is returned.

### Example of division format

'Math(6,2,'/');'


 

