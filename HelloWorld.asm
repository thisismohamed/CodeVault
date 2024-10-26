section .data
 hello: db 'Hello', 10
 helloLen: equ $-hello
 
 world: db 'World', 10
 worldLen: equ $-world

section .text
 global _start

_start:
 mov eax, 4
 mov ebx, 1
 mov ecx, hello
 mov edx, helloLen
 int 0x80
 
 mov eax, 4
 mov ecx, 1
 mov ecx, world
 mov edx, worldLen
 int 0x80

 mov eax, 1
 xor ebx, ebx
 int 0x80
