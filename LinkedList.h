#pragma once


#include <string>
#include <sstream>
#include "LinkedListInterface.h"
using namespace std;



template<typename T>
class LinkedList: public LinkedListInterface<T> {

private:
    class Node {
    private:

    public:
        //constructors
        T value;
        Node* nextNode;

        Node(T value, Node* nextNode) {
            this->value = value;
            this->nextNode = nextNode;
        }
        T getValue() {
            return this->value;
        }
        Node*& getNextNode() {
            return this->nextNode;
        }
        void setNextNode(Node* node) {
            this->nextNode = node;
        }
    };
    Node* header;

public:
    LinkedList() {
        // implement your constructor here
        this->header=nullptr;
    }
    virtual ~LinkedList() {
        // implement your destructor here
        clear();
    }
    virtual void push_front(T item) {
        //implement push_front here
        Node* newNode = new Node(item, this->header);
        this->header = newNode;
    }
    virtual void push_back(T item) {
        // implement push_back here
        Node * tempNode = header;
        if (this->header == nullptr) {
            push_front(item);
        }
        else {
            while (tempNode->nextNode != nullptr) {
                tempNode = tempNode->nextNode;
            }
            Node * newNode= new Node(item, nullptr);
            tempNode->setNextNode(newNode);
        }
    }

    virtual void insert(T item, size_t position) {
        // implement insert here
        int size = this->size();
        if (position > size) {
            throw std::out_of_range("");
        }
        else {
            int count = 1;
            Node * tempNode = header;
            while (count < position) {
                tempNode = tempNode->nextNode;
                count += 1;
            }
            Node * newNode = new Node(item, tempNode->nextNode);
            tempNode->setNextNode(newNode);
        }
    }

    virtual void pop_front() {
        // implement pop_front here
        Node* tempNode = header;
        if (header == nullptr) {
            throw std::length_error("");
        }
        tempNode = header->nextNode;
        delete header;
        this->header = tempNode;
    }

    virtual void pop_back() {
        // implement pop_back here
        Node* tempNode = header;
        if (tempNode == nullptr) {
            throw std::length_error("");
        }

        else {
            if (tempNode->nextNode == nullptr) {
                header = nullptr;
            }
            else {
                while (tempNode->nextNode->nextNode != nullptr) {
                    tempNode = tempNode->nextNode;
                }
                tempNode->nextNode = nullptr;
            }
        }
    }

    virtual void remove(size_t position) {
        // implement remove here
        Node* tempNode = header;
        if (tempNode == nullptr) {
            throw std::out_of_range("");
        }
        int size = this->size();
        if (position > size-1) {
            throw std::out_of_range("");
        }
        else {
            int count = 1;
            if (position == 0) {
                tempNode = tempNode->nextNode;
                delete header;
                header = tempNode;
            }
            else {
                while (count < position) {
                    tempNode = tempNode->nextNode;
                    count += 1;
                }
                if (tempNode->nextNode == nullptr) {
                    tempNode->setNextNode(nullptr);
                }
                else {

                    tempNode->setNextNode(tempNode->nextNode->nextNode);
                }
            }
        }
    }


    virtual T front() const {
        // implement front hre
        if (header == nullptr) {
            throw std::length_error("");
        }
        else {
            return header->value;
        }
    }

    virtual T back() const {
        // implement back here
        if (header == nullptr) {
            throw std::length_error("");
        }
        Node* tempNode = header;
        while (tempNode->nextNode != nullptr) {
            tempNode = tempNode->nextNode;
        }
        return tempNode->value;
    }

    virtual T at(size_t index) const {
        // implement at here
        int size = this->size();
        if (index > size-1) {
            throw std::out_of_range("");
        }
        else {
            int count = 1;
            Node* tempNode = header;
            while (count <= index) {
                tempNode = tempNode->nextNode;
                count += 1;
            }
            return tempNode->value;
        }
    }


    virtual bool contains(const T& item) const {
        // implement contains here
        Node* tempNode = header;
        while (tempNode->nextNode != nullptr) {
            if (tempNode->value == item) {
                return true;
            }
            tempNode = tempNode->nextNode;
        }
        if (tempNode->value == item) {
            return true;
        }
        return false;
    }


    virtual size_t size() const {

        // implement size here
        int count = 0;
        if (this->header == nullptr) {
            return 0;
        }
        else {
            Node* tempNode = header;
            while (tempNode->nextNode != nullptr) {
                count += 1;
                tempNode = tempNode->nextNode;
            }
            return count+1;
        }
    }


    virtual void clear() {
        // implement clear here
        if (header == nullptr) {
        }
        else {
            while (header->nextNode != nullptr) {
                Node *tempNode = header;
                header = header->nextNode;
                delete tempNode;
                tempNode = nullptr;
            }
        }

        delete header;
        header = nullptr;
    }


    virtual std::string toString() const {
        // implement toString here
        ostringstream os;
        Node* tempNode = header;
        if (this->header == nullptr) {
            os<<"";
        }
        else if (tempNode->nextNode == nullptr) {
            os<<tempNode->value;
        }
        else {
            while (tempNode->nextNode != nullptr) {
                os << tempNode->value << " ";
                tempNode = tempNode->nextNode;
            }
            os << tempNode->value;
        }
        return os.str();
    }

};


