@interface AWEAIPropTaskTracker : NSObject

+ (id)trackEnterFrom;
+ (void)monitorDraftWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 totalDuration:(double)a3 draftType:(long long)a4 type:(long long)a5 statusCode:(long long)a6 errorCode:(long long)a7 errorMessage:(id)a8;
+ (void)monitorSubmitSuccessRateWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 totalDuration:(double)a3 statusCode:(long long)a4;
+ (void)monitorDraftWithTaskId:(id)a0 propId:(id)a1 aigcType:(id)a2 aigcCreateWay:(id)a3;
+ (void)monitorAIPropGenerateSuccessWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 actionType:(long long)a3 totalDuration:(double)a4 statusCode:(long long)a5 errorCode:(long long)a6 errorMessage:(id)a7;
+ (void)monitorDownloadWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 actionType:(long long)a3 totalDuration:(double)a4 duration:(double)a5 errorCode:(long long)a6 errorMessage:(id)a7 extraParam:(id)a8;
+ (void)monitorAIPropDeleteTasksWithPendingCount:(unsigned long long)a0 failedCount:(unsigned long long)a1 aiTypes:(id)a2 prodList:(id)a3;
+ (void)monitorAIPropPersistantTaskInfoWithTaskCount:(long long)a0 statusCode:(long long)a1 AIType:(id)a2 taskIds:(id)a3 tasksStatus:(id)a4;
+ (void)monitorAIPropNoticeClickWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 statusCode:(long long)a3 errorCode:(long long)a4 errorMessage:(id)a5 completed:(BOOL)a6 fromDraft:(BOOL)a7 hasCache:(BOOL)a8 totalDuration:(double)a9;
+ (void)trackInnerPushWithPropId:(id)a0 aiType:(long long)a1 actionType:(long long)a2 chatType:(long long)a3 extraParam:(id)a4;
+ (void)trackShowAIGCGenerateFeedCardWithTaskId:(id)a0 propId:(id)a1;
+ (void)trackAIGCCameraCompositeResponseWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 duration:(double)a3 statusCode:(long long)a4;
+ (void)trackClickAIGCGenerateFeedCardWithTaskId:(id)a0 propId:(id)a1 clickType:(long long)a2;
+ (void)monitorServerPushMessageWithTaskId:(id)a0 propId:(id)a1 totalDuration:(double)a2 statusCode:(long long)a3 errorCode:(long long)a4 errorMessage:(id)a5;
+ (void)monitorQueryResponseWithTaskId:(id)a0 propId:(id)a1 totalDuration:(double)a2 complete:(long long)a3 errorCode:(long long)a4 errorMessage:(id)a5;
+ (void)monitorInnerPushWithTaskId:(id)a0 propId:(id)a1 AIType:(long long)a2 actionType:(long long)a3 totalDuration:(double)a4 statusCode:(long long)a5;
+ (void)monitorAIGCQueryTaskListWithCount:(long long)a0 actionType:(long long)a1 duration:(double)a2 statusCode:(long long)a3 errorCode:(long long)a4 errorMessage:(id)a5 extraParam:(id)a6;
+ (void)monitorAIPropCancelTasksWithStatusCode:(long long)a0 AIType:(id)a1 taskIds:(id)a2 duration:(double)a3 errorCode:(long long)a4 errorMsg:(id)a5;

@end
