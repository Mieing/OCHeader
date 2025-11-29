@class NSArray;

@interface BDUGLuckyMemoryMonitorSettingsEntryModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSArray *nativeScenes;
@property (nonatomic) BOOL enableCollectPageStart;
@property (nonatomic) BOOL enableCollectPageShow;
@property (copy, nonatomic) NSArray *feScenes;
@property (copy, nonatomic) NSArray *routerScenes;
@property (copy, nonatomic) NSArray *routerScenesParams;
@property (nonatomic) long long interval;
@property (nonatomic) long long memCollectMinDuration;
@property (nonatomic) long long strategy;
@property (nonatomic) long long memCollectDuration;
@property (nonatomic) int compareCount;
@property (nonatomic) double threshold;

- (void)fixInvalidValue;
- (void).cxx_destruct;

@end
