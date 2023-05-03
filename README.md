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
