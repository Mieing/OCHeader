@class NSDictionary;

@interface BDPAppPreloadConfig : NSObject

@property (copy, nonatomic) NSDictionary *imagePreloadConfig;
@property (copy, nonatomic) NSDictionary *launchRoutePreloadConfig;
@property (nonatomic) BOOL disablePreloadWhenForeground;
@property (nonatomic) BOOL makeCommonForeground;

+ (id)preloadCacheConfig;
+ (BOOL)enablePreloadForMemoryCheckWithConfig:(id)a0;
+ (BOOL)enablePreloadRuntimeForMemoryLimitWithType:(long long)a0;
+ (id)appPreloadConfig;
+ (id)sharedInstance;

- (BOOL)imagePreloadEnable;
- (BOOL)metaUnUsable:(id)a0;
- (BOOL)launchRoutePreloadEnable;
- (id)launchRootPathWithStartPath:(id)a0 model:(id)a1;
- (long long)metaCacheMaxAge;
- (BOOL)needForceUpdate:(id)a0 maxAge:(long long)a1 metaCreateTime:(double)a2;
- (void).cxx_destruct;
- (id)init;

@end
