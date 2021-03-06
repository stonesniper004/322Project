#ifndef BOOKMANAGER_HPP
#define BOOKMANAGER_HPP

#include <fstream>
#include <vector>
#include "book.h"

class BookManager
{
public:
    void add(Book);
    void remove(std::string isbn);
    Book get(std::string isbn);
    std::vector<Book> search(std::string searchString);
    BookManager();
    BookManager(std::string file);
    ~BookManager();
private:
    std::string mFile;
};

#endif // BOOKMANAGER_HPP