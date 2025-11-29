@interface AWEAIGCBusinessTrackHelper : NSObject

+ (void)trackToolsAIGCCorePreProcess:(id)a0 assetsCount:(long long)a1 isSucceeded:(BOOL)a2 errorCode:(long long)a3 duration:(long long)a4 aigcMediaEnum:(id)a5 aigcType:(id)a6 isMultiLora:(BOOL)a7 multiLoraProfileNum:(id)a8 fromPanel:(id)a9;
+ (void)trackToolsAIGCCorePostProcess:(id)a0 serverTaskId:(id)a1 assetsCount:(long long)a2 duration:(long long)a3 aigcMediaEnum:(id)a4 aigcType:(id)a5 isMultiLora:(BOOL)a6 multiLoraProfileNum:(id)a7;
+ (void)trackSyncPerformanceWithAIGCType:(id)a0 serverTaskID:(id)a1 eventType:(long long)a2 duration:(long long)a3 serverIsAsync:(BOOL)a4 effectID:(id)a5 keywords:(id)a6 errorCode:(long long)a7 errorMsg:(id)a8;
+ (void)trackToolsAIGCCoreAIProcessNetAll:(id)a0 serverTaskId:(id)a1 assetsCount:(long long)a2 scene:(id)a3 isMultiLora:(BOOL)a4 multiLoraProfileNum:(id)a5 isSucceeded:(BOOL)a6 errorCode:(long long)a7 duration:(long long)a8 aigcMediaEnum:(id)a9 isAsync:(long long)a10 needGenerateSticker:(long long)a11 aigcType:(id)a12 referenceImageCount:(id)a13;
+ (void)monitorDownloadStickerpropId:(id)a0 AIType:(long long)a1 duration:(double)a2 statusCode:(long long)a3 errorCode:(long long)a4 errorMessage:(id)a5 extraParam:(id)a6;
+ (void)trackToolsAIGCQueryTaskResultWithStatus:(long long)a0 errorCode:(long long)a1 duration:(long long)a2 errorMessage:(id)a3 taskID:(id)a4 serverTaskID:(id)a5 scene:(id)a6 isMultiLora:(BOOL)a7 multiLoraProfileNum:(id)a8 queryType:(long long)a9 isAsync:(long long)a10;
+ (void)trackToolsAIGCCoreUploadTOS:(id)a0 assetsCount:(long long)a1 resultCount:(long long)a2 resultHasEmptyPath:(BOOL)a3 scene:(id)a4 isSucceeded:(BOOL)a5 errorMsg:(id)a6 errorCode:(long long)a7 duration:(long long)a8 authKeyDuration:(long long)a9 uploadDuration:(long long)a10 aigcMediaEnum:(id)a11 isAsync:(long long)a12 needGenerateSticker:(long long)a13 aigcType:(id)a14 referenceImageCount:(id)a15;
+ (void)trackToolsAIGCCoreAIProcess:(id)a0 serverTaskId:(id)a1 scene:(id)a2 isSucceeded:(BOOL)a3 errorCode:(long long)a4 duration:(long long)a5 aigcMediaEnum:(id)a6 isAsync:(long long)a7 needGenerateSticker:(long long)a8 aigcType:(id)a9 isMultiLora:(BOOL)a10 multiLoraProfileNum:(id)a11 processType:(id)a12 referenceImageCount:(id)a13;
+ (void)trackToolsAIGCCorePicDownloadUrl:(id)a0 serverTaskId:(id)a1 assetsCount:(long long)a2 scene:(id)a3 isMultiLora:(BOOL)a4 multiLoraProfileNum:(id)a5 isSucceeded:(BOOL)a6 errorMsg:(id)a7 duration:(long long)a8 errorCode:(long long)a9;
+ (void)trackToolsAIGCCoreAIProcessReview:(id)a0 serverTaskId:(id)a1 scene:(id)a2 isMultiLora:(BOOL)a3 multiLoraProfileNum:(id)a4 isSucceeded:(BOOL)a5 errorMsg:(id)a6 duration:(long long)a7 errorCode:(long long)a8 referenceImageCount:(id)a9;
+ (void)monitorGenerateAllTimeConsumingPropId:(id)a0 AIGCType:(id)a1 needGenerateSticker:(long long)a2 isSyncGenerate:(long long)a3 duration:(double)a4 statusCode:(long long)a5 errorCode:(long long)a6 errorMessage:(id)a7 extraParam:(id)a8;
+ (void)monitorGenerateInterfacePropId:(id)a0 AIGCType:(id)a1 needGenerateSticker:(long long)a2 isSyncGenerate:(long long)a3 duration:(double)a4 statusCode:(long long)a5 errorCode:(long long)a6 errorMessage:(id)a7 extraParam:(id)a8;
+ (void)trackAsyncPostTaskPerformanceWithAIGCType:(id)a0 serverTaskID:(id)a1 eventType:(long long)a2 duration:(long long)a3 effectID:(id)a4 errorCode:(long long)a5 errorMsg:(id)a6;
+ (void)monitorDownloadFileWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 actionType:(long long)a3 totalDuration:(double)a4 duration:(double)a5 statusCode:(long long)a6 errorCode:(long long)a7 errorMessage:(id)a8 extraParam:(id)a9;
+ (void)trackToolsAIGCCoreAIProcessAll:(id)a0 serverTaskId:(id)a1 assetsCount:(long long)a2 isSucceeded:(BOOL)a3 errorCode:(long long)a4 duration:(long long)a5 aigcMediaEnum:(id)a6 aigcType:(id)a7 isMultiLora:(BOOL)a8 multiLoraProfileNum:(id)a9 isAsync:(long long)a10 exitMethod:(id)a11 referenceImageCount:(id)a12;
+ (id)eventTypeString:(long long)a0;

@end
