#include <iostream>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdio.h>

int main() {

    struct sockaddr_in direccionServidor;
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = INADDR_ANY;
    direccionServidor.sin_port = htons(8080);

    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    if (bind (servidor, (void*) &direccionServidor, sizeof(direccionServidor)) != 0 )



    return 0;
}
