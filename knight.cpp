#include "knight.h"

void display(int HP, int level, int remedy, int maidenkiss, int phoenixdown, int rescue) {
    cout << "HP=" << HP
        << ", level=" << level
        << ", remedy=" << remedy
        << ", maidenkiss=" << maidenkiss
        << ", phoenixdown=" << phoenixdown
        << ", rescue=" << rescue << endl;
}
bool Lancelot(int HP){
    if(HP==1) return false;
	for(int i=2;i<=sqrt(HP);i++) if(HP%i==0) return false;
	return true;
}
bool isAthur(int HP){
	if(HP==999) return true;
	else return false;
}
void getsmall(int &HP)
{
    if(HP>=5) HP/=5;
    else if(HP>0 && HP<5) HP=1;
}
void getlarge(int &HP,int maxHP)
{
    HP*=5;
    if(HP>maxHP) HP=maxHP;
}
void getfrog(int &level, int &certain_level)
{
    certain_level=level;
    level=1;
}
void getremedy(int &remedy){
    if(remedy<99) remedy++;
}
void getmaidenkiss(int &maidenkiss){
    if(maidenkiss<99) maidenkiss++;
}

void getphoenixdown(int &phoenixdown){
    if(phoenixdown<99) phoenixdown++;
}
void gethu(int &level, int certain_level){
    level=certain_level;
}
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}

void mg1(int &HP, int num[],int n){
    int maxi=-1111111,mini=111111;
    int pmax=-1,pmin=-1;
    for(int i=1;i<=n;i++){
        if(maxi<=num[i]){
            pmax=i;
            maxi=num[i];    
        }
        if(mini>=num[i]){
            pmin=i;
            mini=num[i];
        }
    }
    pmin--;
    pmax--;
    HP-=(pmin+pmax);
}
bool checkright(int num[],int n,int position){
    for(int i=position;i<n;i++){
        if(num[i]<=num[i+1]) return false;
    }
    return true;
}
bool checkleft(int num[],int n,int position){
    for(int i=1;i<position;i++){
        if(num[i]>=num[i+1]) return false;
    }
    return true;
}
void mg2(int &HP, int num[],int n){
      int top=-111111,ptop=-1;
    int mtx=-2,mti=-3;
    for(int i=1;i<=n;i++)
        if(top<=num[i]){
            ptop=i;
            top=num[i];
        }
    if(n==1){
        mtx=top;
        mti=0;
    }
    else if(ptop==1 && checkright(num,n,ptop)){
        mtx=top;
        mti=ptop;
    } else if(ptop==n && checkleft(num,n,ptop)){
        mtx=top;
        mti=ptop;
    } else if(checkright(num,n,ptop) && checkleft(num,n,ptop)){
        mtx=top;
        mti=ptop;
    }
    if(mti!=-3) mti--;
    HP-=(mtx+mti);
}
void mg3(int &HP, int num[],int n){
    int numt[100];
    for(int i=1;i<=n;i++){
        if(num[i]<0){
            numt[i]=-num[i];
        } else numt[i]=num[i];
        numt[i]=(17*numt[i]+9)%257;
    }
    int max=-999999,min=999999;
    int pmax=-1,pmin=-1;
    for(int i=1;i<=n;i++){
        if(max<numt[i]){
             max=numt[i];
             pmax=i;
        }
        if(min>numt[i]){
             min=numt[i];
             pmin=i;
        }
    }
    pmax--;
    pmin--;
    HP-=(pmin+pmax);
}
void mg4(int &HP, int num[], int n){
    int numt[100];
    for(int i=1;i<=n;i++){
        if(num[i]<0){
            numt[i]=-num[i];
        } else numt[i]=num[i];
        numt[i]=(17*numt[i]+9)%257;
    }
    int max=-999999,max2=-5;
    int pmax2=-7;
    if(numt[1]!=numt[2] && numt[1]!=numt[3])
    {
    for(int i=1;i<=3;i++){
        if(max<numt[i]){
             max=numt[i];
        }
    }
    for(int i=1;i<=3;i++){
        if(max2<numt[i]){
            if(numt[i]<max){
                max2=numt[i];
                pmax2=i;

            }
        }
    }}
    if(pmax2!=-7) pmax2--;
    HP-=(max2+pmax2);
}
void battle(int number,long long &noevent,int &HP, int &level, int &remedy, int &maidenkiss, int &phoenixdown,int &rescue, int maxHP)
{
        int b=number%10;
        int levelO;
        if(number>6){
            if(b>5) levelO=b; else levelO=5;
        } 
        else levelO=b;
        if(level>levelO  || Lancelot(maxHP) || isAthur(maxHP)){
            if(level<10){
                level++;
            }
        }
        if(level==levelO) return;
        if(level<levelO){
            double basedamage;
            switch (noevent){
            case 1:
                basedamage=1;
                break;
            case 2:
                basedamage=1.5;
                break;
            case 3:
                basedamage=4.5;
                break;
            case 4:
                basedamage=7.5;
                break;
            case 5:
                basedamage=9.5;
                break;
        }
        int damage=basedamage*levelO*10;
        HP-=damage;
        if(HP<=0) if(phoenixdown>0){
            HP=maxHP;
            phoenixdown--;
        } else rescue=0;
}}
void Shaman(int number,int &HP, int &level, int &remedy, int &maidenkiss, int &phoenixdown, int maxHP,int &besmall,int &befrog,int noe)
{
    int b=number%10;
        int levelO;
        if(number>6){
            if(b>5) levelO=b; else levelO=5;
        } 
        else levelO=b;
        if(level>levelO  || Lancelot(maxHP) || isAthur(maxHP)){
            if(level<10){
                level+=2;
                if(level>10) level=10;
            }
        
        }if(level<levelO){
            if(remedy>0){
                HP=maxHP;
                remedy--;}
            else{ getsmall(HP);besmall=noe+3;}
        }}
