@class NSData;

@interface FinderLiveDiscoverPreloadConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL refreshPreloadConfig;
@property (nonatomic) unsigned long long preloadControlFlag;
@property (nonatomic) unsigned int preloadFeedEffectiveTime;
@property (nonatomic) unsigned long long preloadConfigEffectiveUnixTime;
@property (nonatomic) unsigned int preloadFreqLimitRetryDelayTime;
@property (retain, nonatomic) NSData *requestPreloadBuff;
@property (nonatomic) float clientPredictScoreThreshold;
@property (nonatomic) unsigned int noReddotPreloadSwitch;
@property (nonatomic) unsigned int noReddotPreloadRetryInterval;
@property (retain, nonatomic) NSData *noReddotRequestPreloadBuff;

+ (void)initialize;

@end
