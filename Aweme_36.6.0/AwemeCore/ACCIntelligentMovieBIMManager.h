@class ACCIntelligentMovieDataProvider, NSArray, NSString, NSOperationQueue, VEAIMomentAlgorithm, ACCAlgorithmService, NSObject, ACCMomentMediaAsset;
@protocol OS_dispatch_queue;

@interface ACCIntelligentMovieBIMManager : NSObject <ACCMVPhotoCalculateOperationDelegate>

@property (retain, nonatomic) ACCAlgorithmService *algorithmService;
@property (retain, nonatomic) VEAIMomentAlgorithm *videoAlgorithm;
@property (retain, nonatomic) VEAIMomentAlgorithm *imageAlgorithm;
@property unsigned long long curValidScanCount;
@property unsigned long long perValidScanCount;
@property (nonatomic) unsigned long long curScanDate;
@property (retain, nonatomic) ACCIntelligentMovieDataProvider *dataProvider;
@property (retain, nonatomic) NSOperationQueue *imgBIMQueue;
@property (retain, nonatomic) NSOperationQueue *videoBIMQueue;
@property long long curScanPageIdx;
@property (copy, nonatomic) NSArray *imageQueues;
@property (copy, nonatomic) NSArray *videoQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *commonQueue;
@property (retain, nonatomic) ACCMomentMediaAsset *lastAsset;
@property (copy, nonatomic) id /* block */ processCompletion;
@property (nonatomic) long long videoQueueCount;
@property (nonatomic) long long imageQueueCount;
@property (nonatomic) long long currentVideoCalculateIdx;
@property (nonatomic) long long currentImageCalculateIdx;
@property (nonatomic) BOOL videoFrameExtractionOptimizeEnabled;
@property (nonatomic) BOOL materialUseCacheOld;
@property (nonatomic) BOOL multiThreadOptimize;
@property (nonatomic) long long scanQueueOperationCount;
@property (retain, nonatomic) NSArray *selectedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupExecutionQueueParams;
- (void)processSelectedMedia:(id /* block */)a0;
- (void)restartCalculatePhotosFromDatabase;
- (void)calculatePhotosFromDatabase;
- (BOOL)isOpBIMModelReady;
- (id)initWithAlgorithmService:(id)a0;
- (void)startAnalyseSelecteAssetsFeature:(id /* block */)a0;
- (void)getAllAssetLocalIdentifiersThatFeatureExistWithCompletion:(id /* block */)a0;
- (void)storeBimResults:(id)a0 WithCompletion:(id /* block */)a1;
- (void)optimize_executeCalculateOp:(id)a0 WithCompletion:(id /* block */)a1;
- (void)optimize_cleanAlgorithmData;
- (void).cxx_destruct;

@end
