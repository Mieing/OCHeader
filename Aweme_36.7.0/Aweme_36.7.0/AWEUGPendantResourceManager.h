@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUGPendantResourceManager : HTSService <AWEPerfResourceCleanStrategy, AWEUGPendantResourceManagerProtocol>

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSMutableArray *uiIndentifys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *cacheVisitDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)loadWholeLottieFromModel:(id)a0 useDefault:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadAlphaVideoFromModel:(id)a0 useDefault:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadPNGImageFromModel:(id)a0 useDefaule:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadTaskCompleteLottieFromModel:(id)a0 completion:(id /* block */)a1;
- (void)loadLottieFromModel:(id)a0 useDefaule:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isResourceExisted:(id)a0;
- (void)preDownloadActivityResourceIfNeededWith:(id)a0;
- (id)resourceIdentifyFromModel:(id)a0;
- (double)cleanSizeWithExpiredDays:(long long)a0;
- (void)performAutomaticCleanUp;
- (void)performProactiveCleanUp;
- (void)performUltimateCleanUp;
- (void)performLoadDowngrade;
- (void)cleanRootFolder:(id)a0;
- (void)updateCacheVisitDictionaryWithKey:(id)a0 value:(id)a1;
- (void)setupResourceRootFolder:(id)a0;
- (id)lottieResourceDir:(id)a0;
- (id)lottieNamed:(id)a0 bundleName:(id)a1 formPath:(id)a2;
- (void)postResourceIsReadyNotify:(id)a0;
- (id)lottieZipFilePath:(id)a0;
- (void)ResourceDownloadNotify:(id)a0;
- (id)getPendantRootFolder;
- (void)downloadActivityResourceWith:(id)a0;
- (BOOL)isLottieResourceExisted:(id)a0;
- (void)loadDefaultLottieFromModel:(id)a0 completion:(id /* block */)a1;
- (void)downloadResourceWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
- (BOOL)isAlphaVideoResourceExisted:(id)a0;
- (void)loadDefaultAlphaVideoFromModel:(id)a0 completion:(id /* block */)a1;
- (id)alphaVideoNamed:(id)a0 fromDir:(id)a1;
- (BOOL)isTaskCompletedLottieResourceExisted:(id)a0;
- (void)downloadTaskCompletedLottieWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
- (BOOL)isPNGResourceExisted:(id)a0;
- (void)loadDefaultPNGImageFromModel:(id)a0 completion:(id /* block */)a1;
- (id)pngImagePath:(id)a0;
- (void)downloadLottieWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
- (void)downloadPNGWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
- (void)downloadAlphaVideoWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
- (void)handleAlphaVideoSourceWithModel:(id)a0;
- (double)calculateCleanSizeWithSafeIntervalInDay:(long long)a0;
- (void)cleanUpWithSafeIntervalInDay:(long long)a0;
- (id)uriOfUrl:(id)a0;
- (id)pngImageName:(id)a0;
- (id)getPendantDefaultRootFolder;
- (void).cxx_destruct;
- (id)init;

@end
