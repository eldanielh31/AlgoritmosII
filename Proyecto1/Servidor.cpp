#include <cstdlib>
#include <cstdio>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <json/value.h>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>


using json= nlohmann::json;

/*
int main() {

    std::ifstream grafoArchivo("grafo.json", std::ifstream::binary);

    json grafo;

    grafoArchivo >> grafo;

    std::cout << grafo << std::endl;


    struct sockaddr_in diServidor{};
    diServidor.sin_family = AF_INET;
    diServidor.sin_addr.s_addr = INADDR_ANY;
    diServidor.sin_port = htons(8080);

    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));

    if (bind(servidor, reinterpret_cast<const sockaddr *>(&diServidor), sizeof(diServidor)) != 0) {
        perror("Falló el bind");
        return 1;
    }

    printf("Estoy escuchando\n");
    listen(servidor, 100);

    //------------------------------

    struct sockaddr_in direccionCliente{};
    unsigned int tamanoDireccion;
    int cliente = accept(servidor, reinterpret_cast<sockaddr *>(&direccionCliente), &tamanoDireccion);

    printf("Recibí una conexión en %d!!\n", cliente);
    send(cliente, "Hola perro!", 13, 0);

    //------------------------------

    char* buffer = static_cast<char *>(malloc(1000));

    while (true) {
        int bytesRecibidos = recv(cliente, buffer, 1000, 0);
        if (bytesRecibidos <= 0) {
            perror("Desconectado.");
            return 1;
        }

        buffer[bytesRecibidos] = '\0';
        printf("Me llegaron %d bytes con %s\n", bytesRecibidos, buffer);
        send(cliente, "Hola", 6, 0);
    }

    free(buffer);

    return 0;
}
*/