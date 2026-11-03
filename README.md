# Task-manger-
A small project I worked on in 2022, when I was learning C++.

==================================================
C++ Console Task Manager
A command-line task management application built in C++ as an early project to practice Object-Oriented Programming (OOP) principles, control flow, and standard template library (STL) containers.
FEATURES
Role-Based Task Assignment: Organize tasks by department (General, HR, Developers, and Testers).
Detailed Task Metadata: Input and review custom titles, descriptions, and deadlines for each task.
Priority Management: Assign and evaluate task urgency levels (Low, Medium, High).
Interactive Comments: Append and review real-time feedback comments on tasks using dynamic vectors.
Continuous Workflow: Supports looped execution with options to create subsequent tasks.
TECHNICAL HIGHLIGHTS & CONCEPTS PRACTICED
Looking back at the source code, this project was a great sandbox for learning several core C++ concepts:
Object-Oriented Programming (OOP): Encapsulation of logic across specialized classes (Menu, Task, Storage_for_comment, Store_tasks).
Inheritance: Utilizing public inheritance (Priority and Team_members extending Task) to organize related domain models.
STL Containers: Managing dynamic collections of data safely using std::vector.
Pointers to Member Functions: Implementing function pointers for dynamic method execution.
Control Flow & I/O: Handling standard input streams (cin, getline), switch cases, and continuous execution loops.
GETTING STARTED
Prerequisites:
You need a C++ compiler that supports C++11 or later (e.g., GCC, Clang, MSVC).
Compilation & Execution:
Clone the repository and compile the source file using your terminal:
g++ main.cpp -o task_manager
./task_manager
(Note: This is an archived project from my early days of learning software development and C++!)
==================================================
