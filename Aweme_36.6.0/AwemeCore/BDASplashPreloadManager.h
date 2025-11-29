@interface BDASplashPreloadManager : NSObject

+ (void)trackBeginRequest;
+ (id)updatePreloadRequestVersionInfo;
+ (void)preloadWithData:(id)a0;
+ (void)trackResponseWith:(id)a0 isSuccess:(BOOL)a1;
+ (id)updatePreloadVersionCacheWithData:(id)a0 models:(id)a1;
+ (void)preloadWithModels:(id)a0 expireAds:(id)a1;
+ (void)trackFirstLaunchRecallValid:(id)a0;
+ (void)downloadWithModels:(id)a0 expireAds:(id)a1;
+ (void)trackDownloadStartWithModel:(id)a0 isNecessary:(long long)a1 isRealtime:(long long)a2;
+ (void)trackDownloadEventWithModel:(id)a0 isSuccess:(BOOL)a1 downloadCount:(long long)a2 isNecessary:(long long)a3 isRealtime:(long long)a4;
+ (void)downloadTopViewResourceWithModel:(id)a0;
+ (void)downloadNormalCreativeResourceWithModel:(id)a0;
+ (BOOL)isTodayModel:(id)a0;
+ (id)extractSplashAdIdsFromVersionList:(id)a0;
+ (void)trackPreloadVersionListCacheMissedWithCid:(id)a0;
+ (void)trackPreloadRequestVersionList:(long long)a0 cacheNotExistSize:(long long)a1;
+ (void)trackPreloadVersionUpdate:(id)a0;
+ (void)preload;

@end
