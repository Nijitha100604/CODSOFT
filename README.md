Codsoft C++ Internship tasks:

Task 1 - Number Guessing Game
     
      Problem Statement: 
            Create a program that generates a random number and asks the user to guess it.
            Provide a feedback on whether the guess is too high or too low until the user 
            guesses the correct number.
     
      Program explanation:
            * Header files - #include<iostream>, #include<ctime>, #include<cstdlib>
            * #include<cstdlib> contains the function 'srand' which generates a random 
              number at each time of execution
            * #include<iostream> contains the functions 'cout', 'cin' to get the user input 
              and provides output at run time.
            * #include<ctime>  contains the  function 'time' which is used to seed the 
              random number generator
            * The program gives the random number and allows the user to guess the number 
            * If the number is greater than the random number the program gives too high
              feedback or if the number is less than the random number the program gives 
              too low feedback.
            * The program will run until the user identifies the correct number.

Task 2 - Simple Calculator
             
      Problem Statement:
            Develop a calculator program that performs basic arithmetic operations such as 
            addition, subtraction, multiplication, and division. Allow the user to input two
            numbers and choose an operation to perform.

      Program explanation:
            * Header file - #include<iostream>
            * #include<iostream> contains 'cout', 'cin' functions, which is used to allow the 
              user to enter the input and 'cout' provides the output.
            * The program allows the user to enter the operator like +, -, *, / which is stored
              in a char variable 'op'.
            * By using the switch and case flow control statemets the output is generated.

Task 3 - To-Do List

       Problem Statement:
             Build a simple console-based to-do list manager that allows users to add, view, and
             delete tasks.

      Program explanation:
              * Header file - #include<iostream>, #include<vector>, #include<string>
              * #include<iostream> contains 'cout', 'cin' functions, which is used to allow the 
              user to enter the input and 'cout' provides the output.
              * #include<vector> is used to store the list of tasks.
              * #include<string> is used to handle the tasks as strigs.
              * The program ask the user to select the number from the menu inorder to view, add 
                or remove the tasks.
              * The code will run until the user enters the choice for exit.
        
