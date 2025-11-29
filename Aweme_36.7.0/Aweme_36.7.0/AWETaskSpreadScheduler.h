@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface AWETaskSpreadScheduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (getter=isRunning) BOOL running;
@property (retain, nonatomic) NSMutableArray *dispatchers;

+ (id)mainScheduler;

- (void)__setupTimer;
- (void)registTaskDispatcher:(id)a0;
- (void)__configIdleObserverOnDispatcher:(id)a0;
- (void)__loop;
- (void)__excuteDispatcherTask;
- (void)__fallIntoSleepIfNeeded;
- (void)unregistTaskDispatcher:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)wakeup;
- (void)sleep;

@end
