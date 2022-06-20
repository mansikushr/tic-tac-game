//this program developed by Mansi_kushwaha,IT 3rd year. 
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int play;
using namespace std;
int again;
char ch=0;
char player='0';
char win='0';
char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char draw0='0';
char draw1='1';
void draw(){
	cout<<"\t\t\t\tWELCOME TO TIC TOY GAME!!!"<<endl<<endl;
	cout<<"\t\t\t\t  "<<matrix[0][0]<<" |  "<<matrix[0][1]<<"  | "<<matrix[0][2]<<"  "<<endl;
	cout<<"\t\t\t\t----|-----|----"<<endl;
	cout<<"\t\t\t\t  "<<matrix[1][0]<<" |  "<<matrix[1][1]<<"  | "<<matrix[1][2]<<"  "<<endl;
	cout<<"\t\t\t\t----|-----|----"<<endl;
	cout<<"\t\t\t\t  "<<matrix[2][0]<<" |  "<<matrix[2][1]<<"  | "<<matrix[2][2]<<"  "<<endl;
}
void input(){
	int a;
	if(player=='0'){
		cout<<"Press the Number(Turn 0): ";
		system("color 1f");
	}
	else{
	   cout<<"Press the Number(Turn x): ";
	   system("color 4f");	
	}
	cin>>a;
	if(a==1){
		matrix[0][0]=player;
	}
	else if(a==2){
		matrix[0][1]=player;
	}
	else if(a==3){
		matrix[0][2]=player;
	}
	else if(a==4){
		matrix[1][0]=player;
	}
	else if(a==5){
		matrix[1][1]=player;
	}
	else if(a==6){
		matrix[1][2]=player;
	}
	else if(a==7){
		matrix[2][0]=player;
	}
	else if(a==8){
		matrix[2][1]=player;
	}
	else if(a==9){
		matrix[2][2]=player;
	}
	else{
		while(a!=5678){
			break;
		}
	}
}
void toggleplayer(){
	if(win=='x'){
		win='0';
	}
	else{
		win='x';
	}
	if(player=='0'){
		player='x';
	}
	else{
		player='0';
	}
}
int winner(){
	//PLAYER 1(0)
	if(matrix[0][0]==win && matrix[0][1]==win && matrix[0][2]==win){
		return win;
	}
	else if(matrix[0][0]==win && matrix[1][0]==win && matrix[2][0]==win){
		return win;
	}
	else if(matrix[0][0]==win && matrix[1][1]==win && matrix[2][2]==win){
		return win;
	}
	else if(matrix[1][0]==win && matrix[1][1]==win && matrix[1][2]==win){
		return win;
	}
	else if(matrix[2][0]==win && matrix[2][1]==win && matrix[2][2]==win){
		return win;
	}
	else if(matrix[0][1]==win && matrix[1][1]==win && matrix[2][1]==win){
		return win;
	}
	else if(matrix[0][2]==win && matrix[1][2]==win && matrix[2][2]==win){
		return win;
	}
	else if(matrix[0][2]==win && matrix[1][1]==win && matrix[2][0]==win){
		return win;
	}
	else{
		return '%';
	}
	//player2 (x)
}
int main(){
	while(1){
		restart:
		system("cls");
		draw();
	    input();
	    if(((matrix[0][0]=='0' || matrix[0][0]=='x' )&& (matrix[0][1]=='0' || matrix[0][1]=='x' )&& (matrix[0][2]=='0' || matrix[0][2]=='x'))&& ((matrix[2][0]=='0' || matrix[2][0]=='x') &&( matrix[2][1]=='0' || matrix[2][1]=='x' ) && (matrix[1][2]=='0' || matrix[1][2]=='x')) && ((matrix[2][0]=='0' || matrix[2][0]=='x' )&&( matrix[2][1]=='0' || matrix[2][1]=='x' )&&( matrix[2][2]=='0' || matrix[0][2]=='x'))){
	    	cout<<"Game is Draw!!! play again...!";
	    	cout<<"\n\n\nPress 5 to play again: ";
	    	cin>>play;
	    	if(play==5){
	    	ch=0; 
            player='0';
            win='0';
            matrix[0][0]='1';
            matrix[0][1]='2';
            matrix[0][2]='3';
            matrix[1][0]='4';
            matrix[1][1]='5';
            matrix[1][2]='6';
            matrix[2][0]='7';
            matrix[2][1]='8';
            matrix[2][2]='9';
            goto restart;
			}
			else{
				break;
			}
		}
	    system("cls");
	    draw();
	    ch=winner();
	    if('0'==ch){
	    	system("color 2f");
	    	cout<<"\"0\" is winner!!!"<<endl;
	    	cout<<"==================================================================================================="<<endl;
			cout<<"develop by Raj_kushwaha\n"<<"Email: er.rajkush@gmail.com\n"<<"Enrollment number: 0199EC161019\n"<<"college: TiT-A,bhopal";
	    	cout<<"\n\n\nRestart the game press \"5\",  : ";
	    	cin>>again;
	    	 if(again==5){
	    		ch=0; 
                player='0';
                win='0';
                matrix[0][0]='1';
                matrix[0][1]='2';
                matrix[0][2]='3';
                matrix[1][0]='4';
                matrix[1][1]='5';
                matrix[1][2]='6';
                matrix[2][0]='7';
                matrix[2][1]='8';
                matrix[2][2]='9';
                goto restart;
			 }
			 else{
			 	break;
			 }
		}
		else if(ch=='x'){
			system("color 2f");
			cout<<"\"x\" is winner!!!"<<endl;
			cout<<"=================================================================================================="<<endl;
			cout<<"develop by Raj_kushwaha\n"<<"Email: er.rajkush@gmail.com\n"<<"Enrollment number: 0199EC161019\n"<<"college: TiT-A,bhopal";
			cout<<"\n\n\nRestart the game press \"5\": ";
	    	cin>>again;
	    	 if(again==5){
	    	    ch=0;
                player='0';
                win='0';
                matrix[0][0]='1';
                matrix[0][1]='2';
                matrix[0][2]='3';
                matrix[1][0]='4';
                matrix[1][1]='5';
                matrix[1][2]='6';
                matrix[2][0]='7';
                matrix[2][1]='8';
                matrix[2][2]='9';
                goto restart;
			 }
			 else{
			 	break;
			 }
		}
	    toggleplayer();
	}
	return 0;
}
