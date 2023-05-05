# Learn-CAPL

- Communication Access Programming Language(CAPL) is a proframming language used in CANoe software.
- CAPL allows users to write scripts to simulate the behaviour of ECUs, networks nodes in a virtual environment.
- With CAPL users can create custom test scenarios, perform diagnostics, generate and analyze messages, and create interactive simulations. 
- CAPL scripts can be used to automate testing, simulate complex scenarios and perform analysis of network behavior. 
- Based on C programming language, CAPL, or Communication Access Programming Language, is the programming language used exclusively within th PC-based tool environments of CANalyzer and CANoe.
- In simples term CAPL used in CANalyzer helps monitor and control CAN traffic in a single module .
- CAPL used in CANOe helps to monitor CAN traffic of real module and synthesis of other modules present in the network.
- CAPL is a C like lnaguage. It is structured based on C.
- It has addition features related to CAN.
- CANalyzer = Single node - control.
- CANoe = Multiple Node - Control.
- Each CAPL program is a task. All task are independent. 
- Each task has its own On start and On stop event procedures. 
- Each task can have n number of timers.
- Available hardware resource are sharable among the task. Any task can access avaiable resource. 
- key board event can be used to raise event.
- CAPLS can have GUI using panels using EV variable or signal(CANoe).
- Can´t debug or step run and watch is not possible.
- Write window acts like output screen in C programs.
- Communication protocol functions for RS232 TCP/IP are readily available. Hence we can interface external devices using std network protocol. 
- CAPL is a event driven software. Triggers: Timer, Key press or Message received. 

### CAPL Fundamentals
1. You should be familiar with the CAN protocol
2. You should be confortable using either CANalyzer or CANoe and CANdb, the CAN database editor
3. You should also be familiar with the C programming language. It is possible to learn to program in CAPL without knowing C, but the basics program structure is the same.
4. CAPL utilizes two types of files. Source code files (.CAN) and CAPL programs.
5. When you compile a .CAN file in the CAPL Browser, CANalyzer, or CANoe a binary file can only be interpreted and executed by a CANalyzer or CANoe simulation. 
### CAPL Syntax 
1. Comments:
```
//this is a comment 
```
1. Variables
```
datatype variableName = initialValue;
int myInt = 42;
```
1. Functions: CAPL has many built-in functions that you can use in your scripts, such asóutput´c, ínput´and ´write´. You can call a functions by writing its name followed by parentheses, with any required arguments inside the parentheses.
```
output(myMessage)
write("Hello, World")
```
1. Control Structures: CAPL supports several control structures, such as if-else, while, for and switch. 
```
if(myInt == 42){
    write("The answer to the ultimate question of life");
}   else {
    write("Sorry, myInt is not 42");
}
```
1. Events: In CAPL, you can define functions that are triggered by specific events, such as when the simulation starts or stops, or when a message is received on the bus. 
```
on message 0x123 {
    //do something
}
```
### CAPL program organization 
- Overaal, the organization of a CAPL program follows a similar structure to other programming languages, with header files, global variables, functions and event handlers. Understanding this basic structure can help you create well organized and effective CAPL scripts. 
  
1. Header Files: At the top of your CAPL script, you may include header files that define macros, data types, and functions that you want to use in your script. 
```
#include "CAN.h" //Include the CAN header file
#include "MyLyb.h" //Include a custom library header file
1. Global Variable Declarations: You can declare global variables that will be accessible throughout your CAPL script. 
```
int myInt = 5;//Declare a global integer variable
message myMessage; // Declare a global message variable
```
1. Functions: You can define functions that perform specific tasks in your CAPL script. 
```
void sendMyMessage() {
    myMessage.id =0x123;
    myMessage.dlc=8;
    output(myMessage);
}
```
1. Event Procedures: You can define event handler functions that will be called when specific events occur in the CANoe simulation environment.
```
on start {
    write("Simulation started.");
}

