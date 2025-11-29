@class NSTimer, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface _TTVideoEngineAppPerformance : NSObject {
    NSObject<OS_dispatch_queue> *_collectorQueue;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSTimer *scheduledTimer;

+ (id)shareInstance;

- (void)_resetScheduledTimer;
- (void)_tryToStopScheduledTimer;
- (void)_scheduledTimerEvent;
- (void)_tryToStartScheduledTimer;
- (void)_didEnterBackground;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)_willEnterForeground;

@end
