@interface AWEAIGCNoticeRouter : NSObject

+ (id)getTaskWithTaskId:(id)a0;
+ (void)handleNoticeRouterWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)jumpToEditPageFromNoticeWithParam:(id)a0 completion:(id /* block */)a1;
+ (id)parseTaskIdFrom:(id)a0;
+ (id)parseTrackSourceFrom:(id)a0;
+ (void)showRetryableContentUnavailableToast:(id)a0;
+ (void)invokeSecondRelateTaskQueryWithOriginalParams:(id)a0 taskId:(id)a1 aigcType:(long long)a2 completion:(id /* block */)a3;
+ (void)enterFailedLoadingViewWithGenerationModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)enterFailedLoadingViewWithTaskInfo:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)openEditPageWithResponseModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)enterOngoingLoadingViewWithDraftModel:(id)a0 taskId:(id)a1 completion:(id /* block */)a2;
+ (void)noticeOpenSuccessDraftWithTask:(id)a0 DraftId:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleNoticeRetryableQueryWithParams:(id)a0 completion:(id /* block */)a1;
+ (BOOL)noticeShouldIgnoreForSomeTypesWithTaskId:(id)a0 params:(id)a1;
+ (BOOL)handleNoticeForDeletedCoverWithTaskId:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (BOOL)handleNoticeForDraftWithTaskId:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (BOOL)handleNoticeForTaskFailedWithParams:(id)a0 completion:(id /* block */)a1;
+ (BOOL)handleNoticeForQueryTaskInfoWithTaskId:(id)a0 params:(id)a1;
+ (void)handleNoticeForTaskResourceDownloadWithTaskId:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)queryTaskInfoWithParams:(id)a0 withOpenParametrizedDict:(id)a1 completion:(id /* block */)a2;
+ (void)handleLoraLiveQueryWithParam:(id)a0 withOpenParametrizedDict:(id)a1 completion:(id /* block */)a2;
+ (void)noticeNoNeedQueryDirectJump2Edit:(id)a0 withOpenParametrizedDict:(id)a1 completion:(id /* block */)a2;
+ (BOOL)verifyCurrentGeneratedIdCanOpen:(id)a0;
+ (void)queryAndUpdateTaskInfoWithTaskId:(id)a0;
+ (BOOL)handleNoticeForJumpToEditDirectlyWithTaskId:(id)a0 task:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleNoticeForResourceDownloadAndUpdateDraftWithTaskId:(id)a0 task:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (BOOL)checkAndUpdateTaskResourceReadyForTask:(id)a0 params:(id)a1;
+ (void)preloadProfileImage;

@end
