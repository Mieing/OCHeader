@class AWERecordBeautyDownloaderConfig, NSString, NSTimer, NSOperationQueue, NSHashTable, NSMutableArray;

@interface AWEEditerBeautyDefaultDownloader : NSObject <AWERecordBeautyDownloaderProtocol>

@property (retain, nonatomic) AWERecordBeautyDownloaderConfig *config;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) NSMutableArray *toBeNotifiedEffectIds;
@property (retain, nonatomic) NSTimer *notifyTimer;
@property (nonatomic) BOOL needUpdateEffect;
@property (nonatomic) double checkUpdatePannelDuration;
@property (nonatomic) double downloadEffectDuration;
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
- (void)p_notifyDownloadedEffectIds;
- (void)p_downloadEffectList:(id /* block */)a0 ignoreRequestOpt:(BOOL)a1;
- (void)p_updateLastABGroup;
- (void)checkUpdateAndDownloadListWithCompletion:(id /* block */)a0 downloadOption:(id)a1;
- (id)performanceTrackInfo;
- (void)resetPerformanceTrackInfo;
- (void)readCachedListWithStartTime:(double)a0 downloadCompletion:(id /* block */)a1;
- (void)downloadEffectPanel:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)addSubscriber:(id)a0;

@end
