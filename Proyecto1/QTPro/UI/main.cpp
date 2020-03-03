#include "mainwindow.h"
#include <cstdio>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();




    struct sockaddr_in diServidor{};
    diServidor.sin_family = AF_INET;
    diServidor.sin_addr.s_addr = inet_addr("127.0.0.1");
    diServidor.sin_port = htons(8080);

    int cliente = socket(AF_INET, SOCK_STREAM, 0);

    if (connect(cliente, reinterpret_cast<const sockaddr *>(&diServidor), sizeof(diServidor)) != 0) {
        perror("No se pudo conectar");
        return 1;
    }
    char* buffer = static_cast<char *>(malloc(1000));
    int bytesRecibidos = recv(cliente, buffer, 1000, 0);
    printf(buffer);
    free(buffer);

    /*
    while (true) {
        char mensaje[1000];
        scanf("%s", mensaje);

        if (strlen(mensaje) != 1) {
            send(cliente, mensaje, strlen(mensaje), 0);
        }
        else{
            break;
        }
    }
    */

    return a.exec();
}
