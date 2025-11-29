@class ACCGenericTemplateProcessTaskManagerBackgroundPlugin, NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACCPicTemplateProcessTaskManager : NSObject <ACCGenericTemplateProcessTaskManagerBackgroundPluginDelegation, ACCPicTemplateProcessTaskDelegate, NPPreprocessAIGCDelegateProtocol_OC>

@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;
@property (retain, nonatomic) ACCGenericTemplateProcessTaskManagerBackgroundPlugin *backgroundPlugin;
@property (retain, nonatomic) NSMutableDictionary *aigcResultMap;
@property (retain, nonatomic) NSMutableDictionary *requestingAIGCMap;
@property (retain, nonatomic) NSMutableDictionary *startRequestTimeMap;
@property (retain, nonatomic) NSMutableDictionary *blockDict;
@property (retain, nonatomic) NSMutableDictionary *trackModelsDict;
@property (retain, nonatomic) NSMutableArray *requestingIds;
@property (retain, nonatomic) NSString *draftFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAIGCResultsWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2;
- (void)didCancelProcessWithRequestInfo:(id)a0;
- (void)appendBlockForRequestId:(id)a0 block:(id)a1;
- (id)retrieveBlockForRequestId:(id)a0;
- (void)removeBlockForRequestId:(id)a0;
- (void)resumeBackgroundTask:(id)a0;
- (id)retrieveAIGCTrackModelForTemplateId:(id)a0;
- (void)removeAIGCTrackModelForTemplateId:(id)a0;
- (void)templateProcessTask:(id)a0;
- (BOOL)checkTargetFolderIsValid:(id)a0;
- (void)didFinishAIGCRequestWithId:(id)a0 templateId:(id)a1 result:(id)a2 error:(id)a3;
- (id)retrieveOrCreateTaskWithId:(id)a0;
- (void)saveResourceModels:(id)a0;
- (void)handleProcessTask:(id)a0;
- (void)downloadAIGCResultsIfNeededWithSlotInfos:(id)a0 requestID:(id)a1 templateId:(id)a2;
- (void)appendAIGCTrackModel:(id)a0;
- (id)resourceModelWithResourceMD5:(id)a0;
- (void).cxx_destruct;

@end
