@interface ACCAIGCTemplateTracker : NSObject

+ (void)trackExitAiCreateQueueWith:(id)a0 aigcGeneratedModel:(id)a1 aigcLoadingType:(long long)a2 aiEntrance:(id)a3 originalPropId:(id)a4 clickType:(id)a5;
+ (void)trackEnterAiCreateQueueWith:(id)a0 aigcGeneratedModel:(id)a1 aigcLoadingType:(long long)a2 aiEntrance:(id)a3 originalPropId:(id)a4;
+ (void)trackAigcTemplateAsyncSaveDraftWithStatus:(long long)a0 taskId:(id)a1 mvId:(id)a2 errorMsg:(id)a3 aigcLoadingType:(long long)a4 aigcGeneratedModel:(id)a5 shootWay:(id)a6 creationId:(id)a7;
+ (void)trackAigcTemplateAsyncDownloadResourceWithStatus:(long long)a0 mvId:(id)a1 errorMsg:(id)a2 enterFrom:(id)a3;
+ (void)trackEnterAigcCreateEditPageWith:(id)a0 aigcGeneratedModel:(id)a1 originalPropId:(id)a2 enterFrom:(id)a3;
+ (void)trackAigcTemplateAsyncToEditWithStatus:(long long)a0 mvId:(id)a1 errorMsg:(id)a2 enterFrom:(id)a3;

@end