on timer 100 {
    sendMyMessage();
}
```
4. Main funtions: Finally, you may define a main functions that is called when the simulation starts. This function typically includes initialization code and starts any necessary timers or 
event handlers. 
```
```
void main() {
    write("Starting simulation...");
    setTimer(1, 100); // start a timer to send messages every 100ms
}
```

### Standard C syntax supported

- Instructions blocks: {..}
- Type casting: (type) Variable
- if {..} and if {..} else {..}
- switch, case, default
- For.., while.., do.. while loops
- continue and break
return 
- //Comments or /*Long comments*/

### C Keywords supported
1. Supported
- break
- case
- char
- continue
- do
- double
- else
- float
- for 
- if
- int 
- long
- return 
- switch
- while
2. Not supported
- auto
- const
- enum
- extern
- goto
- register
- short
- signed
- sizeof
- static 
- struct
- typedef 
- union
- unsigned
- volatile

### CAPL data types

- Big differences from C

1. char: Character: 8bit: unsigned
2. byte: byte: 8 bit: unsigned
3. int: integer: 16 bit: signed
4. word: word: 16 bit: unsigned
5. long: long integer: 32 bit: signed
6. dword: double word: 32 bit: unsigned 
7. float: single precision floating point: 64 bit: signed
8. double: single precision floating point: 64 bit: signed
9. message: a communication message: -: -
10. timer/msTimer: a timer with second resolution/ a timer with millisecond resolution: -: -

### Standard C operators supported

1. +,-,*, /, %: add, subtract, multiply, divide, modulo
2. ==, !0: Equal to, not equal to
3. >, >=, <, <=: Greater than, greater than or equal to, less than, less than or equal to
4. ++, --: Increment, decrement(Can be used as a prefix or postfix)
5. =: Assignment 
6. +=, -=, *=, /=, %=: Compound assignment(Addition, subtraction, Multiplication, Division, Modulo)

### Standard C Operators supported

1. Logical Operators
- &&, ||: Logical AND, logical OR 
- ?: Conditional operator
- !: Logical negation 
  
2. Bitwise Operators
- ~: Bitwise negation
- &,^, |: Bitwise AND, bitwise XOR, bitwise OR
- <<, >>: Left shift, right shift 
- <<=, >>=: Compound assignment(Left shift, Right shift)
- &=, ^=, |=: Compound assifnment(Bitwise AND, bitwise XOR, bitwise OR)

### Important differences from C

- Function overloading is allowed
- The "this" keyword 
- Local variables are static(Assigned only once and retains its value)
- Dynamic memory and the elCount() function
- Variables are assigned a default value implicitly
- Run-time error handling 

### CAPL equivalents to C functions

C Function - CAPL Function - Notes
sizeof - elCount - sizeof has no exact equivalent 
sprintf - snprintf - Similar string formatting parameters used
printf - write - Similar string formatting parameters used

### Declaration

char letter = "a";
message wakeup xxx;
int j,k = 2, 0 ;

```
includes{

}

variables {
    int a =10;
    int b = 25;
    message ACCInfo _mAccInfo;
}

on start{
    write("Welcome to CAPL programming");
    settimer(one_sec,1);
}

on time one_sec {
    write("Value of letter_a = %c", letter_a);
    wirte("Number of days in a year = %d", number_days_in_year);
    _maAccInfo.byte(0)=0x11;
    output(_mAccInfo);
}
```

### Initialization

- In contrast to standard C, the compiler initializes all numeric variables to 0 and all string-type variables to null. 
- All message-type variables in CAPL are usually initialized to the transmit request state with its data field defaulted to 0. 
- The state represents the direction of transmission before the message is transmitted. 
- Timer-type variables, on the other hand, are not automatically initializaed and do not need to be initialized. 

### Local Variables 

- One important difference in CAPL when compared to C is that local variables are always declared statically. 
- This means that they are initialized only once. 
- The first time the event procedure or user-defined functions is executed. 
- When variables enter the procedure, they assume the value they had at the end of the previous execution of the procedure. 

```
void myFunc(){
    byte value = 10; //Static called once
    write("Valur = %d", value);
    ...
    value =35;
}