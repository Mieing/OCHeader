@class ACCImageImportOutputInfo, ACCImageAssetImportConfig;

@interface ACCImageImportTask : ACCImportBaseTask

@property (retain, nonatomic) ACCImageAssetImportConfig *inputConfig;
@property (retain, nonatomic) ACCImageImportOutputInfo *outputImageInfo;
@property (nonatomic) int requestID;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL isLivePhoto;

+ (void)downloadImageWithURL:(id)a0 completion:(id /* block */)a1;
+ (id)mergedDataWithImageDataOpt:(id)a0 needOriginImageMetaData:(BOOL)a1 metadata:(id)a2;

- (BOOL)enableCallbackResultImmediately;
- (void)updateProjectUUID:(id)a0;
- (id)initWithExportConfig:(id)a0;
- (void)trackImportTaskInfo;
- (id)curMetaData;
- (long long)debugIndex;
- (id)debugFormat;
- (id)getImageKindOutPutInfo;
- (void)doFinishAction;
- (void)exportLiveResourceToSandBoxWithCompletioniHandler:(id /* block */)a0;
- (void)exportAssetToLocalFileWithCompletionHandler:(id /* block */)a0;
- (id)inputIdentifier;
- (id)p_getLivePhotoRequestOptions:(BOOL)a0;
- (void)processsAsset:(id)a0 LivePhotoData:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)saveImage:(id)a0 onCompletion:(id /* block */)a1;
- (void)onlinePhotoResourceExportToLocalFile:(id /* block */)a0;
- (void)localURLExportToLocalFile:(id /* block */)a0;
- (void)remoteURLExportToLocalFile:(id /* block */)a0;
- (void)assetExportToLocalFileV2:(id /* block */)a0;
- (id)addMetaDataWithImage:(id)a0;
- (id)imageiCloudOption:(id /* block */)a0;
- (void).cxx_destruct;
- (void)callback;
- (long long)resizeMode;
- (void)main;
- (void)cancelTask;

@end
