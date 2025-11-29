@interface ACCGenericTemplateAIGCTracker : NSObject

+ (void)trackToolsAIGCCoreUploadTOS:(id)a0 assetsCount:(long long)a1 scene:(id)a2 isSucceeded:(BOOL)a3 errorMsg:(id)a4 duration:(long long)a5 authKeyDuration:(long long)a6 uploadDuration:(long long)a7 trackInfo:(id)a8;
+ (void)trackToolsAIGCCorePicToPic:(id)a0 assetsCount:(long long)a1 scene:(id)a2 isSucceeded:(BOOL)a3 errorMsg:(id)a4 duration:(long long)a5 trackInfo:(id)a6;
+ (void)trackToolsAIGCCorePicDownloadUrl:(id)a0 serverTaskId:(id)a1 assetsCount:(long long)a2 scene:(id)a3 isSucceeded:(BOOL)a4 errorMsg:(id)a5 duration:(long long)a6;
+ (void)trackToolsAIGCVideoTemplatePerformance:(id)a0 assetsCount:(long long)a1 scene:(id)a2 isSucceeded:(BOOL)a3 errorMsg:(id)a4 duration:(long long)a5 authKeyDuration:(long long)a6 uploadDuration:(long long)a7 aigcGeneratingDuration:(long long)a8 downloadImagesDuration:(long long)a9 trackInfo:(id)a10;
+ (void)trackAIGCResult:(id)a0 templateId:(id)a1 serverTaskId:(id)a2 scene:(id)a3 assetsCount:(long long)a4 error:(id)a5;
+ (void)trackToolsAIGCErrorMessage:(id)a0 isInAllowList:(BOOL)a1 templateId:(id)a2 creationId:(id)a3;

@end
