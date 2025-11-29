@interface AWEFeedReplaceIpadRotationStrategy : AWEFeedReplaceStrategy

@property (nonatomic) BOOL hasReplace;
@property (nonatomic) long long triggerFrequencyTimeThreshold;
@property (nonatomic) long long delayTrigger;
@property (nonatomic) double lastHorizontalTimeStamp;

- (void)deviceOrientationDidChange;
- (void)onStrategyInitWithConfig:(id)a0;
- (void)dealloc;

@end
