@interface BDXThreadManager : NSObject

+ (void)dispatchAsyncHandlerForceOnBDXThread:(id /* block */)a0;
+ (void)checkMonitorQueue;

@end
