#include <iostream>
#include "public/CLI/CLI11.hpp"
#include "public/service/commandService.hpp"


int main(int argc, char** argv) {

    CommandService commandService;
    CLI::App app{"SBH Version Control"};
    app.add_subcommand("init", "Initialize a new repository")
        ->callback([&commandService] { commandService.handle_init(); });

    CLI11_PARSE(app, argc, argv);

    return 0;
}
