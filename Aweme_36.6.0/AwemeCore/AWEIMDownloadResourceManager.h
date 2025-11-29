@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMDownloadResourceManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphoreLock;

+ (BOOL)p_canDownloadAtColdLaunchWithInAdvance:(BOOL)a0 triggerType:(id)a1;
+ (BOOL)p_cacheImageReourceUseBDWebImageIfNeededWithReourceModel:(id)a0 needPrefetch:(BOOL)a1 prefetch12Urls:(id)a2 prefetchAllUrls:(id)a3;
+ (void)downloadAndUpdateReource:(id)a0 complete:(id /* block */)a1;
+ (void)p_autoDeleteReourceIfNeedWithResources:(id)a0 complete:(id /* block */)a1;
+ (void)p_migrateOldResourceIfNeedWithComplete:(id /* block */)a0;
+ (BOOL)shouldDownloadResource:(id)a0;
+ (void)p_addDownloadingResource:(id)a0;
+ (id)getDownloadResourceTypeRootPath:(unsigned long long)a0 name:(id)a1;
+ (id)getDownloadResourcePathWithModel:(id)a0;
+ (void)p_removeDownloadingResource:(id)a0;
+ (void)p_traceDownloadResult:(id)a0 error:(id)a1 tracker:(id)a2;
+ (void)__performWithLockIfNecessary:(id /* block */)a0;
+ (void)p_onResourceDownloadfinish:(id)a0;
+ (BOOL)isDownloadResourceExist:(id)a0;
+ (id)getDownloadResourceSubpathWithType:(unsigned long long)a0;
+ (BOOL)isDownloadResourceExist:(id)a0 forceCheck:(BOOL)a1;
+ (void)buildDownloadCacheDict;
+ (id)getDownloadResourceTypePath:(unsigned long long)a0;
+ (void)p_trackResourceDiskSize;
+ (void)checkAccessExpireFile:(id)a0;
+ (double)p_fileSizeOfDirectory:(id)a0;
+ (void)downloadAndUpdateResources:(id)a0;
+ (long long)getDownloadFinishCountWith:(id)a0;
+ (void)removeDownloadedResource:(id)a0;
+ (BOOL)isPreDownloadResourceWithInAdvance:(BOOL)a0 triggerType:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
