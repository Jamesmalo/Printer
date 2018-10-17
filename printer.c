//Include standard files and other header files (aka h files to your other files).
#include <stdlib.h>
#include <stdio.h>
#include "paperTray.h"
#include "copyjob.h"
#include "user.h"


//Define the printer
struct Printer{
  char name[32];
  PaperTray* trays[6];
  User* userDB[3];
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

  *u.pageCount = *u.pageCount + *cj.pages; //user page count

  *p.totalPagesPrinted = *p.totalPagesPrinted + *cj.pages; //total pages printed by printer


  int pagetotal = *cj.pages * *cj.quantity;  //decreasing amount of pages from printer
  int i = 0;
  int pagesLeft = pagetotal;

  while(pagesLeft>0){
    if(*p.trays[i].quantity >= 0 && papesLeft < *p.trays[i].quantity){
      //enough paper to print
      *p.trays[i].quantity = *p.trays[i].quantity - pagetotal;
      pagesLeft = 0;
    }
    else{
      //not enough paper in tray
      *p.trays[i].quantity = *p.trays[i].quantity - pagetotal;  
      if(pagetotal>0){
        *p.trays[i+1].quantity = *p.trays[i+1].quantity - pagetotal;
        pageLeft = 0;
      }
      else{
        pageLeft = 0;
      }
    }
    i++;
  }
    return 1;
}

int main(){
  //make users
  User u1= {"uno",0};
  User u2= {"two",1};
  User u3= {"three",2};

  User* Users[3] = {&u1,&u2,&u3} 

  //make copyJobs
  cj1 = {test1,1,1,"James Malo1"}
  cj2 = {test2,2,2,"James Malo2"}
  cj3 = {test3,3,3,"James Malo3"}
  cj4 = {test4,4,4,"James Malo4"}
  cj5 = {test5,5,5,"James Malo5"}
  cj6 = {test6,6,6,"James Malo6"}
  cj7 = {test7,7,7,"James Malo7"}
  cj8 = {test8,8,8,"James Malo8"}

  //make trays (6 trays)
  PaperTray T1  = {1,1000,1000};
  PaperTray T2  = {2,1000,1000};
  PaperTray T3  = {3,2000,2000};
  PaperTray T4  = {4,2000,2000};
  PaperTray T5  = {5,2000,2000};
  PaperTray T6  = {6,2000,2000};

  PaperTray* Trays[6] = {&T1,&T2,&T3,&T4,&T5,&T6}

  //make printer
  struct Printer1 = {"The Malo 3000",Trays,Users,10}

  //begin printing


  //print user page counts and total print page count.
  printf("\n%d",user[1].pageCount)
  printf("\n%d",user[1].totalPagesPrinted)

  //print printer status
  printf("\n%d",printerStatus(Printer1))

  //reload a tray
  printf("\n%d",reloadTray(Printer1,6))

  //ask again for a printerStatus
  printf("\n%d",printerStatus(Printer1))
}
