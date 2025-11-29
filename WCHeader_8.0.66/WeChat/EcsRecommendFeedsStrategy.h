@interface EcsRecommendFeedsStrategy : WXPBGeneratedMessage

@property (nonatomic) unsigned int switchOption;
@property (nonatomic) unsigned int refreshFreq;
@property (nonatomic) unsigned int timingOfPreload;
@property (nonatomic) BOOL showReplaceButton;
@property (nonatomic) int timeGapOfLoadingFirst;

+ (void)initialize;

- (void)setTimeGapOfLoadingFirst:(int)a0;
- (int)timeGapOfLoadingFirst;
- (void)setShowReplaceButton:(BOOL)a0;
- (BOOL)showReplaceButton;
- (void)setTimingOfPreload:(unsigned int)a0;
- (unsigned int)timingOfPreload;
- (void)setRefreshFreq:(unsigned int)a0;
- (unsigned int)refreshFreq;
- (void)setSwitchOption:(unsigned int)a0;
- (unsigned int)switchOption;

@end
