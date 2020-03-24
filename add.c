#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

MODULE_AUTHOR("HEMANTH");
MODULE_DESCRIPTION("THIS IS A SAMPLE PROGRAM");
MODULE_LICENSE("GPLV2");

int add(int x,int y);

EXPORT_SYMBOL(add);
int add(int x,int y)
{
	return x+y;
}

int add_init(void)
{
	printk("%s %s %d\n",__FILE__,__func__,__LINE__);
	return 0;
}

void add_exit(void)
{
	
	printk("%s %s %d\n",__FILE__,__func__,__LINE__);
}

module_init(add_init);
module_exit(add_exit);

