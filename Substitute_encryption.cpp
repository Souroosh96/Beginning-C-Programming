#include <iostream>
#include <string>

using namespace std;
int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    int index {};
    int i {0};

    string input {};
    
    getline(cin,input);
    //int character = alphabet.find('c');
    for (auto c : input){
        index = alphabet.find(c);
        if (index == string::npos)
        input.at(i) = c;
        else
        input.at(i) = key.at(index);
        i++;
    }
    cout << input << endl;
    i = 0;
    for (auto c : input){
        index = key.find(c);
        if (index == string::npos)
        input.at(i) = c;
        else
        input.at(i) = alphabet.at(index);
        i++;
    }
    cout << input << endl;
    return 0;
}
