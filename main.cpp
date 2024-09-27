#include <iostream>
#include <string>

/*
   Ternary Operators are the '?' ':' you've seen in the code. As syntactic sugar for if statements, it allows you
   to not use if and else and you can use the operators when trying to assing a value to a variable based on a specific condition
*/

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
    // Standard if statement to check the level and set a speed based on the value
    if (s_Level > 5)
        s_Speed = 10;
    else
        s_Speed = 5;

    // Since we are just doing a conditional assignment above, instead we write the code like this using Ternary Operators:
    s_Speed = s_Level > 5 ? 10 : 5; // ? = the value to assign if the condition is true, : = the value to assign if the conditon is false

    std::cin.get();
}
