# stack_array_c
This is a C program that implements a stack using an array. The stack operations are:

1. Push: adds an element to the top of the stack
2. Pop: removes the top element from the stack
3. Peep: displays the top element without removing it
4. Display: displays all elements in the stack
5. Exit: exits the program

The program uses a global array stack of size max (defined as 100) to store the stack elements. The top variable keeps track of the current top index of the stack.

The program presents a menu-driven interface for the user to interact with the stack. Each operation is implemented in a separate function:

- pushArray: adds an element to the top of the stack
- popArray: removes the top element from the stack
- peepArray: displays the top element without removing it
- displayArray: displays all elements in the stack

Note that this program has some issues, such as:

- No error handling for invalid input
- No bounds checking for array indices
- No memory management (the stack is fixed-size)

This program can be enhanced by adding more features, such as:

- Dynamic memory allocation for the stack
- Error handling for overflow and underflow conditions
- Additional stack operations (e.g., search, insert, delete)

Overall, this program demonstrates basic stack operations using an array in C.
