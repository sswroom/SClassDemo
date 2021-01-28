# SClassDemo

A project to demonstrate how to use the SClass to develop applications.

You must SClassDemo directory alongside with SClass
To compile the demo program in Linux (x64), go to SClass/build/Linux_x64
```
smake ConsoleDemo
smake GUIDemo
```

## SMake.cfg
The most important file is the SMake.cfg. Here is syntax description.

```
INCLUDEPATH+=:../../../SClassDemo/header
```
It means to add header directory into include path list

```
CFLAGS += -I ../../../SClassDemo/header
```
It means to add the include directory in C/C++ compile command

```
+all:
```
It means to add following items into all list

```
@GUIDemo
```
It means to add GUIDemo into 'all' list such that 'smake all' will compile the GUIDemo program

```
ConsoleDemo:
@ConsoleDemo.o
@ConsoleStartup.o
```
It means to define the dependency of ConsoleDemo. It directly depending on ConsoleDemo.o and ConsoleStartup.o only.

```
GUIDemo:
@GUIDemo.o
@GUIStartup.o
```
It means to define the dependency of GUIDemo. It directly depending on GUIDemo.o and GUIStartup.o only.

```
ConsoleDemo.o: ../../../SClassDemo/main/ConsoleDemo.cpp
GUIDemo.o: ../../../SClassDemo/main/GUIDemo.cpp
```
It is defining the dependency of ConsoleDemo.o and GUIDemo.o. The file path after that is the source file they come from. Only *.cpp, *.c, *.asm are supported in current version.

```
Demo.h:
```
It is defining the dependency of Demo.h which is used in ConsoleDemo.cpp. There are no source file dependency or object dependency of Demo.h in this case.
