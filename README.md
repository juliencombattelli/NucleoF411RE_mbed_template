# NucleoF411RE mbed template

## Description

This is a template project for the Nucleo STM32F411RE board and the SW4STM32 IDE (based on Eclipse).
This project includes the mbed library (source + compiled library).


## How to use

In SW4STM32, import the project from GitHub using 'File > Import... > Git > Projects from Git', and then select 'clone URL'.

Or simply clone this project into your computer. Then open the IDE and import the project using 'File > Import... > General > Existing project into Workspace'.

## How to recompile mbed

If needed, it is possible to recompile mbed library.

Simply open the Code::Blocks project 'lib/mbed/mbed_builder.cbp'.

To customize compilation flags, in Code::Blocks right-click on 'mbed_builder' project and then select 'Build options...'. Select 'mbed_builder' in left panel, and finaly go to 'Compiler settings > Other compiler options'.

After build is finish, rename the generated '\*.a' file located in 'lib/mbed/bin/Release' to fit the name used in SW4STM32 in 'Project Properties > C/C++ Build > Settings > Tool Settings > MCU G++ Linker > Libraries'.
