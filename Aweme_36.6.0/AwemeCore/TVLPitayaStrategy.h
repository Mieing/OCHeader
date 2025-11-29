@class NSArray;

@interface TVLPitayaStrategy : TVLStrategyInLSS {
    NSArray *_triggerEventTypes;
    NSArray *_asyncTriggerEventTypes;
}

- (void)stopStrategy;
- (void)callStrategy:(id)a0;
- (void)startStrategy:(id)a0 async:(BOOL)a1;
- (void)startStrategy:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
