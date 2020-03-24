#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>


MODULE_AUTHOR("HEMANTH");
MODULE_DESCRIPTION("THIS IS A SAMPLE PROGRAM");
MODULE_LICENSE("GPLV2");

int add(int,int);

int a=5,b=10;
module_param(a,int,0);
module_param(b,int,0);

int avg_init(void)
{
	printk("%s %s %d\n",__FILE__,__func__,__LINE__);
	printk("add=%d\n",add(a,b));
	return 0;
}

void avg_exit(void)
{
	
	printk("%s %s %d\n",__FILE__,__func__,__LINE__);
}

module_init(avg_init);
module_exit(avg_exit);

