@class DIRSConcurrentCollection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DIRSGlobalTimer : NSObject {
    NSObject<OS_dispatch_queue> *global_timer_queue;
    NSObject<OS_dispatch_source> *global_timer;
    DIRSConcurrentCollection *holder;
}

+ (id)globalTimer;

- (void)dp_addTimer:(id)a0;
- (void)dp_removeTimer:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)_timerTick;

@end