void SirenVajsh(int number,int &HP, int &level, int &remedy, int &maidenkiss, int &phoenixdown, int maxHP, int &certain_level,int &besmall,int &befrog,int noe){

       int b=number%10;
        int levelO;
        if(number>6){
            if(b>5) levelO=b; else levelO=5;
        } 
        else levelO=b;
        if(level>levelO  || Lancelot(maxHP) || isAthur(maxHP)){
            if(level<10){
                level+=2;
                if(level>10) level=10;
            }}
        if(level<levelO){
            if(maidenkiss>0){
                maidenkiss--;}
            else{ getfrog(level,certain_level);befrog=noe+3;}
        }  
}
int buffHP(int n2,int &HP){
    int sum=0;
    int bHP=99;
    for(int i=0;i<n2;i++){
        sum+=(bHP-i*2);
    }
    return sum;
}
bool primeHP(int HP){
    if(HP==1) return false;
    for(int i=2;i<=sqrt(HP);i++){
        if(HP%i==0) return false;
    }
    return true;
}
void MushMario(int numofevent,int level, int phoenixdown,int &HP,int maxHP){
    int n2=((level+phoenixdown)%5+1)*3;
    HP+=(buffHP(n2,HP)%100);
    int current_HP=HP;
    int i=1;
    while(HP<=current_HP){
        if(primeHP(i)) HP=i;
        i++;
    }
    if(HP>maxHP) HP=maxHP;
}
void MushFibo(int &HP){
    int current_HP=HP;
    if(HP>1){
        int i=3;
        for(int i=16;i>=1;i--){
            if(fibonacci(i)<current_HP){
                HP=fibonacci(i);
                return;
        }}
    }
}
void Mushghost(string file_mush_ghost, int number, int &HP,int &phoenixdown,int &rescue,int maxHP){
    int num[100],n;
    ifstream f;
    f.open(file_mush_ghost);
    string line_1;
    getline(f,line_1);
    stringstream l1(line_1);
    l1>>n;
    for(int i=1;i<=n;i++){
        string tmp;
        getline(f,tmp,',');
        num[i]=stoi(tmp);
    }
    string arr_of_event=to_string(number);
    int i=2;
    while(i<arr_of_event.length()){
        if(arr_of_event[i]=='1') mg1(HP,num,n);
        if(arr_of_event[i]=='2') mg2(HP,num,n); 
        if(arr_of_event[i]=='3') mg3(HP,num,n);
        if(arr_of_event[i]=='4') mg4(HP,num,n);
        i++;
        if(HP>maxHP) HP=maxHP;
        if(HP<=0 && phoenixdown>0){
            HP=maxHP;
            phoenixdown--;
        }else if(HP<=0 && phoenixdown==0){
            rescue=0;
        }
        if(rescue==1 || rescue == 0) return;
    }
}
void Bowser(int &level,int HP,int &rescue){
    if(isAthur(HP)){
        level=10;
    } else if(Lancelot(HP) && level >=8){
        level=10;
    } else if(level==10) return;
     else rescue=0;
}
void Asclepius(string file_asclepius_pack, int &remedy,int &maidenkiss,int &phoenixdown,int &pass_Asclepius){
    ifstream f;
    int r1,c1,d[100][100];
    f.open(file_asclepius_pack);
    string line_1;
    getline(f,line_1);
    stringstream l1(line_1);
    l1>>r1;
    string line_2;
    getline(f,line_2);
    stringstream l2(line_2);
    l2>>c1;
    for(int i=1;i<=r1;i++){
        string line_n;
        getline(f,line_n);
        stringstream s(line_n);
        for(int j=1;j<=c1;j++){
            s>>d[i][j];
        }
    }
    for(int i=1;i<=r1;i++){
        int cantake=0;
        for(int j=1;j<=c1;j++){
            if(cantake!=3){
                if(d[i][j]==16 && remedy<99){
                    remedy++;
                    cantake++;
                }
                if(d[i][j]==17 && maidenkiss<99){ 
                    maidenkiss++;
                    cantake++;
                }
                if(d[i][j]==18 && phoenixdown<99){
                    phoenixdown++;
                    cantake++;
                }
            
            }
        }
    }
    pass_Asclepius=1;
}
bool maxcharmingpack(string pack){
    if(pack.find("merlin") < pack.length() || pack.find("Merlin") < pack.length()) return true;
    else return false;
}
bool charmingpack(string pack){
    bool M=false,e=false,r=false,l=false,i=false,n=false;
    if(pack.find("m")<pack.length() || pack.find("M")<pack.length()) M=true;
    if(pack.find("e")<pack.length() || pack.find("E")<pack.length()) e=true;
    if(pack.find("r")<pack.length() || pack.find("R")<pack.length()) r=true;
    if(pack.find("l")<pack.length() || pack.find("L")<pack.length()) l=true;
    if(pack.find("i")<pack.length() || pack.find("I")<pack.length()) i=true;
    if(pack.find("n")<pack.length() || pack.find("N")<pack.length()) n=true;
    if(M && e && r && l && i && n) return true;
    else return false;
}
void Merlin(string inputfile, int &HP,int maxHP,int &pass_Merlin){
    ifstream f;
    int n;
    string pack[100];
    f.open(inputfile);
    string line;
    getline(f,line);
    stringstream tmp(line);
    tmp>>n;
    for(int i=1;i<=n;i++){
        string line;
        getline(f,line);
        pack[i]=line;
    }
    for(int i=1;i<=n;i++){
        if(maxcharmingpack(pack[i])){
            HP+=3;
            if(HP>maxHP) HP=maxHP;
        }else{
            if(charmingpack(pack[i])){
                HP+=2;
                if(HP>maxHP) HP=maxHP;
            }
        }
    }
    pass_Merlin=1;
}
void getValue(string file_input, int & HP, int & level, int & remedy, int &maidenkiss, int &phoenixdown, int &noe, long long event[],string &ioe1,string &ioe2, string &ioe3,int &maxHP)
{
    ifstream f;
    f.open(file_input);
    string line1;
    getline(f,line1);
    stringstream l1(line1);
    l1>>HP>>level>>remedy>>maidenkiss>>phoenixdown;
    maxHP=HP;
    string line2;
    getline(f,line2);
    stringstream l2(line2);
    long long tmp;
    while(l2>>tmp){
        event[noe]=tmp;
        noe++;
    }
    getline(f,ioe1,',');
    getline(f,ioe2,',');
    getline(f,ioe3,',');
}

