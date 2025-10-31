#include "includes.h"
#include "server.h"

int main(int argc, char *argv[]){
    struct Server server = server_Constructor(AF_INET, 80, SOCK_STREAM, 0, 10, INADDR_ANY, launch);
    server.launch(&server);
    return 0;
}