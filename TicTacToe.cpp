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
void player1_move()
{
    int player1;
    cout<<"Player 1 twoj ruch: ";
    cin>>player1;
    if(square[(player1-1)]=='x' || square[(player1-1)]=='o' ){
      cout<<"Ta pozycja juz zajeta wybierz ponownie"<<endl;
      player1_move();
    }
    square[(player1-1)]='x';
    checkwin();
    board();
}
void player2_move()
{
    int player2;
    cout<<"Player 2 twoj ruch: ";
    cin>>player2;
    if(square[(player2-1)]=='x' || square[(player2-1)]=='o'){
      cout<<"Ta pozycja juz zajeta wybierz ponownie"<<endl;
      player2_move();
    }
    square[(player2-1)]='o';
    checkwin();
    board();
}

int main()
{ 
   board();
    player1_move();
    ifwin=checkwin();
    if(ifwin==1)
    { 
      cout<<" Player 1";
      break;
    }
    player2_move();
    ifwin==checkwin();
    if(ifwin==1)
    {
      cout<<" Player 2";
      break;
    }
    counter++;
    if(counter==4)
    {
      cout<<"Remis brak zwyciezcow";
      ifplay=false;
      break;
    }
  return 0;
}
