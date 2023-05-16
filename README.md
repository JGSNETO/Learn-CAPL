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
- The execution in CAPL is synchronous.

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
```

### Static memory: C x CAPL

- In C programming language, static memory refers to a type of memory allocation where the memory is allocated at compile-time and persists throughout the entire execution of the program. The static memory is allocates in a region of memory separate from the stack and heap, and its contents are initialized to zero by default. 
- Static memory in C is used to store global variables, which can be accessed by any function within the program. Static variables can also be used inside functions, but their values persists between function calls, unlike automatic variables which are allocated on the stack and are destroyed when the function returns. 
- In CAPL, which is a scripting language used for developing test applications in the automotive industry, static memory has a slightly different meaning. In CAPL, static variables are used to store values that should persist between functions calls, just like in C. However, in CAPL, all variables are static by default, which means that they persist between function calls and their values are preserved across function boundaries. This is a different from C, where automatic variables are allocated on the stack and are destroyed when the function returns. 
- The main difference between static memory in C and CAPL is that in C, static memory is used to store global variables and can be used inside functions to preserve their value between calls, whereas in CAPL, all variable are static by default and persist between function calls. 

### Type casting

- CAPL supports type casting. There are times when you want to conver the value of a variables of one data type to another data type for purposes of evaluating an expression. There are two ways to do this in CAPL, both of which are the same as in C. 

```
int sum;

sum = (int) 1.6 + (int) 1.7;
``` 

### Arrays
- Another type of variables used in CAPL is an array, a collection of data items that all have the same name.
- Individual data items within an array must all be of the same type.
- The array name is always followed by square brackets that contain either the array size for a declaration statement or an index value to specify the data location within the array.
- Each of the individual elements in an array ia ccessed by an integer index. When numbering the elements of an array, the first element is always the number 0.
- CAPL supports the following type of arrays:
1. Integer arrays
2. Character arrays
3. One-dimensional arrays
4. Multi-dimensional arrays

```
int values[5]={0xA1, 0X23, 0X3F, 0X98, 0X45};
char ECU_name[10] = "BCM";
char bus_type[3] = {'C','A','N'};
```
### Main CAPL functions
1. on start: This functions is called when the simulation or test module starts
```
on start{
    write("Simulation started");
}
2. on stop: This functions is called when the simulation or test module stops
```
on stop{
    write("Simulation Stopped");
}
```
3. on timer: This functions is called periodically at specified time interval
```
on timer (100){
    output(0x123, "Hello, World");
}
```
4. on key: This function is called when a specific key is pressed on the keyboard
```
on key 'a'{
    write("Key 'a' was pressed);
}
```
5. on sysvar: This functions is called when a system variable is changed
on sysvar TIMER_ENABLED{
    if(TIMER_ENABLED ==1){
        write("Timer is enabled");
    }else{
        write("Timer is disabled");
    }
}
```
6. output: This functions is used to send a message on the CAN bus
```
output(0x123, "Hello, World");
```
7. getSignal: This functions is used to read the value of a signal in a message
```
int value = getSignal(CAN_MESSAGE::SIGNAL_NAME);
```
8. setSignal: This function is used to set the value of a signal in a message
```
setSignal(CAN_MESSAGE::SIGNAL_NAME, 0x123);
```
9.  getEnvVar: This function is used to read the value of an environment variable
```
int value = getEnvVar("ENV_VAR_NAME");
```
11. setEnvVar: This functions is used to set the value of an environment variable
```
setEnvVar("ENV_VAR_NAME", 123);
```
12. getLastError: This function is used to get the description of the last error that occurred in the CAPL script
```
int error = getLastError();
write("Error: " + error + "\n");
```
13. write: This function is used to write messages to the CAPL output window
```
write("This is a message\n");
```

### Branching Statements 

- Branching statements in computer programming allow the program to alter its flow of execution based on certain conditions or criteria. The most common brnching statements are "if", "else", "else if", "switch" and "case". 

``` 
float MPH = 70.0;
float speed;
float cruising_speed;

if(speed >= MPH) cruising_speed = speed;
```

```
includes{

}

variables{
    int set_speed;
    int vehiclespeed;
}

