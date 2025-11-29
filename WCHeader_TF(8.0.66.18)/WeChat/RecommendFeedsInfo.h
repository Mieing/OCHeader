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

@end
