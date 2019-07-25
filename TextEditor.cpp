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

void textEditor::insertCharacter(char character){

    leftStack.push(character);
} //End of function

bool textEditor::deleteCharacter(){

    if (rightStack.empty())
        return false;
    else
        rightStack.pop();
    return true;
}//End of function

bool textEditor::backSpaceCharacter(){

    if (leftStack.empty())
        return false;
    else
        leftStack.pop();
    return true;
}//End of function

void textEditor::moveLeft(int position){
    int leftSize;
    leftSize = leftStack.size();
    while(position!=leftSize) {
        rightStack.push(leftStack.top());
        leftStack.pop();
        leftSize = leftStack.size();
    }
}//End of function

void textEditor::moveRight(int count){
    int rightSize, i=1;
    rightSize = rightStack.size();
    if (count > rightSize)
        cout << "Cannot move the cursor, right, to the specified position";
    else {
        while(i<=count) {
            leftStack.push(rightStack.top());
            rightStack.pop();
            i++;
        } //End of while
    } //End of else
}//End of function

void textEditor::moveCursor(int position){

    int leftSize, rightSize, count;
    leftSize = leftStack.size();
    rightSize = rightStack.size();
    if (position < leftSize)
        moveLeft(position);
    else {
        count = position - leftSize;
        moveRight(count);
    }
}//End of function

int main() {
    fast1;

    return 0;
} //End of main
