@class NSString, NSTimer, BDPThreadSafeDictionary, BDPThreadSafeArray;

@interface BDPVideoContainerPreloadManager : NSObject <BDPAppConfigLoadProtocol>

@property (retain, nonatomic) BDPThreadSafeDictionary *preloadVideoContainers;
@property (retain, nonatomic) BDPThreadSafeArray *preloadVideoApps;
@property (retain, nonatomic) NSTimer *cleanTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)didPreloadAppConfig:(id)a0 withSchema:(id)a1 model:(id)a2;
+ (void)didLoadAppConfig:(id)a0 withSchema:(id)a1 model:(id)a2;
+ (long long)preloadDuration:(id)a0;
+ (id)preloadedVideoContainerWithUniqueID:(id)a0;
+ (void)removeVideoContainerWithUniqueID:(id)a0;
+ (id)appConfigWithModel:(id)a0;
+ (id)sharedManager;

- (void)receiveMemoryWarningNotification:(id)a0;
- (void)setupAutoClean;
- (long long)getCacheCountLimit;
- (id)preloadVideoContainerWithConfig:(id)a0 model:(id)a1 path:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;

@end
