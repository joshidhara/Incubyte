#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Chandrayaan{
    int x;
    int y;
    int z;
    string dir;
    string prevdir;
    public:
    Chandrayaan()
    {
        x=0;
        y=0;
        z=0;
        dir="N";
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
            else if(this->dir=="U")
               if(this->prevdir=="N")
                this->dir="E";
               if(this->prevdir=="S")
                this->dir="W";
               if(this->prevdir=="E")
                this->dir="S";
               if(this->prevdir=="W")
                this->dir="N";
            else if(this->dir=="D")
               if(this->prevdir=="N")
                this->dir="E";
               if(this->prevdir=="S")
                this->dir="W";
               if(this->prevdir=="E")
                this->dir="S";
               if(this->prevdir=="W")
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
            else if(this->dir=="U")
               if(this->prevdir=="N")
                this->dir="W";
               if(this->prevdir=="S")
                this->dir="E";
               if(this->prevdir=="E")
                this->dir="N";
               if(this->prevdir=="W")
                this->dir="S";
            else if(this->dir=="D")
               if(this->prevdir=="N")
                this->dir="W";
               if(this->prevdir=="S")
                this->dir="E";
               if(this->prevdir=="E")
                this->dir="N";
               if(this->prevdir=="W")
                this->dir="S";
        }
        
        else if(direction=="u")
        {
            this->prevdir = this->dir;
            if(this->dir=="N")
               this->dir="U";
            else if(this->dir=="W")
               this->dir="U"; 
            else if(this->dir=="S")
               this->dir="U"; 
            else if(this->dir=="E")
               this->dir="U"; 
        }
        else if(direction=="d")
        {
            this->prevdir = this->dir;
            if(this->dir=="N")
               this->dir="D";
            else if(this->dir=="W")
               this->dir="D"; 
            else if(this->dir=="S")
               this->dir="D"; 
            else if(this->dir=="E")
               this->dir="D"; 
        }
    }
    void processCommand(string cmd)
    {
        if(cmd=="l" || cmd=="r"|| cmd=="u"||cmd=="d")
        {
            this->turn(cmd);
        }
        else if(cmd=="f" || cmd=="b")
        {
            this->move(cmd);
        }
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
    string getPrevDirection() const{
        return prevdir;
    }

    string getDirection() const {
        return dir;
    }
    void displayPose()
    {
        cout << "Final Position: (" << this->x << ", " << this->y << ", " << this->z << ")\n";
        cout <<"Final Direction:"<< this->dir << endl;
    }
};

int main()
{
    Chandrayaan spacecraft;
    vector<string> commands = {"f", "r", "u","b","l"};
    for (string cmd : commands)
    {
        spacecraft.processCommand(cmd);
    }
    spacecraft.displayPose();
}