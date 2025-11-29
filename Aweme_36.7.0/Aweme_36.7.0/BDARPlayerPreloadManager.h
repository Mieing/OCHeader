@class NSString, NSMutableArray;

@interface BDARPlayerPreloadManager : NSObject <TTVideoEnginePreloadDelegate>

@property (retain, nonatomic) NSMutableArray *preloadedVids;
@property (retain, nonatomic) NSMutableArray *preloadingVids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPreload:(id)a0;
+ (void)removeExpiredCache;
+ (void)startPreloadWithVideoID:(id)a0;
+ (long long)playerResolutionWithVideoId:(id)a0 preferredResolution:(id)a1 supportedResolutions:(id)a2;
+ (BOOL)isPreloadWithVideoId:(id)a0;
+ (void)playerPreloadStatusMonitorWithError:(id)a0;
+ (void)startPreloadWithAdModel:(id)a0 finish:(id /* block */)a1;
+ (long long)playerResolutionWithVideoId:(id)a0;
+ (BOOL)enablePlayerPreloadOptimizeWithVideoId:(id)a0 withSDKAB:(id)a1;
+ (BOOL)enablePlayerPreloadOptimizeAtBannerWithVideoId:(id)a0 withSDKAB:(id)a1;
+ (id)sharedInstance;

- (void)playerConfig;
- (id)taskInfoWithDictionary:(id)a0;
- (void)savePreloadVids;
- (void)savePreloadInfo:(id)a0;
- (id)dicWithTaskInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
