#include<iostream>

using namespace std;

char square[9] = {'1','2','3','4','5','6','7','8','9'};

void board()
{
  system("cls");
  cout<<"Kolko i Krzyk\n\n";
  cout<<"Player 1 (x)    Player 2 (o)\n"<<endl;
  cout<<"Wybierz kwadrat od 1-9\n"<<endl;

  cout<<square[0]<<" | "<<square[1]<<" | "<< square[2]<<endl;
  cout<<"---------"<<endl;  
  cout<<square[3]<<" | "<<square[4]<<" | "<< square[5]<<endl; 
  cout<<"---------"<<endl;  
  cout<<square[6]<<" | "<<square[7]<<" | "<< square[8]<<endl; 
  cout<<endl;
}
int checkwin(){
      // w poziomie 
     if(square[0]==square[1] && square[1]==square[2])
     {
      cout<<"Wygrana";
      return 1;
     }
     else if(square[3]==square[4] && square[4]==square[5])
     {
      cout<<"Wygrana";
      return 1;
     }
     else if(square[6]==square[7] && square[7]==square[8])
     {
      cout<<"Wygrana";
      return 1;
     }
      //w pionie
    else if(square[0]==square[3] && square[3]==square[6])
    {
      cout<<"Wygrana";
      return 1;
    }
    else if(square[1]==square[4] && square[4]==square[7])
    {
      cout<<"Wygrana";
      return 1;
    }
    else if(square[2]==square[5] && square[5]==square[8])
    {
      cout<<"Wygrana";
      return 1;
    }
    // w skosie 
    else if(square[0]==square[4] && square[4]==square[8])
    {
      cout<<"Wygrana";
      return 1;
    }
    else if(square[2]==square[4] && square[4]==square[6])
    {
      cout<<"Wygrana";
      return 1;
    }
      
  return 0;
}

int main()
{ 

  return 0;
}