//Can message
on message ICM_Info{
    switch(this.CruiseSwitchrequest){
        case 0x1:
            setSignal(ACCInfo::ACCState, 2); // Set system state to standby;
            break;
        case 0x2: 
            setSignal(ACCInfo::ACCState,3); /* Signal name ACCState in a message defined in a file called ACCInfo*/
            if(getSignal(ACCInfo::ACCState)== 0x3){
                set_speed = vehiclespeed;
                setSignal(ACCInfo::TargetSpeed, set_speed); //Target is a signal
            }
            break;
    }
}

on key 's' {
    write("Set speed is %d", set_speed);
}
on message BCMInfo{
    vehiclespeed = this.VehicleSpeed;

}

```

### Control flow 

1. If statement: Allows you to conditionally execute code based on a specified condition
```
if(x > 10){
write("X is greater than 10\n");
}
```
2. If else statement: Allows you to execute one block of code if a condition is true, and another block of code if the condition is false.
```
if(x>10){
    write("X is greater than 10");
}else {
    write("X is less than or equal to 10\n");
}
```
3. Switch statement: Allows you to execute dfferent blocks of code depending on the value of an expression.
```
switch (x) {
  case 1:
    write("x is 1\n");
    break;
  case 2:
    write("x is 2\n");
    break;
  default:
    write("x is neither 1 nor 2\n");
    break;
}
```
4. For loop: Allows you to execute a block of code multiple times, based on a specified condition.
```
for(int i = 0; i<10; i++){
    write("i = " + i + "\n");
}
```
5. While loop: Allows you to execute a block of code repeatedly, as long as a specified condition is true.
```
int i = 0;
while (i < 10) {
  write("i = " + i + "\n");
  i++;
}
```
6. do while loop: Allows you to execute a block of code at least once, and then repeatedly execute it as long as a specified condition is true. 
```
int i = 0;
do {
  write("i = " + i + "\n");
  i++;
} while (i < 10);
```
7. break statement: Allows you to exit a loop prematurely, based on a specified condition.
```
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    break;
  }
  write("i = " + i + "\n");
}
```
8. continue statement: Allows you to skip over the current iteration of a loop, based on a specified condition.
```
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    continue;
  }
  write("i = " + i + "\n");
}
```
### This Keyword

- In the CAPL programming language, "this" is a keyword that refers to the current object instance. An object instance is an occurrence of a class in memory, and "this" allows you to reference the specific instance that the current method or functions is operating on. 
- When you define a method or functions in CAPL, you can use "this" keyword as a reference to the current object instance. For example, consider the following class definition:

```
class MyClass{
    int x;
    void setX(int newX){
        this.x = newX;
    }
};
```
- In this example, "this" is used to refer to the current instance of the "MyClass", and the "setX" method sets the value of the "x" member variable for that instance.
- Using "this" is particularly useful in object-oriented programming, as it allows you to distinguish between member variables or methods that belong to the current object instance and those that belong to the class as a whole. By using "this", you can ensure that your code operates on the correct instance of an object, even if there are multiple instances of the same class in memory.

### user defined functions x Function Overloading 

- In CAPL, a user-defined function is similar to a function defined in the C programming language. A function call is possible in any CAPL event procedure. These functions can contain any legal CAPL code, and are globally accessible. Putting frequently used code in a function makes programs more efficient and organized. 

```
includes{
    #include "UserDefineFunctions.cin"; // File user developed 
}
```

- Function overloading is allowed.
- Functons overloading is a feature in programing languages that allows a function to have the same name but different parameters. This means that multiple functions with the same name can exist within the same program, as long as they have a different number or type of parameters.
- When a functions is called, the compiler or interpreter determines which version of the function to use based on the arguments passed to it. If there is a function with the exact number and types, that functions is used. If not, the compiler or interpreter will try to find a function that can accept the arguments by performing implicit conversions, such as converting an integer to a floating point number.
- Function overloading can be useful for crating functions that perform similar task but operate on different types of data or have different parameter requiremetns.
```
void printme(double num){
    write("Floating point %f", num);
}

