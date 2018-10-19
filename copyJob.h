#ifndef COPYJOB
#define COPYJOB

//Define a user
struct CopyJob{
    char name[40];
    int pages;
    int quantity;
    char content[512];
};

#endif //COPYJOB