void adventureToKoopa(string file_input, int & HP, int & level, int & remedy, int & maidenkiss, int & phoenixdown, int & rescue) {
    long long event[1000];
    int maxHP,besmall=-1,befrog=-1,certain_level;
    int noe=1, pass_Asclepius=0,pass_Merlin=0;
    string ioe1,ioe2,ioe3;
    rescue=-1;
    getValue(file_input,HP,level,remedy,maidenkiss,phoenixdown,noe,event,ioe1,ioe2,ioe3,maxHP);
    for(int i=1;i<noe;i++)
    {
        if(rescue==0 || rescue==1){
            return;
        }
        if(HP<=0){
            rescue=0;
            display(HP,level,remedy,maidenkiss,phoenixdown,rescue);
            return;
        }
        if(event[i]==0){
            rescue=1;
            display(HP,level,remedy,maidenkiss,phoenixdown,rescue);
            return;
        }
        if(event[i]>=1 && event[i]<=5) battle(i,event[i],HP,level,remedy,maidenkiss,phoenixdown,rescue,maxHP);
        else if(event[i]==6 && befrog==-1 && besmall==-1) Shaman(i,HP,level,remedy,maidenkiss,phoenixdown,maxHP,besmall,befrog,i);
        else if(event[i]==7 && befrog==-1 && besmall==-1) SirenVajsh(i,HP,level,remedy,maidenkiss,phoenixdown,maxHP, certain_level,besmall,befrog,i);
        else if(event[i]==11) MushMario(event[i],level,phoenixdown,HP,maxHP); 
        else if(event[i]==12) MushFibo(HP);
        else if(event[i]==15) getremedy(remedy);
        else if(event[i]==16) getmaidenkiss(maidenkiss);
        else if(event[i]==17) getphoenixdown(phoenixdown);  
        else if(event[i]==99) Bowser(level,HP,rescue);
        else if(event[i]==18 && pass_Merlin==0) Merlin(ioe3,HP,maxHP,pass_Merlin);
        else if(event[i]==19 && pass_Asclepius==0) Asclepius(ioe2,remedy,maidenkiss,phoenixdown,pass_Asclepius);
        else if(event[i]>99) Mushghost(ioe1,event[i],HP,phoenixdown,rescue,maxHP);
        if(befrog==i){
             gethu(level,certain_level);
             befrog=-1;
        }
        if(besmall==i) {
            getlarge(HP,maxHP);
            besmall=-1; 
        }
        if(befrog!=-1 && maidenkiss>0){
            maidenkiss--;
            gethu(level, certain_level);
            befrog=-1;
        }
        if(besmall!=-1 && remedy>0){
            getlarge(HP,maxHP);
            remedy--;
            besmall=-1;
        }
        if(i==noe-1 && rescue!=0){
            rescue=1;
            display(HP,level,remedy,maidenkiss,phoenixdown,rescue);
        } else
        display(HP,level,remedy,maidenkiss,phoenixdown,rescue);
    }
}



