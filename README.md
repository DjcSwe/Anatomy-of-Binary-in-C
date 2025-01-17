Malware Analysis 
Anatomy of a Binary


Write a C program that contains several functions and compile it into
an assembly file, an object file, and an executable binary, respectively.

   Assembly:
      gcc -S example.c -o assembly_example.s
   Object:
      gcc -c example.c object_example.o
   Executable:
      gcc example.c -o executable_example


Try to locate the functions you wrote in the assembly file and in the
disassembled object file and executable. 
   Assembly:
      cat assembly_example.s
   Object:
      objdump -d object_example.o
   Executable:
      objdump -d executable_example

Can you see the correspondence between the C code and the assembly code?

Finally, strip the executable and try to identify the functions again.