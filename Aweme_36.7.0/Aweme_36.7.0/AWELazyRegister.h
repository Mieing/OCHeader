@interface AWELazyRegister : NSObject

+ (id)lazyRegisterRunLogParams;
+ (void)evaluateLazyRegisterForModule:(id)a0;
+ (void)setFluencyABConfig:(id)a0;
+ (void)openPerformanceRunLog:(BOOL)a0;
+ (void)setShouldRecordPremainCodeDuration:(BOOL)a0;
+ (void)ensureSegmentInfoLoaded;
+ (void)evaluateLazyRegisterHandler:(id)a0;
+ (BOOL)doEvaluateLazyRegisterForKey:(id)a0 ofModule:(id)a1;
+ (void)addLazyFuncTimeInfo:(id)a0 fileInfo:(id)a1 duration:(double)a2;
+ (BOOL)doEvaluateLazyRegisterForModule:(id)a0 count:(unsigned long long *)a1;
+ (void)addLazyItemRunInfo:(id)a0 count:(long long)a1 costTime:(double)a2;
+ (id)lazyRunLogLock;
+ (id)lazyRunLogParams;
+ (id)sectionRunLogParams;
+ (void)savePremainCodeTimeCost2Local;
+ (void)preloadSegmentInfoAsync;
+ (void)evaluateLazyRegisterForKey:(id)a0 ofModule:(id)a1;
+ (BOOL)canEvaluateLazyRegisterForKey:(id)a0 ofModule:(id)a1;
+ (id)lazyRegisterKeysInModule:(id)a0;

@end
