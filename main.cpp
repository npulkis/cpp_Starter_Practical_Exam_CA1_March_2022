#include <iostream> // <<<  Starter Code for C++ CA1 March 2022  >>>
#include <cstdlib>
#include <ctime>
#include<sstream>
using namespace std;

// student struct definition - given
struct student {
    string name;
    string studentNumber;
    int age;
};

// function prototypes
//?

// Do NOT modify any code that is given to you.
// Test each task as you complete it to ensure that it is correct.

void question1() {  // Topic: Accessing array using Pointer Notation
    cout << "Question 1 - arrays and pointers" << endl;

    double array[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    //TODO  1a. Declare a pointer named 'ptr' and assign it
    //      to point at the array 'array'


    //TODO  1b. Write a for(){} loop that will output all elements in
    //      the array using POINTER NOTATION (NOT Array notation)
    //      by de-referencing the pointer.


    //TODO  1c. Output the size in bytes of the pointer 'ptr'


    //TODO 1d. Write code to calculate and output the number of elements in the
    //         array 'array' (i.e. Output the number of elements
    //         in the array 'array' without hard-coding the size)


    //TODO 1e. Set the pointer 'ptr' to point at the LAST array element
    //     and output the last element using the pointer.


    //TODO 1f. Using a for(){} loop, iterate in reverse (right-to-left)
    //         through the elements, outputting each element using
    //         the pointer 'ptr' and pointer notation. (NOT array notation)


    //TODO g. Given a C-style string (i.e. array of char) that stores one word,
    //    declare a pointer pChar and set it to point at the first character
    //    in the string.
    //    Write a "while(){}" loop that will use the pointer and pointer notation
    //    to iterate through the characters of the string and maintain a count
    //    of the number of "lowercase s" characters in the word.
    //    Output the count of the characters.

    char word[] = "Mississippi";        // given


}

//////////////////////////  Question 2   ////////////////////////////

void question2() {  // dynamic memory allocation

    cout << "Question 2 - dynamic memory allocation" << endl;

    //TODO 2a(i).
    //      Dynamically allocate a block of memory to store an array of 100
    //      integer values. Declare a variable called "array" that will store
    //      the address of the array block.
    //      Using array notation, iterate over the array and assign each
    //      element with a random value in the range 1 to 100.
    //      (Code to generate random number is given below)

    int size = 100;                        // size of array - given



    // code to generate random number in a range
    srand((unsigned) time(0));      // use current time to seed rand() - given
    int randomNumber = (rand() % 100) + 1;    // IN RANGE 1 TO 100  - given


    //TODO  Q.2a(ii)
    //      Write a function average_array_notation() that accepts the array
    //      as a parameter, and iterates over the array to calculate and return
    //      the average of the EVEN values.  Output the returned average value.
    //      Use ARRAY Notation in your function.
    //      (Remember to use a function prototype if necessary)



    //TODO  Q.2a(iii)
    //      Write a function average_pointer_notation() that accepts the array
    //      as a parameter, and iterates over the array to calculate and return
    //      the average of the ODD values.  Output the returned average value.
    //      Use POINTER Notation and pointer arithmetic in your function.
    //      (Remember to use a function prototype if necessary)




}

// Q2.a(ii)     average_array_notation(...)


// Q2.a(iii)    average_pointer_notation(...)


//TODO Q3  (Recursion)
//      Write a recursive function called bounce() that will accept a starting integer value
//      and output a sequence of numbers, reducing by one on each iteration, down to zero,
//      followed by a sequence of increasing values as follows:
//      bounce(4)  - will print 4,3,2,1,0,1,2,3,4
//      bounce(3) – will print 3,2,1,0,1,2,3  etc.
//      Call your function with the integer argument 3.

/////////////////////// Question 3 ////////////////////////////////


void question3() {
    cout << "Question 3 - recursion" << endl;

}
/////////////////////// Question 4 /////////////////////////////////

// Q4(a)  initialize_student( ... )


// Q4(b)   display_student( ... )


// Q4(c)    incrementAge( ... )


//Q4(d)     fillArray( ... )


void question4() {
    cout << "Question 4 - struct student" << endl;



}



int main() {
    std::cout << "OOP Practical Examination - CA1 - March 2022" << std::endl;
    question1();
    question2();
    question3();
    question4();

    return 0;
}

