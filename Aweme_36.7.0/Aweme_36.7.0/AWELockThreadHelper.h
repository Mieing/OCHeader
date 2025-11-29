@interface AWELockThreadHelper : NSObject

+ (void)enableSemaphoreLockOpt;
+ (void)findMainThreadLockAndChangeThreadPriortiy;
+ (void)recoverThreadPriortiy;
+ (unsigned long long)lockTypeForSymbol:(id)a0;
+ (void)trackMainThreadWaitLockInfo:(unsigned long long)a0;
+ (id)findLockOwnerThreadByLockType:(unsigned long long)a0 waitingThread:(unsigned int)a1;
+ (id)findOwnSemaphoreThreadForWaitingThread:(unsigned int)a0;
+ (void)hookSemaphore;
+ (void)upMainThreadPriortiy:(int)a0;

@end
