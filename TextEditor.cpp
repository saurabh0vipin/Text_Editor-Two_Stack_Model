#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define add(a, b) (a%M)+(b%M)%M
#define mul(a, b) (a%M)*(b%M)%M
#define pb push_back
#define fast1 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

class textEditor {

    private:
    stack<char> leftStack; //Left stack
    stack<char> rightStack; //Right stack

    public:
        void insertWord(char word[]);
        void insertCharacter(char character);
        bool deleteCharacter();
        bool backSpaceCharacter();
        void moveCursor(int position);
        void moveLeft(int position);
        void moveRight(int position);
        void findAndReplaceChar(char findWhat, char replaceWith);
        void examineTop();
}; //End of class

void textEditor::insertWord(string word) {
    int i=0;

    while(word[i]!='\0') {
        insertCharacter(word[i]);
        i++;
    }
} //End of function

int main() {
    fast1;

    return 0;
} //End of main
