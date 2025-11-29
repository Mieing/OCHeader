@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface UATimer : NSObject

@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) BOOL isCounting;

- (id)initWithDuration:(double)a0 completeBlock:(id /* block */)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)invalidateTimer;
- (void)dealloc;
- (void)fire;
- (void)createTimer;
- (void)releaseTimer;

@end
