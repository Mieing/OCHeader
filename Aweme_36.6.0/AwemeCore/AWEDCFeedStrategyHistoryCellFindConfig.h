@interface AWEDCFeedStrategyHistoryCellFindConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableMobCardPosOffset;
@property (nonatomic) long long hideRecallDelayMillis;
@property (nonatomic) long long showToastCount;
@property (nonatomic) double historyCardVisiblePercent;
@property (nonatomic) long long historyCardNum;
@property (nonatomic) long long realHistoryCardNum;
@property (nonatomic) BOOL playableCardInHistoryCard;
@property (nonatomic) BOOL historyCellAlreadyInsert;

- (void)setupDefaultConfig;
- (id)identifierAndPropertyName;

@end
