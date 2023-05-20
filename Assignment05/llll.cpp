Last login: Thu Mar 23 19:11:47 on ttys000
        (base) dillonfleharty@dillons-mbp ~ % ssh wrq9@zeus.cs.txstate.edu
        _____________________________________________________
/                                                     \
           |    ______________________________________________     |
|   |                                              |    |
|   | Computer Science Department,                 |    |
|   |     Texas State University-San Marcos        |    |
|   |                                              |    |
|   | Use of Computer and network facilities       |    |
|   | requires prior authorization. Unauthorized   |    |
|   | access is prohibited. Usage may be subject   |    |
|   | to security testing and monitoring. Abuse is |    |
|   | subject to criminal prosecution. Use of      |    |
|   | these facilities implies agreement to comply |    |
|   | with these policies of Texas State           |    |
|   | University and Computer Science Department.  |    |
|   |                                              |    |
|   |______________________________________________|    |
|                                                       |
\______________________________________________________/
\________________________________________/
________________________________________________
        _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  -- `-_
_-'.-.-. .--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
_-'.-.-.-. .--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
_-'.-.-.-.-. .----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
_-'.-.-.-.-.-. .--.-. .-------------------------------. .-.---. .---.-.-.-.`-_
:------------------------------------------------------------------------------:
`---._.------------------------------------------------------------------._.---'

wrq9@zeus.cs.txstate.edu's password:
Last login: Thu Mar 23 19:17:34 2023 from 136.62.178.238

[wrq9@zeus ~]$ ls
Assign01StarterFiles  CS3339.git  DataStructures  public_html
        cs3339                CS3358.git  practice
[wrq9@zeus ~]$ cd DataStructures/
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ make
g++ -Wall -ansi -pedantic -c llcpImp.cpp
        llcpImp.cpp:10:5: warning: identifier ‘nullptr’ is a keyword in C++11 [-Wc++0x-compat]
Node* previous = nullptr;
^
llcpImp.cpp: In function ‘bool DelOddCopEven(Node*&)’:
llcpImp.cpp:10:22: error: ‘nullptr’ was not declared in this scope
        Node* previous = nullptr;
^
make: *** [llcpImp.o] Error 1
[wrq9@zeus DataStructures]$ vm llcpImp.cpp
-bash: vm: command not found
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ rm llcpImp.cpp
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ logout
Connection to zeus.cs.txstate.edu closed.
(base) dillonfleharty@dillons-mbp ~ % ls
        Applications
Computational Lab 1.ipynb
Computational Lab 3.ipynb
Computational Lab 5.ipynb
Computational Project II.ipynb
        Creative Cloud Files
Creative Cloud Files dillonjfleharty@gmail.com d512ff63fce002fb5d66728b99c6fa6c14760523d3b6afac8435c07f0d751be5
Desktop
        Dillon Fleharty Computational Lab 4.ipynb
Documents
        Downloads
Fleharty Computational 5.ipynb
Library
        Movies
Music
        Pictures
Public
        PycharmProjects
Untitled.ipynb
        Untitled1.ipynb
        Untitled2.ipynb
        Untitled3.ipynb
        Untitled4.ipynb
        Untitled5.ipynb
        Untitled6.ipynb
        Untitled7.ipynb
        Untitled8.ipynb
        Untitled9.ipynb
class tutorial .ipynb
        computational lab 2 Fleharty.ipynb
        dillonfleharty.github.io
opt
        (base) dillonfleharty@dillons-mbp ~ % cd Desktop
        (base) dillonfleharty@dillons-mbp Desktop % ls
202112_Verification of Non-Filing_FLEH_104218974829.pdf
        Computer Architecture
        Computer Ethics
        Data Structures
        Dillon Fleharty Resume.pdf
        FAFSA
Fleharty Computational 5 (1).html
        Screen Shot 2022-06-14 at 11.15.02 AM.png
        Screen Shot 2023-02-26 at 8.13.09 PM.png
        Screen Shot 2023-03-21 at 7.17.02 PM.png
        Screen Shot 2023-03-21 at 7.30.14 PM.png
        Screen Shot 2023-03-21 at 7.32.17 PM.png
        Screen Shot 2023-03-21 at 7.34.27 PM.png
        Screen Shot 2023-03-21 at 7.35.42 PM.png
        Screen Shot 2023-03-23 at 11.11.58 AM.png
        Screen Shot 2023-03-23 at 11.22.55 AM.png
        Screen Shot 2023-03-23 at 11.22.59 AM.png
        Screen Shot 2023-03-23 at 9.11.09 AM.png
        Screen Shot 2023-03-23 at 9.12.33 AM.png
        Tax_Wage_2021.pdf
        Taylor Land For sale.pdf
        Texas State
        Wedsite
Work Compass
calculus II
cmake-build-debug
        cppseq.pdf
        internship applications
(base) dillonfleharty@dillons-mbp Desktop % cd Data\ Structures
(base) dillonfleharty@dillons-mbp Data Structures % scp Assignment05/llcpImp.cpp wrq9@zeus.cs.txstate.edu:DataStructures
        _____________________________________________________
/                                                     \
           |    ______________________________________________     |
|   |                                              |    |
|   | Computer Science Department,                 |    |
|   |     Texas State University-San Marcos        |    |
|   |                                              |    |
|   | Use of Computer and network facilities       |    |
|   | requires prior authorization. Unauthorized   |    |
|   | access is prohibited. Usage may be subject   |    |
|   | to security testing and monitoring. Abuse is |    |
|   | subject to criminal prosecution. Use of      |    |
|   | these facilities implies agreement to comply |    |
|   | with these policies of Texas State           |    |
|   | University and Computer Science Department.  |    |
|   |                                              |    |
|   |______________________________________________|    |
|                                                       |
\______________________________________________________/
\________________________________________/
________________________________________________
        _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  -- `-_
