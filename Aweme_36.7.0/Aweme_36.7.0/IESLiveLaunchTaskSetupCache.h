@protocol IESLiveCacheOperation, IESLiveKTVCacheService;

@interface IESLiveLaunchTaskSetupCache : IESLiveBaseLaunchTask

@property (retain, nonatomic) id<IESLiveCacheOperation> cacheOperator;
@property (retain, nonatomic) id<IESLiveKTVCacheService> ktvService;

- (void)excute;
- (void).cxx_destruct;

@end
