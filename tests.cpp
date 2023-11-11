// You should not have to modify this document. You're welcome to do so if you
// would like, but note that the autograder will use this exact document as is
// to test your code

#include <iostream>
#include <stdexcept>

#include "LinkedListInterface.h"
#include "LinkedList.h"

void part1() {
    std::cout << "--- Part 1 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    std::cout << list->toString() << std::endl;
    list->push_front(2);
    std::cout << list->toString() << std::endl;
    list->push_front(-22);
    std::cout << list->toString() << std::endl;
    list->push_front(-20);
    std::cout << list->toString() << std::endl;
    list->push_front(4);
    std::cout << list->toString() << std::endl;
    list->push_front(2);
    std::cout << list->toString() << std::endl;
    list->push_front(21);
    std::cout << list->toString() << std::endl;
    list->push_front(11);
    std::cout << list->toString() << std::endl;
    list->push_front(-20);
    std::cout << list->toString() << std::endl;
    list->push_front(-14);
    std::cout << list->toString() << std::endl;

    delete list;

    LinkedListInterface<double>* list2 = new LinkedList<double>;

    std::cout << list2->toString() << std::endl;
    list2->push_front(9.03);
    std::cout << list2->toString() << std::endl;
    list2->push_front(0.87);
    std::cout << list2->toString() << std::endl;
    list2->push_front(8.02);
    std::cout << list2->toString() << std::endl;
    list2->push_front(3.82);
    std::cout << list2->toString() << std::endl;
    list2->push_front(1.04);
    std::cout << list2->toString() << std::endl;
    list2->push_front(9.51);
    std::cout << list2->toString() << std::endl;
    list2->push_front(4.91);
    std::cout << list2->toString() << std::endl;
    list2->push_front(3.65);
    std::cout << list2->toString() << std::endl;
    list2->push_front(9.28);
    std::cout << list2->toString() << std::endl;
    list2->push_front(9.21);
    std::cout << list2->toString() << std::endl;

    delete list2;
}

void part2() {
    std::cout << "--- Part 2 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-12);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-20);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-17);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(17);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(17);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(11);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-12);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-9);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(17);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-12);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-7);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(23);
    std::cout << "list->size() = " << list->size() << std::endl;
    list->push_front(-2);
    std::cout << "list->size() = " << list->size() << std::endl;

    delete list;
}

