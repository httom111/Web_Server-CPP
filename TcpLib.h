//
// Created by ht on 1/29/24.
//

#ifndef TAO_TCPLIB_H
#define TAO_TCPLIB_H


class TcpLib {
public:
    int createTCPServer(int port);
    int socketSetNonBlockNoDelay(int fd);
    int acceptClient(int server_socket);
    int TCPConnect(char *addr, int port, int nonblock);
};


#endif //TAO_TCPLIB_H
