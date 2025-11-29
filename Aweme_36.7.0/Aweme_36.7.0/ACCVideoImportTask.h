@class NSString, AWEAssetModel, BDWebImageRequest, AVAssetExportSession, ACCEditCompileSession, ACCVideoImportConfig, ACCVideoImportOutputInfo, AVAsset;

@interface ACCVideoImportTask : ACCImportBaseTask

@property (retain, nonatomic) ACCVideoImportConfig *inputConfig;
@property (nonatomic) BOOL isCoverImageNecessary;
@property (retain, nonatomic) NSString *coverImageFilePath;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) int requestID;
@property (nonatomic) int imageCoverRequestID;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (retain, nonatomic) AVAsset *resultAsset;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (retain, nonatomic) ACCEditCompileSession *compileSession;
@property (nonatomic) double startTime;
@property (retain, nonatomic) BDWebImageRequest *coverRequest;
@property (readonly, nonatomic) ACCVideoImportOutputInfo *outputInfo;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (void)updateAssetOriginalResolutionWithAssetModel:(id)a0;
+ (BOOL)enableOptFastImport;
+ (id)optimizedAsset:(id)a0;
+ (id)outputURLForAVAsset:(id)a0 taskID:(id)a1;
+ (id)optimizedAsset:(id)a0 error:(id *)a1;
+ (BOOL)optimzeAsset:(id)a0 error:(id *)a1;
+ (BOOL)canFastImportWith:(id)a0 error:(id *)a1;
+ (int)requestCoverImageWithAsset:(id)a0 completion:(id /* block */)a1;

- (BOOL)enableCallbackResultImmediately;
- (struct CGSize { double x0; double x1; })videoSizeForAVAsset:(id)a0;
- (void)fillNonFastImportVideoQuality:(id)a0;
- (struct CGSize { double x0; double x1; })targetSizeForAVAsset:(id)a0;
- (struct CGSize { double x0; double x1; })suggestedSizeWithVEError:(id)a0;
- (struct CGSize { double x0; double x1; })targetSizeForAVAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
- (long long)audioRateWithVEError:(id)a0;
- (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTaskID:(id)a0 assetModel:(id)a1;
- (void)trackImportTaskInfo;
- (id)p_resultInfo;
- (void)onlineResourceMain;
- (void)localResourceMain;
- (void)albumResourceMain;
- (void)convertAssetModelsToValidAssetModel:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
- (void)requestOnlineResourceWithCompletion:(id /* block */)a0;
- (void)asynFetchCoverImageIfNeedWithCompletion:(id /* block */)a0;
- (void)assumeNonFastImportIfNeeded:(id)a0;
- (void)requestAVAssetWithCompletion:(id /* block */)a0;
- (id)curMetaData;
- (void)convertAssetModelsToValidAssetModelsByVe:(id)a0 taskID:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2 suggestedAudioRate:(long long)a3 bitrate:(double)a4 completion:(id /* block */)a5;
- (void)convertAssetModelToValidAssetModel:(id)a0 taskID:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2 suggestedAudioRate:(long long)a3 completion:(id /* block */)a4;
- (id)exportSessionWithAVAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
- (id)makeCompileSessionWithAsset:(id)a0 toAddTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 suggestedSize:(struct CGSize { double x0; double x1; })a2 suggestedAudioRate:(long long)a3 bitrate:(double)a4;
- (void)requestCoverImageWithCompletion:(id /* block */)a0;
- (void)requestOnlineResourceCoverImageWithCompletion:(id /* block */)a0;
- (long long)debugIndex;
- (id)debugFormat;
- (void).cxx_destruct;
- (void)callback;
- (void)finish;
- (id)initWithConfig:(id)a0;
- (void)main;
- (void)cancelTask;

@end
