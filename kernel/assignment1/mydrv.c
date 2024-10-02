#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

static int __init mydrv_init(void)
{
    printk(KERN_INFO "Simple mydrv is initialized.\n"); // KERN_INFO : 매크로 상수
    return 0;                                           // return 권장됨
}

static void __exit mydrv_exit(void)
{
    printk(KERN_INFO "Simple mydrv is extracted.\n");
}

module_init(mydrv_init);    //mydrv_init함수를 처음 실행시킴
module_exit(mydrv_exit);
//이하는 모듈 정보 기입 코드
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hansan Books");
MODULE_DESCRIPTION("Very Simple Device Driver Example");
MODULE_INFO(intree, "Y"); // 안넣으면 에러남