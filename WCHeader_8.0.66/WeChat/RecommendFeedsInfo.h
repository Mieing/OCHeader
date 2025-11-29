@class OutBoxPullFeedsConfig;

@interface RecommendFeedsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int switchOption;
@property (nonatomic) unsigned int refreshFreq;
@property (nonatomic) unsigned int timingOfPreload;
@property (nonatomic) BOOL showReplaceButton;
@property (nonatomic) int timeGapOfLoadingFirst;
@property (retain, nonatomic) OutBoxPullFeedsConfig *outBoxPullFeedsConfig;
@property (nonatomic) unsigned int clickReplaceNotExposedSwitch;
@property (nonatomic) unsigned int negativeReplaceNotExposedSwitch;

+ (void)initialize;

- (void)setNegativeReplaceNotExposedSwitch:(unsigned int)a0;
- (unsigned int)negativeReplaceNotExposedSwitch;
- (void)setClickReplaceNotExposedSwitch:(unsigned int)a0;
- (unsigned int)clickReplaceNotExposedSwitch;
- (void)setOutBoxPullFeedsConfig:(id)a0;
- (id)outBoxPullFeedsConfig;
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
