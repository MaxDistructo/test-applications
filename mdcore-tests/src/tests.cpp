#include "tests.h"
#include <string>
#include <mdcore/list.h>

TEST_CASE("SingleLinkedList")
{

    //For code coverage, we setup using push_back instead of the operators that may or may not work.
    mdcore::SingleLinkedList<std::string> slist;
    slist.push_back("First");
    slist.push_back("Second");
    slist.push_back("Third");

    mdcore::SingleLinkedList<std::string> matching_list;
    slist.push_back("First");
    slist.push_back("Second");
    slist.push_back("Third");
    
    SECTION("Lists are equal")
    {
        REQUIRE(slist == matching_list);
    }

    SECTION("Basic Addition of Elements +=")
    {
        slist += "Fourth";
        matching_list += "Fourth";
        REQUIRE(slist == matching_list);
    }

    SECTION("Basic Addition of Elements +")
    {
        slist = slist + "Fourth";
        matching_list = matching_list + "Fourth";
        REQUIRE(slist == matching_list);
    }

    SECTION("Size of lists")
    {
        REQUIRE(slist.get_size() == 3);
        REQUIRE(matching_list.get_size() == 3);
    }

    SECTION("Removal of element")
    {
        slist.remove("Third");
        matching_list.remove("Third");
    }

    SECTION("Get element at position")
    {
        REQUIRE(slist.get(1) == matching_list.get(1));
    }

}
TEST_CASE("DoubleLinkedList")
{

    //For code coverage, we setup using push_back instead of the operators that may or may not work.
    mdcore::DoubleLinkedList<std::string> slist;
    slist.push_back("First");
    slist.push_back("Second");
    slist.push_back("Third");

    mdcore::DoubleLinkedList<std::string> matching_list;
    slist.push_back("First");
    slist.push_back("Second");
    slist.push_back("Third");
    
    SECTION("Lists are equal")
    {
        REQUIRE(slist == matching_list);
    }

    SECTION("Basic Addition of Elements +=")
    {
        slist += "Fourth";
        matching_list += "Fourth";
        REQUIRE(slist == matching_list);
    }

    SECTION("Basic Addition of Elements +")
    {
        slist = slist + "Fourth";
        matching_list = matching_list + "Fourth";
        REQUIRE(slist == matching_list);
    }

    SECTION("Size of lists")
    {
        REQUIRE(slist.get_size() == 3);
        REQUIRE(matching_list.get_size() == 3);
    }

    SECTION("Removal of element")
    {
        slist.remove("Third");
        matching_list.remove("Third");
    }

    SECTION("Get element at position")
    {
        REQUIRE(slist.get(1) == matching_list.get(1));
    }

}