void part3() {
    std::cout << "--- Part 3 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    std::cout << list->toString() << std::endl;
    list->push_back(1);
    std::cout << list->toString() << std::endl;
    list->push_back(3);
    std::cout << list->toString() << std::endl;
    list->push_back(5);
    std::cout << list->toString() << std::endl;
    list->push_back(7);
    std::cout << list->toString() << std::endl;
    list->push_back(9);
    std::cout << list->toString() << std::endl;
    list->push_back(11);
    std::cout << list->toString() << std::endl;
    list->push_back(13);
    std::cout << list->toString() << std::endl;
    list->push_back(15);
    std::cout << list->toString() << std::endl;

    try {
        list->insert(2, 1);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(2, 1) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(2, 1) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(4, 3);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(4, 3) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(4, 3) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(6, 5);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(6, 5) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(6, 5) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(8, 7);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(8, 7) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(8, 7) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(10, 9);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(10, 9) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(10, 9) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(12, 11);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(12, 11) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(12, 11) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(14, 13);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(14, 13) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(14, 13) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(16, 15);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(16, 15) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(16, 15) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->insert(17, 18);
    } catch (const std::out_of_range& e) {
        std::cout << "list->insert(17, 18) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->insert(17, 18) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;

    delete list;
}

void part4() {
    std::cout << "--- Part 4 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    try {
        int front = list->front();
        std::cout << "list->front() = " << front << std::endl;
    } catch (const std::length_error& e) {
        std::cout << "list->front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->front() threw an exception: " << e.what() << std::endl;
    }

    try {
        int back = list->back();
        std::cout << "list->back() = " << back << std::endl;
    } catch (const std::length_error& e) {
        std::cout << "list->back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->back() threw an exception: " << e.what() << std::endl;
    }

    list->push_front(9);
    list->push_front(8);
    list->push_front(7);
    list->push_front(6);
    list->push_front(5);

    try {
        int front = list->front();
        std::cout << "list->front() = " << front << std::endl;
    } catch (const std::length_error& e) {
        std::cout << "list->front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->front() threw an exception: " << e.what() << std::endl;
    }

    try {
        int back = list->back();
        std::cout << "list->back() = " << back << std::endl;
    } catch (const std::length_error& e) {
        std::cout << "list->back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->back() threw an exception: " << e.what() << std::endl;
    }

    list->push_front(4);
    list->push_front(3);
    list->push_front(2);
    list->push_front(1);
    list->push_front(0);

    try {
        int at = list->at(0);
        std::cout << "list->at(0) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(0) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(0) threw an exception: " << e.what() << std::endl;
    }

    try {
        int at = list->at(1);
        std::cout << "list->at(1) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(1) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(1) threw an exception: " << e.what() << std::endl;
    }

    try {
        int at = list->at(4);
        std::cout << "list->at(4) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(4) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(4) threw an exception: " << e.what() << std::endl;
    }

    try {
        int at = list->at(8);
        std::cout << "list->at(8) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(8) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(8) threw an exception: " << e.what() << std::endl;
    }

    try {
        int at = list->at(9);
        std::cout << "list->at(9) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(9) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(9) threw an exception: " << e.what() << std::endl;
    }

    try {
        int at = list->at(10);
        std::cout << "list->at(10) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(10) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(10) threw an exception: " << e.what() << std::endl;
    }

    try {
        int at = list->at(29);
        std::cout << "list->at(29) = " << at << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(29) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->at(29) threw an exception: " << e.what() << std::endl;
    }

    try {
        int front = list->front();
        std::cout << "list->front() = " << front << std::endl;
    } catch (const std::length_error& e) {
        std::cout << "list->front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->front() threw an exception: " << e.what() << std::endl;
    }

    try {
        int back = list->back();
        std::cout << "list->back() = " << back << std::endl;
    } catch (const std::length_error& e) {
        std::cout << "list->back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->back() threw an exception: " << e.what() << std::endl;
    }

    delete list;
}

void part5() {
    std::cout << "--- Part 5 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    list->push_front(9);
    list->push_front(8);
    list->push_front(7);
    list->push_front(6);
    list->push_front(5);
    list->push_front(4);
    list->push_front(3);
    list->push_front(2);
    list->push_front(1);
    list->push_front(0);

    std::cout << std::boolalpha << "list->contains(-1) = " << list->contains(-1) << std::endl;
    std::cout << std::boolalpha << "list->contains(0) = " << list->contains(0) << std::endl;
    std::cout << std::boolalpha << "list->contains(1) = " << list->contains(1) << std::endl;
    std::cout << std::boolalpha << "list->contains(2) = " << list->contains(2) << std::endl;
    std::cout << std::boolalpha << "list->contains(3) = " << list->contains(3) << std::endl;
    std::cout << std::boolalpha << "list->contains(4) = " << list->contains(4) << std::endl;
    std::cout << std::boolalpha << "list->contains(5) = " << list->contains(5) << std::endl;
    std::cout << std::boolalpha << "list->contains(6) = " << list->contains(6) << std::endl;
    std::cout << std::boolalpha << "list->contains(7) = " << list->contains(7) << std::endl;
    std::cout << std::boolalpha << "list->contains(8) = " << list->contains(8) << std::endl;
    std::cout << std::boolalpha << "list->contains(9) = " << list->contains(9) << std::endl;
    std::cout << std::boolalpha << "list->contains(10) = " << list->contains(10) << std::endl;
    std::cout << std::boolalpha << "list->contains(11) = " << list->contains(11) << std::endl;
    std::cout << std::boolalpha << "list->contains(29) = " << list->contains(29) << std::endl;

    delete list;
}

