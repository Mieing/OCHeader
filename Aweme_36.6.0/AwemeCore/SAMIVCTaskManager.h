@class NSString, SAMIVoiceConversionTask, SAMIVESVCService, AWEResourceUploadParametersResponseModel, NSNumber, SAMIVESVCInfoGroup;

@interface SAMIVCTaskManager : NSObject

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *parametersModel;
@property (retain, nonatomic) SAMIVoiceConversionTask *task;
@property (retain, nonatomic) SAMIVESVCService *svcService;
@property (copy, nonatomic) NSString *cacheDir;
@property (retain, nonatomic) NSNumber *currentTaskID;
@property (retain, nonatomic) SAMIVESVCInfoGroup *curGroup;

+ (BOOL)enableSVCForAssets:(id)a0 rangeInfo:(id)a1;

- (id)configParams;
- (id)generateInfosOfAssets:(id)a0 rangeInfo:(id)a1 spkID:(id)a2;
- (void)svcOfEffect:(id)a0 assets:(id)a1 rangeInfo:(id)a2 startBlock:(id /* block */)a3 progressChange:(id /* block */)a4 previewBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)stopCurrentSVC;
- (void)refreshVCTaskIfNeeded;
- (void)fetchUploadParametersWithCompletion:(id /* block */)a0;
- (BOOL)hasLocalCacheOfEffect:(id)a0 assets:(id)a1 rangeInfo:(id)a2;
- (void)normalVCOfEffect:(id)a0 assets:(id)a1 rangeInfo:(id)a2 startBlock:(id /* block */)a3 progressChange:(id /* block */)a4 completion:(id /* block */)a5;
- (void)taskFinishResult:(id)a0 effect:(id)a1 taskID:(id)a2 isCancel:(BOOL)a3 completion:(id /* block */)a4;
- (void)trackTaskFinish:(id)a0 success:(BOOL)a1;
- (void)preUploadAssets:(id)a0 rangeInfo:(id)a1;
- (void)applyEffect:(id)a0 assets:(id)a1 rangeInfo:(id)a2 startBlock:(id /* block */)a3 progressChange:(id /* block */)a4 previewBlock:(id /* block */)a5 cancelPreviewBlock:(id /* block */)a6 completion:(id /* block */)a7;
- (BOOL)enableVoiceConversionWithAssets:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheDir:(id)a0;

@end
