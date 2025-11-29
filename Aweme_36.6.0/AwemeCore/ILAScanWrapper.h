@class ILAAssetsSortModel, NSCache, ILAExtraFrameModel, ILADecodeModel, NSObject, ILAScanModelManager;
@protocol OS_dispatch_queue, ILAScanWrapperProtocol;

@interface ILAScanWrapper : NSObject {
    struct shared_ptr<ILASDK::Scan> { struct Scan *__ptr_; struct __shared_weak_count *__cntrl_; } scan;
    struct shared_ptr<ILASDK::Config> { struct Config *__ptr_; struct __shared_weak_count *__cntrl_; } scanConfig;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *momentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prepareQueue;
@property (retain, nonatomic) ILAScanModelManager *scanModelManager;
@property (retain, nonatomic) ILAExtraFrameModel *frameModel;
@property (retain, nonatomic) ILADecodeModel *decodeModel;
@property (retain, nonatomic) ILAAssetsSortModel *sortModel;
@property (nonatomic) long long lastScanState;
@property unsigned long long innerState;
@property (retain, nonatomic) NSCache *locationAssetsCache;
@property (weak, nonatomic) id<ILAScanWrapperProtocol> delegate;
@property (copy, nonatomic) id /* block */ assetExtraInfoCallback;

+ (void)setLogModel:(id)a0;
+ (void)setABCallback:(id /* block */)a0;
+ (void)setTeaModel:(id)a0;

- (id)scanWithAssetList:(id)a0 taskConfig:(id)a1 progress:(id /* block */)a2 finish:(id /* block */)a3;
- (long long)CancelTask:(id)a0;
- (void)downloadModels;
- (id)queryResultsWithLocalId:(id)a0;
- (void)handleMemoryWaring;
- (void)syncData:(id)a0;
- (long long)PauseAllTask;
- (long long)CancelAllTask;
- (long long)ResumeAllTask;
- (long long)PauseTask:(id)a0;
- (long long)ResumeTask:(id)a0;
- (void)updateScanAssetTotal:(long long)a0;
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
- (double)queryScanCoverage;
- (id)QuerySimilaryCluster;
- (id)handleOriginScanResult:(id)a0 scanScene:(unsigned long long)a1 tagMap:(id)a2;
- (BOOL)verifyIntegrity;
- (void)setFetchAssetExtraInfo:(id /* block */)a0;
- (id)initWithConfig:(id)a0 modelManager:(id)a1;
- (void)setExtraFrameModel:(id)a0;
- (int)getLatLng:(const long long *)a0 asset:(const void *)a1;
- (void)downloadModels:(id)a0 completion:(id /* block */)a1;
- (id)assetListWithPHFetchResult:(id)a0 enableLocation:(BOOL)a1;
- (id)assetListWithPHFetchResult:(id)a0 enableLocation:(BOOL)a1 useCache:(BOOL)a2;
- (id)assetListWithPHAssetList:(id)a0 enableLocation:(BOOL)a1;
- (id)miniBatchScanWithAssetList:(id)a0 taskConfig:(id)a1 insertBlock:(id /* block */)a2 progress:(id /* block */)a3 finish:(id /* block */)a4;
- (id)pastMemoryAssetList:(id)a0 taskConfig:(id)a1 uploadSize:(long long)a2 query:(id /* block */)a3 progress:(id /* block */)a4 finish:(id /* block */)a5;
- (id)queryPastMemoryInvalidAssetsBeginTime:(id)a0 endTime:(id)a1;
- (id)queryLocationWithLocalIDs:(id)a0;
- (int)UpdatePermissionState:(long long)a0;
- (void)aggregateMoment:(id)a0 step:(long long)a1 momentConfig:(id)a2 progress:(id /* block */)a3 finish:(id /* block */)a4 refresh:(BOOL)a5;
- (id)aggregateMoment:(id)a0 refresh:(BOOL)a1;
- (id)queryMoment:(id)a0 orderType:(unsigned long long)a1 like:(BOOL)a2;
- (id)queryAllMomentKeyPrefix:(id)a0 orderType:(unsigned long long)a1;
- (void)aggregateMoment:(id)a0 refresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)queryMoment:(id)a0 orderType:(unsigned long long)a1 completion:(id /* block */)a2;
- (struct vector<std::shared_ptr<ILASDK::Asset>, std::allocator<std::shared_ptr<ILASDK::Asset>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::Asset> *, std::allocator<std::shared_ptr<ILASDK::Asset>>> { void *x0; } x2; })convertAssets:(id)a0 filter:(id /* block */)a1;
- (struct vector<std::shared_ptr<ILASDK::MomentConfig>, std::allocator<std::shared_ptr<ILASDK::MomentConfig>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::MomentConfig> *, std::allocator<std::shared_ptr<ILASDK::MomentConfig>>> { void *x0; } x2; })convertMomentConfigs:(id)a0;
- (void).cxx_destruct;
- (void)updateAssets:(id)a0;
- (id).cxx_construct;
- (long long)scanState;
- (void)deleteAssets:(id)a0;
- (void)releaseMemory;
- (void)cancelScan;
- (struct shared_ptr<ILASDK::Scan> { struct Scan *x0; struct __shared_weak_count *x1; })scan;
- (int)beginScan;

@end
