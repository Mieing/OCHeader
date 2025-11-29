@interface AWEAIGCAsyncTask : AWEAIAsyncBaseTask

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
- (void)p_downloadingWithScene:(unsigned long long)a0 trackInfoModel:(id)a1 completion:(id /* block */)a2;
- (void)saveGeneratedDraftWithExtraInfo:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadingWithScene:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)p_trackDownImageWithDuration:(double)a0 isSucceeded:(BOOL)a1 scene:(unsigned long long)a2 errorMessage:(id)a3;
- (id)logLabel;
- (id)rootFolder;

@end
