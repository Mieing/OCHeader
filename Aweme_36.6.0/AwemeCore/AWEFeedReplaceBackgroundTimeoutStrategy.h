@interface AWEFeedReplaceBackgroundTimeoutStrategy : AWEFeedReplaceStrategy

@property (nonatomic) long long backgroundTimeInterval;
@property (nonatomic) double lastEnterBackgroundTimeStamp;

- (void)onStrategyInitWithConfig:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;

@end
