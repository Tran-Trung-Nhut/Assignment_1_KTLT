#ifndef __KNIGHT_H__
#define __KNIGHT_H__

#include "main.h"

void display(int HP, int level, int remedy, int maidenkiss, int phoenixdown, int rescue);
bool Lancelot (int HP);
bool isAthur(int HP);
void getsmall(int &HP,int maxHP);
void getlarge(int &HP,int maxHP);
void getfrog(int &level, int &certain_level);
void getremedy(int &remedy);
void getmaidenkiss(int &maidenkiss);
void getphoenixdown(int &phoenixdown);
void gethu(int &level, int certain_level);
int fibonacci(int n);
void mg1(int &HP, int num[],int n);
bool checkright(int num[],int n,int position);
bool checkleft(int num[],int n,int position);
void mg2(int &HP, int num[],int n);
void mg3(int &HP, int num[],int n);
void mg4(int &HP, int num[], int n);
void battle(int number,long long &noevent,int &HP, int &level, int &remedy, int &maidenkiss, int &phoenixdown,int &rescue, int maxHP);
void Shaman(int number,int &HP, int &level, int &remedy, int &maidenkiss, int &phoenixdown, int maxHP,int &besmall,int &befrog,int noe);
void SirenVajsh(int number,int &HP, int &level, int &remedy, int &maidenkiss, int &phoenixdown, int maxHP, int &certain_level,int &besmall,int &befrog,int noe);
int buffHP(int n2,int &HP);
bool primeHP(int HP);
void MushMario(int numofevent,int level, int phoenixdown,int &HP,int maxHP);
void MushFibo(int &HP);
void Mushghost(string file_mush_ghost, int number, int &HP,int &phoenixdown,int &rescue,int maxHP);
void Bowser(int &level,int HP,int &rescue);
void Asclepius(string file_asclepius_pack, int &remedy,int &maidenkiss,int &phoenixdown,int &pass_Asclepius);
bool maxcharmingpack(string pack);
bool charmingpack(string pack);
void Merlin(string inputfile, int &HP,int maxHP,int &pass_Merlin);
void getValue(string file_input, int & HP, int & level, int & remedy, int &maidenkiss, int &phoenixdown, int &noe, long long event[],string &ioe1,string &ioe2, string &ioe3,int &maxHP);
void adventureToKoopa(string file_input, int & HP, int & level, int & remedy, int & maidenkiss, int & phoenixdown, int & rescue);

#endif // __KNIGHT_H__