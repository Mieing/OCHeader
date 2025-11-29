@class NSMutableDictionary, AWEGenericTemplateAIGCTaskManagerBackgroundPlugin, AWEGenericTemplateAIGCPresetResultHandler, AWEVideoPublishViewModel, NSObject, NSString;
@protocol OS_dispatch_queue, AWEAIGCTemplateAiProcessResultDelegate;

@interface AWEGenericTemplateAIGCTaskManager : NSObject <AWEGenericTemplateAIGCTaskManagerBackgroundPluginDelegate, AWEGenericTemplateAIGCTaskDelegation, NPPreprocessAIGCDelegateProtocol_OC>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;
@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) AWEGenericTemplateAIGCTaskManagerBackgroundPlugin *backgroundPlugin;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEGenericTemplateAIGCPresetResultHandler *presetResultHandler;
@property (retain, nonatomic) NSMutableDictionary *resultHandlersDict;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<AWEAIGCTemplateAiProcessResultDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUnifyLoadingShowOrHide:(BOOL)a0;
- (void)updateLoadingViewSubtitleWith:(long long)a0 type:(long long)a1;
- (id)retrieveOrCreateTaskWithTemplateId:(id)a0;
- (void)requestAIGCResultsWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2;
- (void)preparedAIGCTaskIDList:(id)a0;
- (void)hasErrorWithTemplateID:(id)a0 error:(id)a1;
- (void)addedAigcResourcesWithTemplateID:(id)a0 materialId:(id)a1 aiType:(unsigned long long)a2 needAiAvatar:(BOOL)a3 aigcResources:(id)a4;
- (void)resumeTask;
- (void)didFinishAIGCRequestWithRequestId:(id)a0 templateId:(id)a1 result:(id)a2 toast:(id)a3 error:(id)a4;
- (id)fetchCurrentApplyTemplateModel:(id)a0;
- (void)didFinishAIGCAIAssetTaskWithTemplateId:(id)a0 consumeAssetCount:(long long)a1;
- (void)updateUnifyLoadingWithViewType:(long long)a0 errMsg:(id)a1;
- (BOOL)isAsyncRequestTemplate:(id)a0;
- (BOOL)isSupportUnifyInteraction:(id)a0;
- (BOOL)shouldApplyTemplateWhenRequestFailed:(id)a0;
- (void)updateUnifyLoadingWithWithAIGCProcessResultModel:(id)a0 querySceneType:(long long)a1;
- (void)didFinishAIGCRequestWithTemplateID:(id)a0 mergedRequestInfo:(id)a1 result:(id)a2 toast:(id)a3 hitCache:(BOOL)a4 error:(id)a5;
- (id)retrieveOrCreateTaskWithTemplateId:(id)a0 taskId:(id)a1;
- (id)p_getCurrentApplyTemplateModel:(id)a0;
- (void)mergedAIGCRequestWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2;
- (void)singleAIGCRequestWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2;
- (id)retrievePresetResultHandlerForRequestId:(id)a0;
- (void)appendPresetResultHander:(id)a0 requestId:(id)a1;
- (void)replacePresetResultHandlerIfNeededWithTemplateId:(id)a0;
- (void)handleAIGCResultWithTemplateID:(id)a0 mergedRequestInfo:(id)a1 toast:(id)a2 error:(id)a3;
- (void)setAigcMetaInfoWithResults:(id)a0;
- (void)removePresetResultHander:(id)a0 requestId:(id)a1;
- (void)handleTaskWithRequestId:(id)a0 templateId:(id)a1 result:(id)a2 toast:(id)a3 error:(id)a4 callback:(id)a5;
- (void)retryTaskWithTemplateId:(id)a0;
- (void)resumeBackgroundTaskWithRequestId:(id)a0 templateId:(id)a1 result:(id)a2 toast:(id)a3 error:(id)a4 callback:(id)a5;
- (void)resumeBackgroundTaskWithTemplateID:(id)a0 mergedRequestInfo:(id)a1 toast:(id)a2 error:(id)a3;
- (id)toastMessageWithTemplateId:(id)a0;
- (void)resetPresetResultHandler;
- (void)handleClickGainAIAssetButtonWithTemplateId:(id)a0 taskType:(long long)a1;
- (void)hangTask;
- (void)removeApplyWithTemplateId:(id)a0;
- (void)cancelTaskWithTemplateId:(id)a0;
- (void)transferAsyncTaskWithTemplateId:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;

@end