void printme( int num){
    write("Floating %d", num);
}
```

### Logging Function 

1. setLogFileName: Sets the name of the log file
2. setPostTrigger: Sets the posttrigger time for logging 
3. setPreTrigger: Sets the pretrigger time for logging 
4. startLogging: Triggers a logging block to stat logging 
5. stopLogging: Triggers a logging block to stop logging
6. trigger: Starts all logging blocks to a log
7. writeToLog: Writes a formatted string to the log file with time stamp
8. writeToLogEx: Writes a formatted string to the log file without time stamp

```
//Start automatically
on sysvar startlogging{
    char path[200];
    if(@this){
        sysGetVariableString(sysvar::Logfilepath, path, elCount(path));
        setLogFileName(path);
        startLogging();
    }
}

//Stops execution
on sysvar stoplogging{
    if(@this){
        stopLogging();
    }
}

on message BCMInfo{
    if(this.VehicleSpeed >240){
        writeToLog("Danger!!");
    }
}
```

### String Handling Function

1. atol: Converts a string to a long integer
2. itoa: Converts a number to a string
3. snprintf: Creates a formatted string
4. strlen: Gets the length of a string
5. strncat: Concatenates two strings
6. strncmp: Compares two strings
7. strncpy: Copies a string

### Measurement Control Functions

- In CAPL, measurement control functions are used to interact with and control the measurement and logging capabilities of the CANoe or CANalyzer tool. These functions allow you to start, stop and control the recording of measurement data during a simulation or the session. The measurement control functions provide flexibility and control over the measurement and logging capabilities of the CANoe or CANalyzer tool, allowing you to precisely manage when and how measurement data is recorded during your simulation or test scenarios.  
  
- startMeasurement(): This function starts the measurement process. It begins recording measurement data according to the configuration set in the measurement setup.

- stopMeasurement(): This function stops the measurement process. It ceases the recording of measurement data.

- startMeasurementAll(): This function starts all configured measurements. It is used when you have multiple measurement configurations defined and you want to start all of them at once.

- stopMeasurementAll(): This function stops all running measurements. It is used to stop all active measurements in a scenario.

- restartMeasurement(): This function stops the measurement and then starts it again. It can be used to reset the measurement process and start recording from the beginning.

- setMeasurementMode(): This function sets the measurement mode to a specified value. The measurement mode determines how measurement data is recorded and processed. Common modes include continuous measurement, event-triggered measurement, and time-triggered measurement.

- setMeasurementTrigger(): This function sets a trigger condition for the measurement. The measurement will start or stop based on the specified trigger condition.

- enableMeasurement() and disableMeasurement(): These functions enable or disable a specific measurement defined in the measurement setup. It allows you to selectively control which measurements are active during a simulation or test.

getMeasurementState(): This function returns the current state of the measurement. It can be used to determine if the measurement is running, stopped, or in a different state.
1. ILControlStart: Connect Node to the bus
2. ILControlStop: Remove Node from the bus
3. canOffline: Disconnects nodes from bus (CANoe´s simulation setup window only)
4. canOnline: Reconnects node to the bus(CANoe´s simulation setup window only)
5. getBusContext: Returns current bus context(CANoe´s simulation setup window only)
6. getBusNameContext: Returns a specific bus context(CANoes´s simulation setup window only)
7. getStartdelay: Gets delay time value of current node(CANoe´s Simulation setup window only)
8. halt: halts the simulation(Only possible in the simulated mode of canoe)
9. Inspect: Updates the variables in the inspect pane of the write window(CANoe only)
10. setBuscontext: Sets new context of current bus (CANoe simulation setup window only)
11. setStartdelay: Sets delay time value of present node (CANoe simulation setup window only)
12. stop: Stops the measurement

### WriteEx()

- Writes the text into the last line of the specified window or into a tab of the write window without previously creating a new line.

- Window or tab of the write window 
- -3: trace window
- -2: trace window for logging output
- -1: reserved 
- 0: output to the system tab of the write window 
- 1: output to the CAPL tab to the write window
- 4: output to the test tab of the write window
  
- Type of message for output in the write window
- 0: success
- 1: information
- 2: warning
- 3: error