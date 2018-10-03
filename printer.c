//Include standard files and other header files (aka h files to your other files).
#include <stdlib.h>
#include <stdio.h>
#include <paperTray.h>
#include <copyjob.h>
#include <user.h>


//Define the printer
struct Printer{
  char name[32];
  int trays[6];
  int *userDB[3];
  int totalPagesPrinted;

};

int trayStatus(Printer *p,int traynum){
  return *p.trays[traynum-1].quantity;
}

int reloadTray(Printer *p,int traynum){
  if(*p.trays[traynum-1].total == 2000){
    *p.trays[traynum-1].quantity = 2000;
  }
  else{
    *p.trays[traynum-1].quantity = 1000;
  }
  return 1;
}

int printerStatus(Printer *p){
  for(int i=0;i<6;i++){ 
    int total = total + *p.trays[i].quantity;
  }
  return total;

}

int print(Printer *p,User *u,CopyJob *cj){
  *u.pageCount = *u.pageCount + *cj.pages;
  *p.totalPagesPrinted = *p.totalPagesPrinted + *cj.pages;


  return 1;
}

int main(){
  //make users
  User u1= {"uno",0};
  User u2= {"two",1};
  User u3= {"three",2};

  //make copyJobs
  CopyJob1 = {test1,1,,James Malo}

  //make trays (6 trays)
  PaperTray T1  = {1,2000,2000};
  PaperTray T2  = {2,2000,2000};
  PaperTray T3  = {3,2000,2000};
  PaperTray T4  = {4,2000,2000};
  PaperTray T5  = {5,1000,1000};
  PaperTray T6  = {6,1000,1000};

  //make printer


  //begin printing


  //print user page counts and total print page count.


  //print printer status


  //reload a tray


  //ask again for a printerStatus

}