_-'.-.-. .--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
_-'.-.-.-. .--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
_-'.-.-.-.-. .----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
_-'.-.-.-.-.-. .--.-. .-------------------------------. .-.---. .---.-.-.-.`-_
:------------------------------------------------------------------------------:
`---._.------------------------------------------------------------------._.---'

wrq9@zeus.cs.txstate.edu's password:
llcpImp.cpp                                              100% 6513   172.8KB/s   00:00
(base) dillonfleharty@dillons-mbp Data Structures % ssh wrq9@zeus.cs.txstate.edu
        _____________________________________________________
/                                                     \
           |    ______________________________________________     |
|   |                                              |    |
|   | Computer Science Department,                 |    |
|   |     Texas State University-San Marcos        |    |
|   |                                              |    |
|   | Use of Computer and network facilities       |    |
|   | requires prior authorization. Unauthorized   |    |
|   | access is prohibited. Usage may be subject   |    |
|   | to security testing and monitoring. Abuse is |    |
|   | subject to criminal prosecution. Use of      |    |
|   | these facilities implies agreement to comply |    |
|   | with these policies of Texas State           |    |
|   | University and Computer Science Department.  |    |
|   |                                              |    |
|   |______________________________________________|    |
|                                                       |
\______________________________________________________/
\________________________________________/
________________________________________________
        _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  -- `-_
