@interface AWEDCFeedStrategyDedupStatsConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) long long tabType;
@property (nonatomic) long long timeToReport;
@property (nonatomic) long long countToReport;
@property (nonatomic) BOOL enableUnconsumeSequence;

- (id)identifierAndPropertyName;

@end
