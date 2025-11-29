@class AWEStudioCaptionEmbeddingDataManager, NSString, NSObject, ILAMiniBatchScanTask, AWEStudioAIMemoriesUploadService;
@protocol OS_dispatch_queue;

@interface AWEStudioAIMemoriesScanService : NSObject <AWEStudioAIMemoriesScanServiceProtocol>

@property (nonatomic) long long hasScanCount;
@property (nonatomic) BOOL scanComplete;
@property (nonatomic) double startScanTime;
@property (retain) ILAMiniBatchScanTask *miniBatchScanTask;
@property (retain, nonatomic) AWEStudioCaptionEmbeddingDataManager *dataManager;
@property (nonatomic) BOOL shouldScan;
@property (copy, nonatomic) NSString *highPriorityTaskID;
@property (retain, nonatomic) AWEStudioAIMemoriesUploadService *uploadingService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *miniBatchScanQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceUpdateTotalUploadCount;
- (long long)totalUploaodCount;
- (id)getAllUploadedAssetIDs;
- (void)pauseCurrentRunningMiniBatchScanTask;
- (void)resumeCurrentRunningMiniBatchScanTask;
- (void)pauseUpload;
- (void)resumeUpload;
- (void)startMiniBatchScanIfNeeded;
- (BOOL)hasRunningMiniBatchScanTask;
- (void)cancelCurrentRunningMiniBatchScanTaskWithDelayTime:(long long)a0;
- (void)cancelDelayCancelTask;
- (void)startHighPriorityEmbScanTaskWithAssetList:(id)a0 completion:(id /* block */)a1;
- (void)prepareC1500DataWithCompletion:(id /* block */)a0;
- (void)uploadC1500FeatureWithCountLimit:(long long)a0 completion:(id /* block */)a1;
- (void)setILAAsset:(id)a0 withStudioPHAsset:(id)a1;
- (id)phAssetForILAAsset:(id)a0;
- (void)p_actualCancelCurrentRunningMiniBatchScanTask;
- (void)p_startHighPriorityEmbScanTaskWithAssetList:(id)a0 completion:(id /* block */)a1;
- (void)p_uploadLivePhotoAssetFeatureWithAssetList:(id)a0 completion:(id /* block */)a1;
- (void)p_checkHighPriorityEmbScanAssetStatus:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
