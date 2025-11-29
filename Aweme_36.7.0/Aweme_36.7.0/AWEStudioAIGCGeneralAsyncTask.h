@interface AWEStudioAIGCGeneralAsyncTask : AWEAIAsyncBaseTask

- (void)saveGeneratingDraftWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (id)generatePathWithFileName:(id)a0 taskId:(id)a1;
- (BOOL)isAssetDownloaded;
- (BOOL)isTaskFinished;
- (void)writeTaskStatus:(unsigned long long)a0;
- (void)updateTaskWithGenerationInfo:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateTaskWithTaskInfo:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)logLabel;
- (id)rootFolder;

@end
