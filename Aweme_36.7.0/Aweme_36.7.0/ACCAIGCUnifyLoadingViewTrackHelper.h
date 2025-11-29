@interface ACCAIGCUnifyLoadingViewTrackHelper : NSObject

+ (void)trackCancelAIGCGenerateTaskWithoutTaskIDWithDuration:(double)a0;
+ (void)trackEnterAigcCreatedEditPageAigcType:(id)a0 aigcGeneratedMode:(id)a1 enterFrom:(id)a2 propList:(id)a3;
+ (void)trackCreateAigcPortraitEffectAigcType:(id)a0 aigcGeneratedMode:(id)a1 aigcLoadingType:(long long)a2 aigcEstimatedDuration:(long long)a3 isHasRole:(long long)a4 loraResourceType:(id)a5;
+ (void)trackEnterAiCreateQueueWithAigcType:(id)a0 aigcGeneratedMode:(id)a1 aigcLoadingType:(long long)a2 aigcEstimatedDuration:(long long)a3 isMultiContent:(long long)a4 aigcMixType:(id)a5 loraIdList:(id)a6 extraDict:(id)a7 publishModel:(id)a8;
+ (void)trackFailureTaskShowWithInfo:(id)a0 enterFrom:(id)a1 aigcType:(id)a2;
+ (void)trackFailureTaskClickRetryWithInfo:(id)a0 enterFrom:(id)a1 aigcType:(id)a2;
+ (void)traceExitAiCreateQueueWithClickType:(id)a0 aigcType:(id)a1 aigcGeneratedMode:(id)a2 aigcLoadingType:(long long)a3 aigcEstimatedDuration:(long long)a4 isMultiContent:(long long)a5 aigcMixType:(id)a6 loraIdList:(id)a7 extraDict:(id)a8 publishModel:(id)a9;
+ (void)trackCancelAICreateShowWithSyncPreviousPage:(long long)a0;
+ (void)trackCancelAICreateRestartClickWithSyncPreviousPage:(long long)a0;
+ (void)trackStayAICreateWindowClickWithCancelType:(id)a0 clickType:(id)a1 syncPreviousPage:(long long)a2;
+ (void)trackStayAICreateWindowShowWithCancelType:(id)a0 syncPreviousPage:(long long)a1;
+ (void)updateEnterFromForSyncIfNeededWithMutableDict:(id)a0 previousPage:(long long)a1;
+ (void)traceIMAigcAction:(id)a0;

@end
