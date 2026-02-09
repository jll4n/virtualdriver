#include <linux/module.h>
#include <linux/init.h>
#include <linux/netdevice.h>

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

int virtualdriver_open(struct net_device *dev){ //a test 
    printk(KERN_INFO "virtualdriver open\n");
    return 0;
}
// struct net_device *virtual_netdev;

module_init(virtualdriver_init);
module_exit(virtualdriver_exit);  