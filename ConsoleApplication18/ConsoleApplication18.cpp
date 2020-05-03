#include <iostream>
#include <list>
int main() {
    std::list<int> liste;
    for (int i = 0; i < 5; i++) {
        liste.push_front(4 * i);
        liste.push_back(5 * i);
    }
    liste.sort();
    int taille = liste.size();
    for (int i = 0; i < taille; i++) {
        std::cout << liste.front() << std::endl;
        liste.pop_front();
    }
}