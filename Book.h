#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string id;
    std::string title;
    std::string author;
    bool isIssued;

public:
    Book(std::string id = "", std::string title = "", std::string author = "", bool isIssued = false);
    
    std::string getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getIssuedStatus() const;
    
    void setIssuedStatus(bool status);
    void displayBookDetails() const;
    
    // Serialization for File Handling
    std::string serialize() const;
    static Book deserialize(const std::string& record);
};

#endif