_-'.-.-. .--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
_-'.-.-.-. .--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
_-'.-.-.-.-. .----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
_-'.-.-.-.-.-. .--.-. .-------------------------------. .-.---. .---.-.-.-.`-_
:------------------------------------------------------------------------------:
`---._.------------------------------------------------------------------._.---'

wrq9@zeus.cs.txstate.edu's password:
Last login: Thu Mar 23 19:48:36 2023 from 136.62.178.238

[wrq9@zeus ~]$ ls
Assign01StarterFiles  CS3339.git  DataStructures  public_html
        cs3339                CS3358.git  practice
[wrq9@zeus ~]$ cd DataStructures/
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ make
g++ -Wall -ansi -pedantic -c llcpImp.cpp
        llcpImp.cpp:9:5: warning: identifier ‘nullptr’ is a keyword in C++11 [-Wc++0x-compat]
headPtr = nullptr;
^
llcpImp.cpp: In function ‘bool DelOddCopEven(Node*&)’:
llcpImp.cpp:9:15: error: ‘nullptr’ was not declared in this scope
        headPtr = nullptr;
^
make: *** [llcpImp.o] Error 1
[wrq9@zeus DataStructures]$ make gogo
./a5p1 > a5p1test.out
/bin/sh: ./a5p1: No such file or directory
        make: *** [gogo] Error 127
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ make
g++ -Wall -ansi -pedantic -c llcpImp.cpp
        llcpImp.cpp:9:5: warning: identifier ‘nullptr’ is a keyword in C++11 [-Wc++0x-compat]
headPtr = nullptr;
^
llcpImp.cpp: In function ‘bool DelOddCopEven(Node*&)’:
llcpImp.cpp:9:15: error: ‘nullptr’ was not declared in this scope
        headPtr = nullptr;
^
make: *** [llcpImp.o] Error 1
[wrq9@zeus DataStructures]$ vi
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ ls
a5p1test.out  Assign05P1.cpp  llcpImp.cpp  llcpInt.h  Makefile
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ make
g++ -Wall -ansi -pedantic -c llcpImp.cpp
        g++ -Wall -ansi -pedantic -c Assign05P1.cpp
        g++ llcpImp.o Assign05P1.o -o a5p1
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ ./a5p1 a5p1test.out
================================
passed test on empty list
================================
List node-count error ... too few
test_case 1: 6  7  5  3
#expected: 2
#returned: 0
[wrq9@zeus DataStructures]$ make gogo
./a5p1 > a5p1test.out
        make: *** [gogo] Error 1
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ ./a5p1 a5p1test.out
================================
passed test on empty list
================================
List node-count error ... too few
test_case 1: 6  7  5  3
#expected: 2
#returned: 0
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ make go
./a5p1
================================
passed test on empty list
================================
List node-count error ... too few
test_case 1: 6  7  5  3
#expected: 2
#returned: 0
make: *** [go] Error 1
[wrq9@zeus DataStructures]$ make gogo
./a5p1 > a5p1test.out
        make: *** [gogo] Error 1
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ clean
-bash: clean: command not found
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ ls -clean
        ls: invalid option -- 'e'
Try 'ls --help' for more information.
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ rm a5p1
[wrq9@zeus DataStructures]$ make go
./a5p1
        make: ./a5p1: Command not found
        make: *** [go] Error 127
[wrq9@zeus DataStructures]$ make
g++ llcpImp.o Assign05P1.o -o a5p1
[wrq9@zeus DataStructures]$ ls
a5p1          Assign05P1.cpp  llcpImp.cpp  llcpInt.h
        a5p1test.out  Assign05P1.o    llcpImp.o    Makefile
[wrq9@zeus DataStructures]$ vi
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ make
g++ -Wall -ansi -pedantic -c llcpImp.cpp
        g++ llcpImp.o Assign05P1.o -o a5p1
[wrq9@zeus DataStructures]$ ./a5p1 a5p1test.out
================================
passed test on empty list
================================
List node-count error ... too many (circular list?)
test_case 1: 6  7  5  3
#expected: 2
returned # is higher (may be infinite)
[wrq9@zeus DataStructures]$ vi llcpImp.cpp
[wrq9@zeus DataStructures]$ make
g++ -Wall -ansi -pedantic -c llcpImp.cpp
        g++ llcpImp.o Assign05P1.o -o a5p1
[wrq9@zeus DataStructures]$ ./a5p1 a5p1test.out
================================
passed test on empty list
================================
testing case 1 of 1000000
================================
test case 1 of 1000000
initial: 6  7  5  3
ought2b: 6  6
outcome: 6  6
================================
testing case 2 of 1000000
================================
test case 2 of 1000000
initial: 6  2  9  1  2  7
ought2b: 6  6  2  2  2  2
outcome: 6  6  2  2  2  2
================================
testing case 3 of 1000000
================================
test case 3 of 1000000
initial: 9
ought2b:
outcome:
================================
testing case 4 of 1000000
================================
test case 4 of 1000000
initial: 6  0  6  2
ought2b: 6  6  0  0  6  6  2  2
outcome: 6  6  0  0  6  6  2  2
================================
testing case 5 of 1000000
================================
test case 5 of 1000000
initial: 1  8  7  9  2  0  2
ought2b: 8  8  2  2  0  0  2  2
outcome: 8  8  2  2  0  0  2  2
================================
testing case 40000 of 1000000
================================
test case 40000 of 1000000
initial: 5  5  1
ought2b:
outcome:
================================
testing case 80000 of 1000000
================================
test case 80000 of 1000000
initial: 2
ought2b: 2  2
outcome: 2  2
================================
testing case 120000 of 1000000
================================
test case 120000 of 1000000
initial: 4  4  1  8
ought2b: 4  4  4  4  8  8
outcome: 4  4  4  4  8  8
================================
testing case 160000 of 1000000
================================
test case 160000 of 1000000
initial: 0  4  6
ought2b: 0  0  4  4  6  6
outcome: 0  0  4  4  6  6
================================
testing case 200000 of 1000000
================================
test case 200000 of 1000000
initial: 1  7  0  3  7  7  3
ought2b: 0  0
outcome: 0  0
================================
testing case 240000 of 1000000
================================
test case 240000 of 1000000
initial: 6  2  3  8
ought2b: 6  6  2  2  8  8
outcome: 6  6  2  2  8  8
================================
testing case 280000 of 1000000
================================
test case 280000 of 1000000
initial: 8  6  7  9  7  1  1  9  9
ought2b: 8  8  6  6
outcome: 8  8  6  6
================================
testing case 320000 of 1000000
================================
test case 320000 of 1000000
initial: 7  5
ought2b:
outcome:
================================
testing case 360000 of 1000000
================================
test case 360000 of 1000000
initial: 2  9  6  9  3  7  7
ought2b: 2  2  6  6
outcome: 2  2  6  6
================================
testing case 400000 of 1000000
================================
test case 400000 of 1000000
initial: 8
ought2b: 8  8
outcome: 8  8
================================
testing case 440000 of 1000000
================================
test case 440000 of 1000000
initial: 6  1  1  1  9  9  7  6  8
ought2b: 6  6  6  6  8  8
outcome: 6  6  6  6  8  8
================================
testing case 480000 of 1000000
================================
test case 480000 of 1000000
initial: 8  3  4
ought2b: 8  8  4  4
outcome: 8  8  4  4
================================
testing case 520000 of 1000000
================================
test case 520000 of 1000000
initial: 3  6  2  1  6  4  2
ought2b: 6  6  2  2  6  6  4  4  2  2
outcome: 6  6  2  2  6  6  4  4  2  2
================================
testing case 560000 of 1000000
================================
test case 560000 of 1000000
initial: 3  3  8  8  4
ought2b: 8  8  8  8  4  4
outcome: 8  8  8  8  4  4
================================
testing case 600000 of 1000000
================================
test case 600000 of 1000000
initial: 7  8  6  6  6  0  7  8  5
ought2b: 8  8  6  6  6  6  6  6  0  0  8  8
outcome: 8  8  6  6  6  6  6  6  0  0  8  8
================================
testing case 640000 of 1000000
================================
test case 640000 of 1000000
initial: 6  7  0
ought2b: 6  6  0  0
outcome: 6  6  0  0
================================
testing case 680000 of 1000000
================================
test case 680000 of 1000000
initial: 5  8  0  3  7
ought2b: 8  8  0  0
outcome: 8  8  0  0
================================
testing case 720000 of 1000000
================================
test case 720000 of 1000000
initial: 4  7  9  5  9  3  4  1  4  4
ought2b: 4  4  4  4  4  4  4  4
outcome: 4  4  4  4  4  4  4  4
================================
testing case 760000 of 1000000
================================
test case 760000 of 1000000
initial: 6  8  2  8  4  9  9  8  6
ought2b: 6  6  8  8  2  2  8  8  4  4  8  8  6  6
outcome: 6  6  8  8  2  2  8  8  4  4  8  8  6  6
================================
testing case 800000 of 1000000
================================
test case 800000 of 1000000
initial: 6  2  4  8  6
ought2b: 6  6  2  2  4  4  8  8  6  6
outcome: 6  6  2  2  4  4  8  8  6  6
================================
testing case 840000 of 1000000
================================
test case 840000 of 1000000
initial: 0  1  0  1  0  6  1  1  2  1
ought2b: 0  0  0  0  0  0  6  6  2  2
outcome: 0  0  0  0  0  0  6  6  2  2
================================
testing case 880000 of 1000000
================================
test case 880000 of 1000000
initial: 1  2  4  1  7  2
ought2b: 2  2  4  4  2  2
outcome: 2  2  4  4  2  2
================================
testing case 920000 of 1000000
================================
test case 920000 of 1000000
initial: 3  2  8  0  4  1  5  2  6  4
ought2b: 2  2  8  8  0  0  4  4  2  2  6  6  4  4
outcome: 2  2  8  8  0  0  4  4  2  2  6  6  4  4
================================
testing case 960000 of 1000000
================================
test case 960000 of 1000000
initial: 1  6  0  3  6  3
ought2b: 6  6  0  0  6  6
outcome: 6  6  0  0  6  6
================================
testing case 1000000 of 1000000
================================
test case 1000000 of 1000000
initial: 1  2
ought2b: 2  2
outcome: 2  2
================================
test program terminated normally
================================
[wrq9@zeus DataStructures]$ vi llcpImp.cpp

#include <iostream>
#include <cstdlib>
#include "llcpInt.h"
using namespace std;

// definition of DelOddCopEven of Assignment 5 Part 1
bool DelOddCopEven(Node*& headPtr)
{
    Node* prev = 0;
    Node* current = headPtr;

    while (current != 0)
    {
        if (current->data % 2 != 0) {

            if (prev != 0)
            {
                prev->link = current->link;
            } else
            {
                headPtr = current->link;
            }
            Node* temp = current;
            current = current->link;
            delete temp;
        }
        else
        {
            "llcpImp.cpp" [dos] 286L, 6415C                                  10,5          Top
//
// Created by Dillon Fleharty on 3/23/23.
//

