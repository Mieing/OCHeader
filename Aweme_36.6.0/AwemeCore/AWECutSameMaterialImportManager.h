@class GamePlayManager, NSArray, AWEDealWithServerPhotoManager, NSOperationQueue, NSString, NSObject;
@protocol OS_dispatch_queue, ACCCutSameVideoCompressorProtocol;

@interface AWECutSameMaterialImportManager : NSObject <ACCCutSameMaterialImportManagerProtocol>

@property (copy, nonatomic) NSArray *curMaterials;
@property (retain, nonatomic) GamePlayManager *gpManager;
@property (copy, nonatomic) id /* block */ curProgressHandler;
@property (retain, nonatomic) NSOperationQueue *reverseQueue;
@property (retain, nonatomic) AWEDealWithServerPhotoManager *manager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importHandlerQueue;
@property (retain, nonatomic) id<ACCCutSameVideoCompressorProtocol> compressor;
@property (retain, nonatomic) Class config;
@property (copy, nonatomic) NSString *fillMode;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)importMaterials:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)importMaterials:(id)a0 handleCartoonType:(unsigned long long)a1 handleGameplayAlgorithm:(id)a2 currentTemplate:(id)a3 progressHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (id)reproduceImage:(id)a0 toPath:(id)a1;
- (void)saveResource:(id)a0 outputPath:(id)a1 toSandboxWithCompletionHandler:(id /* block */)a2;
- (id)createMaterialModelFromAssets:(id)a0 withCartoonType:(unsigned long long)a1 gameplayAlgorithm:(id)a2;
- (void)checkProgress;
- (void)compressAssetModel:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (int)loadImageFromICloudWithPHAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)requestAVAssetFromiCloudWithModel:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)targetSizeBlock:(id /* block */)a0;
- (id)moveFileToCachePath:(id)a0;
- (id)p_changeCartoonTypeToGameplayAlgorithm:(unsigned long long)a0;
- (id)selectPicToProcessFromAssets:(id)a0 withCartoonType:(unsigned long long)a1 withGameplayAlgorithm:(id)a2;
- (id)selectPicToProcessFromAssets:(id)a0 withFragment:(id)a1;
- (unsigned long long)convertGPMediaTypeFromAWEAssetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (BOOL)isCompleted;
- (void)cancelAll;

@end
