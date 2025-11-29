@interface AWEPerfRefineOpt3 : NSObject

+ (BOOL)gurdAsyncEnable;
+ (id)refineConfig;
+ (BOOL)lazyLoadEnable;
+ (BOOL)liveLaunchNormalTaskSpreadEnable;
+ (BOOL)poiLocationCacheEnable;
+ (double)poiLocationCacheDuration;

@end
