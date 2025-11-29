@class BUThreadSafeMutableArray, NSOperationQueue, BUReachability;

@interface CSJRewardedVideoPreloader : NSObject

@property (retain, nonatomic) BUReachability *reachability;
@property (retain, nonatomic) BUThreadSafeMutableArray *cachesArr;
@property (retain, nonatomic) BUThreadSafeMutableArray *splashCachesArr;
@property (retain, nonatomic) NSOperationQueue *rewardQueue;
@property (nonatomic) BOOL isQueueLoading;
@property (nonatomic) BOOL isWaiting;

+ (id)sharedPreloader;

- (void)removeOldCacheFile;
- (void)_loadBrandVideoFileWithMaterial:(id)a0 urlStr:(id)a1 fileHash:(id)a2 effectiveTime:(double)a3 expirationTime:(double)a4 loadSize:(long long)a5 adSlotAdType:(long long)a6 success:(id /* block */)a7 failure:(id /* block */)a8;
- (id)cachedVideoLocalURLWithUrl:(id)a0 fileHash:(id)a1 adSlotAdType:(long long)a2;
- (void)addCachedVideoUrl:(id)a0 fileHash:(id)a1 adSlotAdType:(long long)a2;
- (void)finishDownloadSpeedTrackerWithUrl:(id)a0 loadSize:(long long)a1 error:(id)a2;
- (id)fileNameWithVideoUrl:(id)a0 fileHash:(id)a1;
- (id)cacheVideoRootFileWithAdSlotAdType:(long long)a0;
- (long long)maxPreloadCountWithAdType:(long long)a0;
- (long long)limitPreloadCountWithAdType:(long long)a0;
- (BOOL)shouldPreloadVideoWithRit:(id)a0 adSlotAdType:(long long)a1;
- (id)cachedBrandVideoLocalURLWithUrl:(id)a0 fileHash:(id)a1;
- (id)_brandVideoCachedFileNameWithUrl:(id)a0 fileHash:(id)a1 effectiveTime:(double)a2 expirationTime:(double)a3;
- (id)_brandVideoCachePath;
- (void)_startDownloadWithDownloadTask:(id)a0 materialMeta:(id)a1 url:(id)a2 adSlotAdType:(long long)a3;
- (void)removeOldCacheFileWithPath:(id)a0;
- (id)filePathWithUrl:(id)a0 fileHash:(id)a1 adSlotAdType:(long long)a2;
- (id)_brandVideouCacheRootPath;
- (void)loadBrandVideoFileWithMaterial:(id)a0 adSlotAdType:(long long)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)preloadVideoFileWithMaterial:(id)a0 adSlotAdType:(long long)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)deleteLocalVideoWithAdSlotAdType:(long long)a0;
- (void)resumeLoadingQueue;
- (void)suspendedLoadingQueue;
- (void).cxx_destruct;
- (void)connectionChanged:(id)a0;
- (id)init;
- (void)dealloc;

@end
