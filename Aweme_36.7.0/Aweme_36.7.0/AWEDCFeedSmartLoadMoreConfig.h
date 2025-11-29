@interface AWEDCFeedSmartLoadMoreConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) id /* block */ isShowingSkeletonBlock;
@property (nonatomic) long long maxUnconsumedItemCount;
@property (nonatomic) long long minUnconsumedScreenCount;
@property (nonatomic) BOOL scrollVelocityDetectEnabled;
@property (copy, nonatomic) id /* block */ exhaustionDurationThresholdBlock;

- (void).cxx_destruct;

@end
