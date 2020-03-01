#include <arpa/inet.h>
#include <sys/socket.h>
#include <cstdio>
#include <cstdlib>

int main() {

    struct sockaddr_in direccionServidor{};
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = INADDR_ANY;
    direccionServidor.sin_port = htons(8080);

    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));

    if (bind(servidor, reinterpret_cast<const sockaddr *>(&direccionServidor), sizeof(direccionServidor)) != 0 ){

        perror("Error en el bind.");
        return 1;

    }

    printf("Toy escuchando\n");
    listen(servidor,100);

    //--------------------------------------------------------------------------------------

    struct sockaddr_in direccionCliente{};
    unsigned int tamanoDireccion;
    int cliente = accept(servidor, reinterpret_cast<sockaddr *>(&direccionCliente), &tamanoDireccion);

    printf("Tengo conexion en %d!!\n", cliente);
    send(cliente,"Hola perro\n", 11, 0);

    //-------------------------------------------------------------------------------------

    char* buffer = static_cast<char *> (malloc(1000));

    while(true) {
        int bytesRecibidos = recv(cliente, buffer, 1000, 0);
        if (bytesRecibidos <= 0) {
            perror("Desconectado.");
            return 1;
        }
        buffer[bytesRecibidos] = '\0';
        printf("Llegaron %d bytes con %s \n", bytesRecibidos, buffer);
    }

    free(buffer);

    return 0;
}
