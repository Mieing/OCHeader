@class NSString;

@interface AWEPzContinuousDisplayUnconsumedDownGradeLimitStrategy : AWEPzContinuousDisplayUnconsumedTimingStrategy <AWEPzStrategyProtocol, AWEPzComponentLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postDownGradeEventToComponent:(id)a0;
- (void)postEventToComponent:(id)a0;
- (BOOL)setupDataModelWithConfig:(id)a0;

@end
