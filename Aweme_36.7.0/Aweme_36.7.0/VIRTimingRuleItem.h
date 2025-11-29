@class NSString, VIRRuleTask, NSLock, NSMutableArray;

@interface VIRTimingRuleItem : NSObject

@property (nonatomic) long long performCount;
@property (retain, nonatomic) NSMutableArray *timerList;
@property (retain, nonatomic) NSLock *ruleLock;
@property (copy, nonatomic) NSString *timing;
@property (nonatomic) long long delay;
@property (copy, nonatomic) NSString *endDelayTiming;
@property (nonatomic) long long frequency;
@property (copy, nonatomic) NSString *endFrequencyTiming;
@property (nonatomic) long long priority;
@property (weak, nonatomic) VIRRuleTask *ruleModel;

+ (id)modelWithData:(id)a0 ruleModel:(id)a1;

- (long long)removeTimer;
- (void)triggerDispatchTimingWithPerformBlock:(id /* block */)a0;
- (long long)triggerEndDelayTiming;
- (long long)triggerEndFrequencyTiming;
- (id)initWithRuleModel:(id)a0;
- (BOOL)isFrequencyControlled;
- (void).cxx_destruct;
- (id)init;

@end
