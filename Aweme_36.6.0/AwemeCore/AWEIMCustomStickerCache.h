@class NSString, AWEIMEmoticonThemeModel, AWEIMTaskPipelineNode;

@interface AWEIMCustomStickerCache : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (copy, nonatomic) NSString *lastUpdateTimeStampKey;
@property (copy, nonatomic) NSString *updateVersionStorageKey;
@property (copy, nonatomic) NSString *customCacheContextStorageKey;
@property (nonatomic) double expireInterval;
@property (copy, nonatomic) NSString *diskCachePath;
@property (nonatomic) long long customEmojiMaxCapacity;
@property (nonatomic) BOOL isInitFetching;
@property (nonatomic) BOOL isLoadMoreFetching;
@property (nonatomic) BOOL didFinishInitFetching;
@property (nonatomic) BOOL isListFetchComplete;
@property (nonatomic) BOOL hasChangedDataBeforInit;
@property (nonatomic) long long serverTotalCount;
@property (copy, nonatomic) NSString *updateVersion;
@property (nonatomic) long long stickerEnableStatus;
@property (retain, nonatomic) AWEIMTaskPipelineNode *rootNode;

+ (void)asyncGetDiskCacheListWithCachePath:(id)a0 completion:(id /* block */)a1;
+ (id)changeResponseModel:(id)a0;
+ (void)asyncUpdateDiskCacheListWithStickers:(id)a0 cachePath:(id)a1 competion:(id /* block */)a2;
+ (id)changeResponseToEmotionModels:(id)a0;
+ (void)asyncUpdateCustomCacheContext:(id)a0 cacheKey:(id)a1;
+ (void)asyncUpdateCustomListUpdateVersion:(id)a0 cacheKey:(id)a1;
+ (id)requestListWithCursor:(long long)a0 pagesize:(long long)a1 headerFieldContext:(id)a2 completion:(id /* block */)a3;
+ (void)p_fetchNextPageDataWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)diskCacheLoadNode;
+ (id)dataMapNode;
+ (id)dataProcessNode;
+ (id)updateDiskCacheNode;
+ (BOOL)isStickerExpired:(id)a0;
+ (id)sharedQueue;

- (id)initWithUserID:(id)a0;
- (void)deleteLocalCustomStickerResource:(id)a0 updateDisk:(BOOL)a1 postNotification:(BOOL)a2;
- (void)fetchNextPageDataWithContext:(id)a0;
- (void)fetchNextPageDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_processDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_addBatchLocalCustomStickerResource:(id)a0;
- (void)p_performDataChangeActionsAndSaveAfterDiskCacheLoadIfNeededWithUpdateDisk:(BOOL)a0 postNotification:(BOOL)a1 actions:(id /* block */)a2;
- (void)p_peakLocalCustomStickerResource:(id)a0;
- (void)p_deleteLocalCustomStickerResource:(id)a0;
- (void)p_updateDiskCacheAfterChangeActionsWithPostNotification:(BOOL)a0 updateDisk:(BOOL)a1;
- (void)loadDiskCache;
- (void)initialFetchRemoteListWithContext:(id)a0;
- (void)processInitDataWithResponse:(id)a0;
- (void)addLocalCustomStickerResource:(id)a0 updateDisk:(BOOL)a1 postNotification:(BOOL)a2;
- (void)addBatchLocalCustomStickerResource:(id)a0 updateDisk:(BOOL)a1 postNotification:(BOOL)a2;
- (void)peakLocalCustomStickerResource:(id)a0 updateDisk:(BOOL)a1 postNotification:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupPipeline;

@end
