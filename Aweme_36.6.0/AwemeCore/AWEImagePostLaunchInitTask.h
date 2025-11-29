@class NSString;

@interface AWEImagePostLaunchInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prf_execute;
+ (void)setupMonitorWithConfig:(id)a0;
+ (void)setupDynamicCacheStrategy;
+ (void)setupDynamicIndividualCacheStrategyWithConfig:(id)a0 memoryLevel:(int)a1 systemLevel:(int)a2;
+ (void)CPUDidFallback;
+ (void)setupYYCacheConfig;
+ (void)setupBDCacheConfigWithConfig:(id)a0;
+ (void)setupMemoryConfig:(id)a0 cacheConfig:(id)a1;
+ (void)setupDiskConfig:(id)a0 cacheConfig:(id)a1;
+ (void)setupAWEConfig:(id)a0 cacheConfig:(id)a1;
+ (void)execute;


@end
