@class NSObject;
@protocol OS_dispatch_queue;

@interface TPTimer : NSObject

@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isrepeat;
@property double timeInterval;
@property (weak) id atarget;
@property (nonatomic) SEL aSelector;
@property (retain) id userInfo;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)timerQueue;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 queue:(id)a5;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;

- (id)init;
- (void)repeatSelector;
- (void)resume;
- (void)resumeAfterSec:(long long)a0;
- (void)pause;
- (void)invalidate;
- (void).cxx_destruct;

@end
