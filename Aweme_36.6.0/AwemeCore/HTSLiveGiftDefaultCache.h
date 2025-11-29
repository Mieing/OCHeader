@class IESLiveCombineSubject, NSString, NSDictionary, NSMutableDictionary, IESLiveThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HTSLiveGiftDefaultCache : NSObject <HTSLiveGiftCache>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSString *designatedPath;
@property (retain) IESLiveThreadSafeDictionary *downlowdedGiftDict;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *lruCacheCleanerMap;
@property (nonatomic) BOOL lruCleanEnabled;
@property (copy, nonatomic) NSDictionary *lruCleanConfig;
@property (retain, nonatomic) IESLiveCombineSubject *onAssetDelete;
@property (retain, nonatomic) NSMutableDictionary *assetPoolConfig;
@property (nonatomic) BOOL enableAggregateClean;
@property (nonatomic) BOOL enableRegisterFileService;
@property (nonatomic) BOOL didCheckDirFlag;
@property (nonatomic) BOOL enableFixEqualPathLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSupportGiftsWithUseCache:(BOOL)a0;
- (void)updateAssetPoolConfig:(id)a0;
- (void)insertEffect:(id)a0 strategy:(id)a1 ignoreCache:(BOOL)a2;
- (id)getSupportGiftsWithUseDebugEffectPreview:(BOOL)a0;
- (void)asyncGetSupportGiftsWithUseDebugEffectPreview:(BOOL)a0 completion:(id /* block */)a1;
- (void)deleteResourceIfNeeded:(id)a0 trackParams:(id)a1;
- (void)deleteResourceSyncIfNeeded:(id)a0 trackParams:(id)a1;
- (void)accessEffect:(id)a0 strategy:(id)a1;
- (void)syncGiftStorageWithGiftsOptimize:(id)a0;
- (void)deleteAllResource;
- (id)getLiveGiftEffectsReportInfoWithVisitType:(long long)a0;
- (void)initializeLruCacheCleaner;
- (id)assetPathWithAssetID:(id)a0;
- (id)giftMd5PathWithModel:(id)a0;
- (void)createEmptyFetchFileIfNeedWithLocalAssets:(id)a0;
- (id)checkFlagsWithLocalAssets:(id)a0;
- (void)deleteResourceFlagWithAssetPath:(id)a0;
- (void)didRemoveEffect:(id)a0 withPath:(id)a1;
- (void)p_removeElementToDownlowdedGiftDictWithPath:(id)a0 giftId:(id)a1;
- (id)giftMd5PathWithResourceID:(id)a0 md5:(id)a1;
- (void)p_addNewElementToDownlowdedGiftDictWithPath:(id)a0 giftId:(id)a1;
- (id)cleanerWithStrategy:(id)a0;
- (id)lruCleaner:(id)a0;
- (id)initWithDispatchQueue:(id)a0 designatedPath:(id)a1;
- (void)setPath:(id)a0 forId:(id)a1;
- (id)giftResourcePathWithMd5:(id)a0;
- (BOOL)linkItemAtPath:(id)a0 toPath:(id)a1 resourceId:(id)a2;
- (void)trimEffect:(id)a0 whitelist:(id)a1;
- (id)cachePath;
- (void).cxx_destruct;
- (void)saveData;

@end
