#ifndef INDIVIDUAL_H_INCLUDED
#define INDIVIDUAL_H_INCLUDED

//20170260  Mohamed Wa'el Abdelhady A'ref   G9
class dominos
{
private:
    int leftside,rightside;
public:
    dominos()
    {   //default constructor to set initial values for the left/right side
        int leftside=0;
        int rightside=0;
    }
    dominos(int leftside,int rightside); //constructor for equality

    int getleftside(int leftside); // getter for leftside
    int getrightside(int rightside); //getter for rightside

    void toprint(); //function for printing all elements

};

#endif // INDIVIDUAL_H_INCLUDED
