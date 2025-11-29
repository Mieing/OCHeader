@interface WCGetMainThreadUtil : NSObject

+ (struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *)getMainThreadStack;
+ (struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *)getMainThreadStackAndLockTraceIfWaiting:(void *)a0;
+ (struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *)getThreadStack:(void *)a0 andNextLockOwnerThread:(void *)a1;
+ (BOOL)isWaitingForUnfairLock:(unsigned long long)a0;
+ (BOOL)isWaitingForPthreadMutex:(unsigned long long)a0;
+ (BOOL)isWaitingForDispatchLock:(unsigned long long)a0;
+ (struct shared_ptr<MatrixThreadObject> { struct MatrixThreadObject *x0; struct __shared_weak_count *x1; })getUnfairLockOwner:(struct __darwin_mcontext64 { struct __darwin_arm_exception_state64 { unsigned long long x0; unsigned int x1; unsigned int x2; } x0; struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; } x1; struct __darwin_arm_neon_state64 { unsigned __int128 x0[32]; unsigned int x1; unsigned int x2; } x2; } *)a0;
+ (struct shared_ptr<MatrixThreadObject> { struct MatrixThreadObject *x0; struct __shared_weak_count *x1; })getPthreadMutexOwner:(struct __darwin_mcontext64 { struct __darwin_arm_exception_state64 { unsigned long long x0; unsigned int x1; unsigned int x2; } x0; struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; } x1; struct __darwin_arm_neon_state64 { unsigned __int128 x0[32]; unsigned int x1; unsigned int x2; } x2; } *)a0;
+ (struct shared_ptr<MatrixThreadObject> { struct MatrixThreadObject *x0; struct __shared_weak_count *x1; })getDispatchLockOwner:(struct __darwin_mcontext64 { struct __darwin_arm_exception_state64 { unsigned long long x0; unsigned int x1; unsigned int x2; } x0; struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; } x1; struct __darwin_arm_neon_state64 { unsigned __int128 x0[32]; unsigned int x1; unsigned int x2; } x2; } *)a0;

@end
