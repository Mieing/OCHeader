@interface BDPNativeGameMemoryWarningMonitor : NSObject

+ (void)unregisterMemoryWarningTimerWithUniqueID:(id)a0;
+ (void)registerMemoryWarningTimerWithUniqueID:(id)a0 warningBlock:(id /* block */)a1;
+ (void)reportMemoryWarningWithType:(id)a0 rate:(float)a1 systemWarning:(BOOL)a2 uniqueID:(id)a3;
+ (void)invokeWarningBlockWithLevel:(unsigned long long)a0;
+ (void)registerMemoryWarningTimerWithUniqueID:(id)a0 warningBlock:(id /* block */)a1 isWarning:(BOOL)a2;
+ (void)didReceiveMemoryWarning;

@end
