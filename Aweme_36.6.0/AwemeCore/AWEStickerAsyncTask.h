@protocol ACCDUXLoadingInstance;

@interface AWEStickerAsyncTask : AWEAIAsyncBaseTask

@property (weak, nonatomic) id<ACCDUXLoadingInstance> duxLoading;
@property (copy, nonatomic) id /* block */ completion;

- (void)saveGeneratingDraftWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)handleGeneratedNoticeClickBeforeTaskBatchProcessFinish:(id)a0 completion:(id /* block */)a1;
- (id)generatePathWithFileName:(id)a0 taskId:(id)a1;
- (BOOL)isAssetDownloaded;
- (BOOL)isTaskFinished;
- (void)writeTaskStatus:(unsigned long long)a0;
- (void)trackAIGCCameraCompositeResponseWithDuration:(double)a0 errorCode:(long long)a1 errorMessage:(id)a2;
- (void)updateTaskWithGenerationInfo:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateTaskWithTaskInfo:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)trackAIGCCameraCompositeResponseSucceedWithScene:(long long)a0;
- (void)saveGeneratedDraftWithExtraInfo:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadingWithScene:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)p_trackDownImageWithDuration:(double)a0 isSucceeded:(BOOL)a1 scene:(unsigned long long)a2 errorMessage:(id)a3;
- (void)storePreProcessImage:(id)a0 targetPublishModel:(id)a1;
- (void)containsDraftIdIsExistAndRemakeNewId:(id)a0 completion:(id /* block */)a1;
- (void)saveGeneratingDraftFromNewPublishModel:(id)a0 originPublishModel:(id)a1 completion:(id /* block */)a2;
- (id)p_generateDraftID;
- (void)trackAsyncPostTaskFailedWithErrorCode:(long long)a0 errorMsg:(id)a1;
- (void)openWithDraftId:(id)a0 noticeParams:(id)a1;
- (void)handerOrderProcessingBusinessHandler:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)queryAndUpdateStateWithGeneratedNoticeParams:(id)a0 withCompletion:(id /* block */)a1;
- (void)trackCustomEffectDownload:(double)a0 isSucceeded:(BOOL)a1 errorCode:(long long)a2 errorMsg:(id)a3;
- (void)p_downloadMultiImages:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)downloadVideoAssetWith:(id)a0 downloadingStartTime:(double)a1 scene:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)downloadLiveVideoAssetWith:(id)a0 downloadingStartTime:(double)a1 scene:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)p_downloadRawImages:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)logLabel;
- (id)rootFolder;

@end
