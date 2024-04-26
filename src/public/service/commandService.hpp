#ifndef COMMANDSERVICE_H
#define COMMANDSERVICE_H

#include <cstring>
#include <unistd.h>
#include <stdexcept>
#include <iostream>
#include <sys/stat.h>

class CommandService {
private:
    char* sdh_working_dir;
public:
    CommandService();
    void handle_init();
    ~CommandService();
};

#endif
