#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("jll4n");
MODULE_DESCRIPTION("driver V1.0");

static int __init virtualdriver_init(void){
    printk(KERN_INFO "virtualdriver init\n");
    return 0;
}

static void __exit virtualdriver_exit(void){
    printk(KERN_INFO "virtualdriver exit\n");
}

module_init(virtualdriver_init);
module_exit(virtualdriver_exit);  