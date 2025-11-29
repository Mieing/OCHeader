@interface HMDWPUtility : NSObject

+ (void)protectObject:(id)a0 slector:(SEL)a1 skippedDepth:(unsigned long long)a2 waitFlag:(struct atomic_flag { _Atomic BOOL x0; } *)a3 syncWaitTime:(double)a4 exceptionTimeout:(double)a5 exceptionCallback:(id /* block */)a6 protectBlock:(id /* block */)a7;
+ (void)protectClass:(Class)a0 slector:(SEL)a1 skippedDepth:(unsigned long long)a2 waitFlag:(struct atomic_flag { _Atomic BOOL x0; } *)a3 syncWaitTime:(double)a4 exceptionTimeout:(double)a5 exceptionCallback:(id /* block */)a6 protectBlock:(id /* block */)a7;
+ (void)protectSyncWaitTime:(double)a0 exceptionTimeout:(double)a1 exceptionCallback:(id /* block */)a2 protectBlock:(id /* block */)a3 skippedDepth:(unsigned long long)a4 waitFlag:(struct atomic_flag { _Atomic BOOL x0; } *)a5 protectSelectorBlock:(id /* block */)a6;

@end
