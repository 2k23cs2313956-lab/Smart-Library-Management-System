#ifndef USER_H
#define USER_H

#include <string>

// Base class demonstrating OOP Principles
class User {
protected:
    std::string username;
    std::string role;

public:
    User(std::string name, std::string userRole) : username(name), role(userRole) {}
    virtual ~User() = default;

    std::string getUsername() const { return username; }
    std::string getRole() const { return role; }
    
    // Pure virtual function demonstrating Polymorphism
    virtual void displayMenu() const = 0; 
};

class StudentUser : public User {
public:
    StudentUser(std::string name) : User(name, "Student") {}
    void displayMenu() const override;
};

class LibrarianUser : public User {
public:
    LibrarianUser(std::string name) : User(name, "Librarian") {}
    void displayMenu() const override;
};

#endif