#include <iostream>
#include "public/CLI/CLI11.hpp"
#include "service/commandService.hpp"


int main(int argc, char** argv) {
    CLI::App app{"SBH Version Control"};

    CommandService commandService;

    app.add_subcommand("init", "Initialize a new repository")
        ->callback([&commandService] { commandService.handle_init(); });

    CLI11_PARSE(app, argc, argv);

    return 0;
}
