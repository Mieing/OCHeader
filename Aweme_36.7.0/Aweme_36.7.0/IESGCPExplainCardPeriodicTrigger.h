@class NSTimer;

@interface IESGCPExplainCardPeriodicTrigger : NSObject

@property (nonatomic) long long cycleMaxCount;
@property (nonatomic) double cycleInterval;
@property (nonatomic) long long currentCycleCount;
@property (retain, nonatomic) NSTimer *cycleTimer;
@property (copy, nonatomic) id /* block */ cycleTrigger;

- (id)initWithCycleMaxCount:(long long)a0 cycleInterval:(double)a1;
- (BOOL)canStartNextCycle;
- (void)startNextCycle;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
