#include <stdio.h>
#include <mdcore/std/terminal_menu.h>

void hello_world();
void incrementing_number_print();

int main()
{
    TerminalMenu menu;
    //This tests all current functions of the Terminal Menu
    menu.add_option("Say Hello World", hello_world);
    //Ad dan exit options 
    menu.add_exit("Quit");
    //This is added here to test that our methodology to enforce quit as the last options is obeyed.
    menu.add_option("Print an ever increasing number", incrementing_number_print);
    //Since we have an exit command, we want to continue to loop until its done
    menu.set_continue_execute();
    return menu.execute();
}

void hello_world()
{
    printf("Hello World!\n");
}

void incrementing_number_print()
{
    static int i = 0;
    printf("%d\n", i++);
}