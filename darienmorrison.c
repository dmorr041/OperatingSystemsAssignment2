/* The following is a system call program to print out the current time
and date in military format */
#include<linux/linkage.h>
#include<linux/time.h>
#include<linux/sched.h>
asmlinkage long sys_darienmorrison(int panther_ID)
{
	/* Prmopt message */
	printk("sys_darienmorrison called from process %d with panther ID = %d.\n", current->pid, panther_ID);

	/* Display the current time */	
	struct timeval t;
	struct tm t2;

	do_gettimeofday(&t);
	time_to_tm(t.tv_sec, 0, &t2);

	printk("Current Time: %d:%2d:%d\n", t2.tm_hour-4, t2.tm_min, t2.tm_sec);
	printk("Current Date: %2d/%2d/%d", t2.tm_mon+1, t2.tm_mday, t2.tm_year+1900);

	return 0;
}
