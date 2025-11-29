@class NSObject, PHFetchResult, NSString, CAKAlbumViewController, ILAMiniBatchScanTask, ACCAlbumInputData;
@protocol OS_dispatch_queue, AWEStudioAIMemoriesScanServiceProtocol;

@interface ACCAlbumILASDKExtension : ACCAlbumExtension <ACCPerfStrategyStateLifeCycleProtocol>

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) id<AWEStudioAIMemoriesScanServiceProtocol> AIMemoriesScanService;
@property (nonatomic) BOOL didFinishFirstRender;
@property (nonatomic) BOOL didBeginScan;
@property (nonatomic) BOOL scanComplete;
@property (nonatomic) double startScanTime;
@property (nonatomic) long long hasScanCount;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property BOOL hasPauseSDKScan;
@property (nonatomic) BOOL applicationInactive;
@property (copy) NSString *taskID;
@property (retain) ILAMiniBatchScanTask *miniBatchScanTask;
@property (nonatomic) BOOL isAlbumShow;
@property (nonatomic) BOOL useAIMemoriesScan;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (nonatomic) long long totalAssetCount;
@property (nonatomic) long long initialC1500CumulativeUploadCount;
@property (nonatomic) long long c1500CumulativeUploadCount;
@property (nonatomic) long long initialC1500CumulativeScanCount;
@property (nonatomic) long long initialEmbCumulativeUploadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)albumDidShowViewController:(id)a0;
- (void)onAppDidEnterBackground:(id)a0;
- (void)resumeScan;
- (void)albumViewControllerFetchAlbumAssetsCompeleted:(id)a0;
- (void)onAppWillEnterForeground:(id)a0;
- (void)showDebugToast:(id)a0;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidHiddenViewController:(id)a0;
- (void)didReceiveMemoryWarningWithType:(unsigned long long)a0;
- (void)consumptionStateDidChanged:(unsigned long long)a0;
- (void)albumDidFinishFirstRender:(id)a0;
- (void)albumDidClickNextButton:(id)a0;
- (id)AIMemoriesC1500CumulativeUploadCountKey;
- (void)C1500UploadCountDidIncrease:(id)a0;
- (void)C1500ScanCountDidIncrease:(id)a0;
- (void)embUploadCountDidIncrease:(id)a0;
- (void)embScanCountDidIncrease:(id)a0;
- (void)updateAIMemoriesState;
- (void)searchPermissionChanged:(id)a0;
- (void)AIMemoriesSearchPermissionChanged:(id)a0;
- (void)AIMemoriesStartUploadC1500:(id)a0;
- (void)AIMemoriesFinishUploadC1500:(id)a0;
- (void)beginScanAssetsForILASDK;
- (void)pauseSDKScan;
- (BOOL)shouldUseMiniBatchScan;
- (void)cancelMiniBatchScanAndUpload;
- (void)cancelScanTask;
- (void)resumeMiniBatchScanAndUpload;
- (void)uploadLocationInfoIfNeeded;
- (void)pauseMiniBatchScanAndUpload;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
