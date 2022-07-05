#include "tests.h"

#include <mdcore/std/terminal_menu.h>


int main()
{
    TerminalMenu menu;
    menu.add_option("Run all tests", test_runner);
    menu.add_option("Run std tests", std_tests_runner);
    menu.add_option("Run c tests", c_tests_runner);
    menu.add_exit("Exit");
    menu.set_continue_execute();
    menu.set_invalid_message("Invalid Input\n");
    return menu.execute();
}

/**
 * @brief This runs all tests in this test suite. All are designed for use with Catch2.
 * 
 */
void test_runner()
{
    std_tests_runner();
    c_tests_runner();
}