void part6() {
    std::cout << "--- Part 6 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    list->push_front(9);
    list->push_front(8);
    list->push_front(7);
    list->push_front(6);
    list->push_front(5);
    list->push_front(4);
    list->push_front(3);
    list->push_front(2);
    list->push_front(1);
    list->push_front(0);

    std::cout << list->toString() << std::endl;
    try {
        list->remove(11);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(11) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(11) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(0);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(0) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(0) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(10);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(10) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(10) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(6);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(6) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(6) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(8);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(8) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(8) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(2);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(2) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(2) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(4);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(4) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(4) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(3);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(3) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(3) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(6);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(6) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(6) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(4);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(4) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(4) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(1);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(1) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(1) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(2);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(2) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(2) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(1);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(1) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(1) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->remove(0);
    } catch (const std::out_of_range& e) {
        std::cout << "list->remove(0) threw an out_of_range exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->remove(0) threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;

    list->push_front(9);
    list->push_front(8);
    list->push_front(7);
    list->push_front(6);
    list->push_front(5);
    list->push_front(4);
    list->push_front(3);
    list->push_front(2);
    list->push_front(1);
    list->push_front(0);

    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_front();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_front() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_front() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;
    try {
        list->pop_back();
    } catch (const std::length_error& e) {
        std::cout << "list->pop_back() threw a length_error exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "list->pop_back() threw an exception: " << e.what() << std::endl;
    }
    std::cout << list->toString() << std::endl;

    delete list;
}

void part7() {
    std::cout << "--- Part 7 output ---" << std::endl;

    LinkedListInterface<int>* list = new LinkedList<int>;

    list->push_front(-19);
    std::cout << list->toString() << std::endl;
    list->push_front(-24);
    std::cout << list->toString() << std::endl;
    list->push_front(-12);
    std::cout << list->toString() << std::endl;
    list->push_front(-21);
    std::cout << list->toString() << std::endl;
    list->push_front(-8);
    std::cout << list->toString() << std::endl;
    list->push_front(15);
    std::cout << list->toString() << std::endl;
    list->push_front(-12);
    std::cout << list->toString() << std::endl;
    list->push_front(11);
    std::cout << list->toString() << std::endl;
    list->push_front(-20);
    std::cout << list->toString() << std::endl;
    list->push_front(0);
    std::cout << list->toString() << std::endl;
    list->push_front(-19);
    std::cout << list->toString() << std::endl;
    list->push_front(-10);
    std::cout << list->toString() << std::endl;
    list->push_front(12);
    std::cout << list->toString() << std::endl;
    list->push_front(2);
    std::cout << list->toString() << std::endl;
    list->push_front(-2);
    std::cout << list->toString() << std::endl;

    list->clear();
    std::cout << list->toString() << std::endl;

    delete list;
}
//
//int main(int argc, char* argv[]) {
//    if (argc < 2) {
//        std::cerr << "Usage: " << argv[0] << " [TEST]" << std::endl;
//        std::cerr << "where TEST is one of 1, 2, 3, 4, 5, 6, 7, or all" << std::endl;
//        return 1;
//    }
//
//    std::string test = argv[1];
//
//    if (test == "1") {
//        part1();
//    } else if (test == "2") {
//        part2();
//    } else if (test == "3") {
//        part3();
//    } else if (test == "4") {
//        part4();
//    } else if (test == "5") {
//        part5();
//    } else if (test == "6") {
//        part6();
//    } else if (test == "7") {
//        part7();
//    } else if (test == "all") {
//        part1();
//
//        std::cout << "\n\n";
//        part2();
//
//        std::cout << "\n\n";
//        part3();
//
//        std::cout << "\n\n";
//        part4();
//
//        std::cout << "\n\n";
//        part5();
//
//        std::cout << "\n\n";
//        part6();
//
//        std::cout << "\n\n";
//        part7();
//    } else {
//        std::cerr << test << " is not a valid test to run. The valid options are 1, 2, 3, 4, 5, 6, 7, and all"
//            << std::endl;
//        return 1;
//    }
//
//    return 0;
//}
