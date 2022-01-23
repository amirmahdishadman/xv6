#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
struct proc_info
{
    int pid;
    int memsize;;
};

int
main(int args, char *argv[])
{
struct proc_info* arr[200];
int a =fork();
for(int i=0;i<200;i++)
{
    struct proc_info* new;
    new = (struct proc_info *)malloc(sizeof(struct proc_info));
    new->pid=0;
    new->memsize=0;
    arr[i] = new;
}




proc_dump(*arr);

exit();


}