@class MMTimer;

@interface MMLivePauseTimer : NSObject

@property (nonatomic) long long startTime;
@property (nonatomic) long long accumulatedTime;
@property (retain, nonatomic) MMTimer *timer;
@property (copy, nonatomic) id /* block */ progressBlock;

- (id)init;
- (id)initWithAccumulatedTime:(long long)a0;
- (void)start;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)countup;
- (void)_adjustStartTimeWithAccumulatedTime:(long long)a0;
- (void)_adjustAccumulatedTimeForResume;
- (void)adjustAccumulatedTime:(long long)a0;
- (void)adjustAccumulatedTimeIfNeeded:(long long)a0;
- (void)adjustAccumulatedTimeIfNeeded:(long long)a0 adjustedMin:(long long)a1 adjustedMax:(long long)a2;
- (void)notifyProgress;
- (void).cxx_destruct;

@end
