#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void ret2win() {
    printf("[+] Función ret2win ejecutada!\n");
    WinExec("cmd.exe", SW_SHOW);
    // WinExec("powershell.exe", SW_SHOW);
    
    exit(0); 
}

void vulnerable_function() {
    char buffer[64];
    printf("Dirección de ret2win: %p\n", ret2win);
    printf("Ingresa tu input: ");
    gets(buffer); 
    printf("Input recibido: %s\n", buffer);
}

int main() {
    printf("[+] Programa vulnerable iniciado\n");
    printf("[+] Función main: %p\n", main);
    printf("[+] Función vulnerable_function: %p\n", vulnerable_function);
    vulnerable_function();
    return 0;
}
