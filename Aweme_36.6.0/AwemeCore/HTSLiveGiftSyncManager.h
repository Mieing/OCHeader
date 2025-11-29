@class NSCountedSet, HTSLiveUnzipper, NSMutableDictionary, NSString, NSNumber, NSMutableArray, NSObject;
@protocol OS_dispatch_group, HTSLiveGiftCache, OS_dispatch_semaphore, OS_dispatch_queue, IESLiveEffectDownloadDelegate;

@interface HTSLiveGiftSyncManager : NSObject

@property (retain, nonatomic) HTSLiveUnzipper *unzipper;
@property (retain, nonatomic) NSMutableArray *synchedGifts;
@property (retain, nonatomic) NSMutableArray *downloadedGifts;
@property (retain, nonatomic) NSMutableDictionary *pendingGiftDic;
@property (retain, nonatomic) NSMutableDictionary *pendingDownloadNodeDict;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncGiftQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSString *designatedPath;
@property (copy, nonatomic) id /* block */ notifyBlock;
@property (nonatomic) BOOL occupiedEffectsEnabled;
@property (retain, nonatomic) NSCountedSet *occupiedEffects;
@property (nonatomic) BOOL enableAggregateClean;
@property (nonatomic) BOOL enableDownloadKeyWithMd5;
@property (nonatomic) BOOL enableuseTTNetDownload;
@property (nonatomic) BOOL enableDownResultOpt;
@property (retain, nonatomic) id<IESLiveEffectDownloadDelegate> downloader;
@property (retain, nonatomic) id<IESLiveEffectDownloadDelegate> downloaderStby;
@property (retain, nonatomic) id<HTSLiveGiftCache> cache;
@property (copy, nonatomic) id /* block */ willDownloadAsset;
@property (copy, nonatomic) id /* block */ didDownloadAsset;
@property (retain, nonatomic) NSNumber *maxConcurrentCount;

+ (id)sharedManager;

- (void)removeAllOccupiedAssets;
- (void)occupyAssets:(id)a0;
- (void)unoccupyAssets:(id)a0;
- (BOOL)existResourceWithID:(id)a0 md5:(id)a1;
- (void)syncGiftWithDownloadNode:(id)a0 filter:(id /* block */)a1 trackParams:(id)a2 complete:(id /* block */)a3;
- (void)synchGiftWithModel:(id)a0 downloader:(id)a1 atIndex:(long long)a2 cacheSaveSyncModel:(BOOL)a3 useDebugEffectPreview:(BOOL)a4 completed:(id /* block */)a5;
- (id)_allValidGifts;
- (void)batchSyncGiftWithModels:(id)a0 filter:(id /* block */)a1 useDebugEffectPreview:(BOOL)a2 progress:(id /* block */)a3 complete:(id /* block */)a4;
- (BOOL)shouldUseResultOpt;
- (void)handleRepeatMd5WithResourceKey:(id)a0 status:(unsigned long long)a1 duration:(double)a2 error:(id)a3;
- (BOOL)verifyLocal:(id)a0;
- (id)buildDownloadTaskInfoWithModel:(id)a0 error:(id)a1;
- (BOOL)verifyRemote:(id)a0 filePath:(id)a1;
- (void)deleteFileIfNeeded:(id)a0;
- (void)createEffectiveFlagFileWithDirPath:(id)a0;
- (void)batchSyncGiftWithModels:(id)a0 useDebugEffectPreview:(BOOL)a1 progress:(id /* block */)a2 complete:(id /* block */)a3;
- (id)resourcePathWithID:(id)a0 md5:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_reset;
- (id)initWithCachePath:(id)a0;

@end
