@interface BDMonitorThreadManager : NSObject

+ (void)dispatchAsyncHandlerForceOnMonitorThread:(id /* block */)a0;
+ (void)dispatchAsyncHandlerForceOnMainThread:(id /* block */)a0;
+ (BOOL)isMonitorThread;
+ (void)dispatchSyncHandlerForceOnMainThread:(id /* block */)a0;
+ (void)dispatchForceAsyncOnMainThread:(id /* block */)a0;

@end
