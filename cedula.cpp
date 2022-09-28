#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool checkLeght(string data)
{
    if (data.length() == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isCharacterANumber(char character)
{
    int asciiValue = (int)character;

    bool aux = asciiValue >= 48 && asciiValue <= 57;

    return aux;
}

bool isStringAPositiveInteger(string number)
{
    int lengthNumber;
    bool isANumber;

    lengthNumber = number.length();
    isANumber = false;

    if (lengthNumber == 0)
    {
        return isANumber;
    }

    for (int i = 0; i < lengthNumber; i++)
    {
        if (!isCharacterANumber(number[i]))
        {
            return isANumber;
        }
    }

    isANumber = true;

    return isANumber;
}

bool isPair(int number)
{

    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int getTopTen(double number){

    int numberRounded;
    number=number/10;
    numberRounded=int(number);
    numberRounded=numberRounded+1;
     numberRounded=numberRounded*10;
     return numberRounded;
}
void addPairs(string number)
{
    int i;
    int counter=0;
    for (i = 0; i <= 8; i++)
    {
        char currentNumber=number[i];

        int integer = currentNumber-'0';

        if (i % 2 == 0)
        {
            if (integer * 2 >= 10)
            {
                counter += integer * 2 - 9;
            }else{
                counter += integer * 2;
            }
            
        }
        else
        {
            counter += integer;
        }
    }
    int result= getTopTen(counter)-counter;
    cout<<result;
}



bool comparison(int counter,int lastNumber){
    bool isEqual=false;
    int result= getTopTen(counter)-counter;
  if(result==10 && lastNumber==0){
    return true;
  }
 else if(result==lastNumber){
    return true;
 }else
 {
    return isEqual;
 }
}
void show()
{

    string number;
    cout << "Ingrese su cedula:\n";

    cin >> number;
    if (checkLeght(number))
    {
        addPairs(number);
    }
}

int main()
{
    show();
    return 0;
}