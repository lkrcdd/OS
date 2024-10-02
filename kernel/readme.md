# Kernel
### 기능
1. 하드웨어 관리 - kernel space에서만 하드웨어에 접근 가능
2. 시스템 리소스 분배
3. preemptive system -> interrupt가 가능함
    Preemption : the act of temporarily interrupting an executing task, with the intention of resuming it at a later time
4. task 단위 -> proccess와 thread를 구분하지 않고 부름

### mode & space
- kernel mode & space
    system call한 프로세스를 위해 코드 실행
    인터럽트 처리
- user mode & space
    system call을 통해 하드웨어 사용 가능

# device driver
특정 디바이스를 사용하기 위한 설치 프로그램
kernel space에 설치됨 -> kernel의 자료구조 및 함수에 접근 가능
커널 코드 : static해야 함. 실수 연산 x