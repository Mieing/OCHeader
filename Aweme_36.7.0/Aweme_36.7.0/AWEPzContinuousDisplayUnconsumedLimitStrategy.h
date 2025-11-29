@class NSString;

@interface AWEPzContinuousDisplayUnconsumedLimitStrategy : AWEPzContinuousDisplayUnconsumedTimingStrategy <AWEPzStrategyProtocol, AWEPzComponentLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postEventToComponent:(id)a0;
- (void)postRemoveEventToComponent:(id)a0;

@end
