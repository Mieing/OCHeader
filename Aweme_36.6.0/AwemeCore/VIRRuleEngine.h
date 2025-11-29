@class NSLock, NSMutableDictionary, VIRRuleUnitDispatchManager;

@interface VIRRuleEngine : NSObject

@property (retain, nonatomic) VIRRuleUnitDispatchManager *dispatchManager;
@property (retain, nonatomic) NSMutableDictionary *ruleDic;
@property (retain, nonatomic) NSMutableDictionary *timingDispatchPool;
@property (retain, nonatomic) NSMutableDictionary *endDelayPool;
@property (retain, nonatomic) NSMutableDictionary *endFrequencyPool;
@property (retain, nonatomic) NSLock *poolLock;

+ (id)shareInstance;

- (void)triggerTimingWithKey:(id)a0;
- (void)registerUnit:(id /* block */)a0 withKey:(id)a1;
- (void)commitRule:(id)a0 taskKey:(id)a1;
- (void)removeRuleWithTaskKey:(id)a0;
- (void)removeUnitWithKey:(id)a0;
- (void)registerUnitManager:(id)a0;
- (void)commitRule:(id)a0 taskKey:(id)a1 source:(unsigned long long)a2;
- (void)trackCreateWithRule:(id)a0 source:(unsigned long long)a1;
- (void)removeRuleWithTaskKey:(id)a0 reason:(unsigned long long)a1;
- (void)trackRemoveWithRule:(id)a0 reason:(unsigned long long)a1;
- (void)addTimingRule:(id)a0 toPool:(id)a1 timing:(id)a2;
- (void)removeTimingRule:(id)a0 fromPool:(id)a1 timing:(id)a2;
- (void)dispatchUnitWithTiming:(id)a0;
- (void)endDelayWithTiming:(id)a0;
- (void)endFrequencyWithTiming:(id)a0;
- (void)trackReadyWithRule:(id)a0 timing:(id)a1;
- (void)trackDispatchWithRule:(id)a0 timing:(id)a1 time:(long long)a2;
- (void)trackFinishWithRule:(id)a0 timing:(id)a1 state:(unsigned long long)a2 trackCount:(long long)a3;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (void)removeRule:(id)a0;

@end
