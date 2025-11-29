@interface AWEAIGCBusinessNetHelper : NSObject

+ (void)downloadImages:(id)a0 complete:(id /* block */)a1;
+ (void)requestAiProcessWithParams:(id)a0 timeOut:(double)a1 completion:(id /* block */)a2;
+ (void)requestAIAssetRecordListWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestAIAssetPrepareWith:(id)a0 completion:(id /* block */)a1;
+ (void)requestAIAssetTaskListWithCompletion:(id /* block */)a0;
+ (id)startUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
+ (void)requestAIAssetAmountWithCompletion:(id /* block */)a0;
+ (void)requestGenerationQueryParams:(id)a0 timeOut:(double)a1 completion:(id /* block */)a2;
+ (void)requestUpdateRecordParams:(id)a0 timeOut:(double)a1 completion:(id /* block */)a2;
+ (id)assembleDownloadNetInfo;
+ (void)downloadPicturesWithUriModels:(id)a0 complete:(id /* block */)a1;
+ (void)downloadMusicResultModelWith:(id)a0 identifier:(id)a1 fileNameSuffix:(id)a2 complete:(id /* block */)a3;
+ (void)getImageUploadAuthorInfo:(id /* block */)a0;
+ (id)batchStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
+ (id)startUploadVideo:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
+ (void)aiCommonGenerateWithRequestType:(unsigned long long)a0 taskId:(id)a1 sceneId:(id)a2 sceneType:(id)a3 paramsJson:(id)a4 timeOut:(double)a5 completion:(id /* block */)a6;
+ (void)queryTaskInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)aiSyncTextCreatePicturesWithRequestType:(unsigned long long)a0 params:(id)a1 timeOut:(double)a2 completion:(id /* block */)a3;
+ (void)downloadVideoResultModelWith:(id)a0 identifier:(id)a1 fileNameSuffix:(id)a2 complete:(id /* block */)a3;
+ (void)fetchTemplateDetail:(id)a0 completion:(id /* block */)a1;
+ (id)translateImageSizeFromDownload:(id)a0 data:(id)a1;
+ (void)downloadResultModelWith:(id)a0 resourceType:(long long)a1 identifier:(id)a2 fileNameSuffix:(id)a3 complete:(id /* block */)a4;
+ (id)translateFileSizeFromDownload:(id)a0;
+ (id)replaceReqJsonWith:(id)a0 modelId:(id)a1;

@end
