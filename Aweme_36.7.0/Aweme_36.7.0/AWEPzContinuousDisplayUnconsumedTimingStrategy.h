@class NSTimer, NSMutableArray, NSString;
@protocol AWEPzContinuousDisplayUnconsumedDataModelProtocol, AWEPzStrategyConfigProtocol;

@interface AWEPzContinuousDisplayUnconsumedTimingStrategy : NSObject <AWEPzStrategyProtocol, AWEPzComponentLifeCycleProtocol>

@property (nonatomic) BOOL isTiming;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *timingComponents;
@property (retain, nonatomic) id<AWEPzStrategyConfigProtocol> config;
@property (retain, nonatomic) id<AWEPzContinuousDisplayUnconsumedDataModelProtocol> dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)showComponent:(id)a0;
- (void)consumeComponent:(id)a0;
- (void)hideComponent:(id)a0;
- (id)executePriority;
- (void)postEventToComponent:(id)a0;
- (BOOL)setupDataModelWithConfig:(id)a0;
- (void)popComponentAndTryStartTimingIfNeed;
- (BOOL)removeTimingComponentIfNeed:(id)a0;
- (void)endTiming;
- (void)setupTimingComponentWithConfig:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)startTimerWithInterval:(double)a0;

@end
