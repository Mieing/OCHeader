@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface AWEApplogDynamicFreqGeneralStrategy : AWEApplogDynamicFreqStrategy

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) double timerPollInterval;

- (void)onStrategyInit;
- (id)initWithStrategyName:(id)a0 config:(id)a1 delegate:(id)a2;
- (void)startTimerPolling;
- (void)updateValidState;
- (void).cxx_destruct;
- (id)description;

@end
