@class ITMScanModelManager, ITMConfig, ITMDecodeModel, ITMLogModel;

@interface ITMManager : NSObject {
    struct shared_ptr<ITMSDK::ITMScan> { struct ITMScan *__ptr_; struct __shared_weak_count *__cntrl_; } scan;
    struct shared_ptr<ILASDK::BaseConfig> { struct BaseConfig *__ptr_; struct __shared_weak_count *__cntrl_; } scanConfig;
}

@property (retain, nonatomic) ITMConfig *config;
@property (retain, nonatomic) ITMDecodeModel *decodeModel;
@property (retain, nonatomic) ITMScanModelManager *scanModelManager;
@property (retain, nonatomic) ITMLogModel *logModel;

+ (void)setProgressCallback:(id /* block */)a0;
+ (id /* block */)progressCallback;
+ (id /* block */)downloadModelCompletion;
+ (id)scanModelProtocol;
+ (id /* block */)decodeCallback;
+ (id)logProtocol;
+ (id)requestSystemAlbumProtocol;
+ (void)setDownloadModelCompletion:(id /* block */)a0;
+ (void)setScanModelProtocol:(id)a0;
+ (void)setDecodeCallback:(id /* block */)a0;
+ (void)setLogProtocol:(id)a0;
+ (void)setRequestSystemAlbumProtocol:(id)a0;
+ (void)setABCallback:(id /* block */)a0;
+ (void)setConfig:(id)a0;
+ (id)config;
+ (id)sharedInstance;

- (id)scanWithAssetList:(id)a0 taskConfig:(id)a1 progress:(id /* block */)a2 finish:(id /* block */)a3;
- (long long)CancelTask:(id)a0;
- (void)downloadModels;
- (id)queryResultsWithLocalId:(id)a0;
- (void)prepareModelCompletion:(BOOL)a0 error:(id)a1;
- (void)handleMemoryWaring;
- (void)syncData:(id)a0;
- (long long)PauseAllTask;
- (long long)CancelAllTask;
- (long long)ResumeAllTask;
- (long long)PauseTask:(id)a0;
- (long long)ResumeTask:(id)a0;
- (void)updateScanAssetTotal:(long long)a0;
- (id)assetListWithPHFetchResult:(id)a0;
- (id)assetListWithPHAsset:(id)a0;
- (id)beautifyWithAssetList:(id)a0 taskConfig:(id)a1 tagMap:(id)a2 progress:(id /* block */)a3 finish:(id /* block */)a4;
- (id)filterSimilarity:(id)a0 similarityThreshold:(float)a1;
- (id)queryModelVersion:(unsigned long long)a0;
- (id)queryAssetWithLocalId:(id)a0;
- (int)queryScanAssetsNum;
- (id)queryResultsWithLocalIds:(id)a0;
- (void)preloadAlgorithm:(id)a0;
- (void)releaseAlgorithm:(id)a0;
- (void)updateDeviceThreshold:(id)a0;
- (void)updateLoglevel:(unsigned long long)a0;
- (void)deleteAssetsByLocalId:(id)a0;
- (double)queryUnrecognizedRatio:(unsigned long long)a0;
- (id)queryTagType:(unsigned long long)a0 top:(long long)a1;
- (id)queryTagWithAssetIds:(id)a0 type:(int)a1;
- (double)queryScanCoverage;
- (id)QuerySimilaryCluster;
- (id)handleOriginScanResult:(id)a0 scanScene:(unsigned long long)a1 tagMap:(id)a2;
- (BOOL)verifyIntegrity;
- (void).cxx_destruct;
- (void)updateAssets:(id)a0;
- (id)init;
- (void)destroy;
- (id).cxx_construct;
- (void)dealloc;
- (void)deleteAssets:(id)a0;
- (void)releaseMemory;

@end
