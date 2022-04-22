/* 
Charles Yingling
4/21/2022

////////////////Test thoroughly.////////////////
*/

#include <iostream>

using namespace std;

/*Create a chapter class
-title
-pages
a) Create a constructor with no parameters. Set title to unknown.
b) Create a constructor with 2 parameters (title and pages).
c) Create a Display method that displays title and pages*/

class Chapter {
    private:
        string title;
        int pages;

public:
string getTitle()
    {
      return title;  
    }
    void setTitle(string Title)
    {
      title = Title;
    }
int getPages()
    {
      return pages;  
    }
    void setPages(int Pages)
    {
      pages = Pages;
    }
        Chapter() {
            title="unknown";
        }
        Chapter(string Title, int Pages) {
            title=Title;
            pages=Pages;
        }
        void Display() {
            cout<<"Chapter Title: " <<title<<"\n";
            cout<<"Chapter Pages: " <<pages<<"\n";
        }

};


/*Create an author class
-name
-id
-email
a) Create a constructor with no parameters. Set name to unknown.
b) Create a constructor with 3 parameters (name, id and email).
c) Create a Display method that displays name, id and email.*/

class Author {
    private:
        string name;
        int id;
        string email;

public:
string getName()
    {
      return name;  
    }
    void setName(string Name)
    {
      name = Name;
    }
string getEmail()
    {
      return email;  
    }
    void setEmail(string Email)
    {
      email = Email;
    }
int getId()
    {
      return id;  
    }
    void setId(int Id)
    {
      id = Id;
    }
        Author() {
            name="unkown";
        }
        Author(string Name, int Id, string Email) {
            name=Name;
            id=Id;
            email=Email;
        }
        void Display() {
            cout<<"Author Name: " <<name<<"\n";
            cout<<"Author Id: " <<id<<"\n";
            cout<<"Author Email: " <<email<<"\n";
        }
};
/*Create a book class
-title
-datepublished
-totalpages
-author (of type Author) => Implement aggregation
-chapter (of type Chapter) => implement composition
a) Create the constructor that take no parameters. Implement a way to call the chapter constructor. Inside the constructor, set title to unknown.
b) 2nd constructor should take the following:
i)title, datepublished, totalpages, author as pointer, chapterTitle and chapterPages
ii) Implement a way to call the chapter constructor and pass chapterTitle and chapterPages
c) Create a Display method to display 
title, datepublished, totalpages.
call display method for chapter
call display method for author.*/

class Book {
    private:
        string title;
        string datepublished;
        int totalpages;
    public:
        Author* author;
        Chapter chapter;

        string getTitle()
    {
      return title;  
    }
    void setTitle(string Title)
    {
      title = Title;
    }
   string getdatePublished()
    {
      return datepublished;  
    }
    void setdatepublished(string dp)
    {
      datepublished = dp;
    }
    int gettotalPages()
    {
      return totalpages;  
    }
    void settotalPages(int tp)
    {
      totalpages = tp;
    }

        Book():chapter() {
            title="unknown";
        }
        Book(string Title, string datePublished, int Totalpages, Author* Author, string chapterTitle, int chapterPages) : chapter(chapterTitle,chapterPages) {
            title=Title;
            datepublished=datePublished;
            totalpages=Totalpages;
            author=Author;
        }
        void Display() {
            cout<<"Title: " <<title<<"\n";
            cout<<"Date Published: " <<datepublished<<"\n";
            cout<<"Total Pages: " <<totalpages<<"\n";
            chapter.Display();
            author->Display();
        }
};

int main() {
    cout << "Hello World!\n";

  Author a1 {"John Doe",1,"Author1@email.com"};
  Book b1{"Title1","04/21/2022",100,&a1,"Chaptertest",55};
  b1.Display();
  Author a2 {};
  Book b2{};
  b2.Display();
}