obj-m += mydrv.o
all:						# 괄호 안의 명령어를 수행하고 그 결과를 기입한다
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean