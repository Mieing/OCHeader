@class NSObject;
@protocol OS_dispatch_queue;

@interface NunkiWatchdogManager : NSObject {
    int enable;
    int lastNotifyLevel;
    NSObject<OS_dispatch_queue> *innerQueue;
    double usleepTime;
    int WeakTime;
    int CriticalTime;
}

+ (id)sharedInstance;

- (void)addObserverUsingBlock:(id /* block */)a0;
- (void)beginANRDetect;
- (void)postNotificationWithLevel:(int)a0;
- (int)getCurrentLevel;
- (void).cxx_destruct;
- (void)start;
- (void)setupConfig;

@end
