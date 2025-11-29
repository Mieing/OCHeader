@class NSThread;

@interface KSCrashDeadlockMonitor : NSObject

@property (retain, nonatomic) NSThread *monitorThread;
@property BOOL awaitingResponse;

- (id)init;
- (void)cancel;
- (void)watchdogPulse;
- (void)watchdogAnswer;
- (void)handleDeadlock;
- (void)runMonitor;
- (void).cxx_destruct;

@end
