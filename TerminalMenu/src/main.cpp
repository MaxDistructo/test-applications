#include <stdio.h>
#include <mdcore/std/terminal_menu.h>

void hello_world();

int main()
{
    TerminalMenu menu;
    menu.add_option("Say Hello World", hello_world);
    menu.add_exit("Quit");
    menu.set_continue_execute();
    auto response = menu.execute();
    return 0;
}

void hello_world()
{
    printf("Hello World!\n");
}