#include <iostream>
#include <string>
using namespace std;
class Chandrayaan{
    int x;
    int y;
    int z;
    string dir;
    public:
    Chandrayaan()
    {
        x=0;
        y=0;
        z=0;
        dir="N";
    }
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    int getZ() const {
        return z;
    }

    string getDirection() const {
        return dir;
    }
    void move(string direction)
    {
        if(this->dir=="N" || this->dir=="S")
            {
                if(direction=="f")
                {
                    this->y+=1;

                }
                else
                {
                    this->y-=1;
                }
            }
        else if(this->dir=="E" || this->dir=="W"){
                if(direction=="f")
                {
                    this->x+=1;

                }
                else
                {
                    this->x-=1;
                }
        }
        else if(this->dir=="U" || this->dir=="D"){
                if(direction=="f")
                {
                    this->z+=1;

                }
                else
                {
                    this->z-=1;
                }
        }
        

    }
    void turn(string direction)
    {
        if(direction=="r")
        {
            
            if(this->dir=="N")
               this->dir="E";
            else if(this->dir=="E")
               this->dir="S"; 
            else if(this->dir=="S")
               this->dir="W"; 
            else if(this->dir=="W")
               this->dir="N"; 
        }
        else if(direction=="l")
        {
            if(this->dir=="N")
               this->dir="W";
            else if(this->dir=="W")
               this->dir="S"; 
            else if(this->dir=="S")
               this->dir="E"; 
            else if(this->dir=="E")
               this->dir="N"; 
        }
    }
    void processCommand(string cmd)
    {
        if(cmd=="l" || cmd=="r")
        {
            this->turn(cmd);
        }
        else if(cmd=="f" || cmd=="b")
        {
            this->move(cmd);
        }
    }
    void displayPose()
    {
        cout << "Final Position: (" << this->x << ", " << this->y << ", " << this->z << ")\n";
        cout <<"Final Direction:"<< this->dir << endl;
    }
};
