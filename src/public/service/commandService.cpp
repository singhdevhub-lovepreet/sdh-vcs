#include "commandService.hpp"


CommandService::CommandService() {
    sdh_working_dir = new char[1024];
    if (getcwd(sdh_working_dir, 1024) == nullptr) {
        std::cerr << "Error: Unable to get current working directory" << std::endl;
    }
}

void CommandService::handle_init() {
    const int dir_err = mkdir(".sdh", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    std::cout << "Initializing sdh repository..." << std::endl;
}

CommandService::~CommandService() {
    delete[] sdh_working_dir;
}