#include <iostream>
using namespace std;

class Movie
{
private:
    string title;
    string genre;
    int releasedYear;

public:

    void setMovie()
    {
        cout << "Enter Movie Title: ";
        cin >> title;

        cout << "Enter Movie Genre: ";
        cin >> genre;

        cout << "Enter Release Year: ";
        cin >> releasedYear;
    }

    void showMovie()
    {
        cout << "Movie Title : " << title << endl;
        cout << "Movie Genre : " << genre << endl;
        cout << "Release Year: " << releasedYear << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of movies: ";
    cin >> n;

    Movie m[n];   

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of Movie " << i + 1 << endl;
        m[i].setMovie();
    }

    cout << "Movie Details";
    for (int i = 0; i < n; i++)
    {
        cout << "Movie " << i + 1 << endl;
        m[i].showMovie();
    }

}