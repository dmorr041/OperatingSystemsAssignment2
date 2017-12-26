/* Darien Morrison */
/* COP 4610, Fall 2017 */

#include <linux/module.h>

static int hello_init(void)
{
	printk("Hello world, this is Darien Morrison\n");
	printk("Hello world, this is Darien Morrison 2\n");
	printk("Hello world, this is Darien Morrison 3\n");
	return 0;
}

static void hello_exit(void)
{
	printk("Goodbye world, this was Darien Morrison\n");
	printk("Goodbye world, this was Darien Morrison 2\n");
	printk("Goodbye world, this was Darien Morrison 3\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Darien Morrison");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello World, this is Darien Morrison");
