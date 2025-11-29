@class ACCEditBeautyEffectDownloaderConfig, NSString, NSTimer, NSOperationQueue, NSHashTable, NSMutableArray;

@interface ACCEditBeautyEffectDefaultDownloader : NSObject <ACCEditBeautyEffectDownloaderProtocol>

@property (retain, nonatomic) ACCEditBeautyEffectDownloaderConfig *config;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) NSMutableArray *toBeNotifiedEffectIds;
@property (retain, nonatomic) NSTimer *notifyTimer;
@property (nonatomic) BOOL needUpdateEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadEffects:(id)a0 completion:(id /* block */)a1;
- (void)fetchResponseFromCacheWithCompletion:(id /* block */)a0;
- (void)downloadEffectListWithCompletion:(id /* block */)a0 downloadOption:(id)a1;
- (BOOL)p_checkShouldIgnoreCacheForRequestOpt;
- (void)p_downloadEffectList:(id /* block */)a0;
- (id)checkupdateExtraParams;
- (BOOL)responseDataIsUseful:(id)a0;
- (void)retryDownloadEffectListUsingOnlineLogicWithCompletion:(id /* block */)a0;
- (void)appendDownloadingTaskWithEffect:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_updateNotifyTimer;
- (void)readCachedListWithDownloadCompletion:(id /* block */)a0;
- (void)p_notifyDownloadedEffectIds;
- (void)p_downloadEffectList:(id /* block */)a0 ignoreRequestOpt:(BOOL)a1;
- (void)p_updateLastABGroup;
- (void)checkUpdateAndDownloadListWithCompletion:(id /* block */)a0 downloadOption:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
