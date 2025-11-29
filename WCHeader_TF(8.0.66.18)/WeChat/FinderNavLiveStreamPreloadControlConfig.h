@interface FinderNavLiveStreamPreloadControlConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int fakeLoadingTimeMs;
@property (nonatomic) unsigned int prefechMinInterval;
@property (nonatomic) unsigned int clientMaxCacheTime;
@property (nonatomic) unsigned int clientSamllRefreshMaxTime;
@property (nonatomic) unsigned int disableNoReddotToSquarePredictPrefech;
@property (nonatomic) unsigned int noReddotToSquarePrefechEffectiveTime;
@property (nonatomic) unsigned int enableSquareOperDbOptimization;
@property (nonatomic) unsigned int enableSquareCoverPreloadOptimization;
@property (nonatomic) unsigned int disableNoReddotToSquarePrefech;
@property (nonatomic) unsigned int noReddotToSquarePrefechRetryInterval;
@property (nonatomic) unsigned int disableReddotToSquarePrefech;
@property (nonatomic) unsigned int disableToSquarePrefech;

+ (void)initialize;

@end
