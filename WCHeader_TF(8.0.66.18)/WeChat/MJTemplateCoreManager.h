@class NSString, MMContext, MJTemplateSessionQueue, NSMutableDictionary, MJCamTemplateCdnDownloadManager, MJShootComposingDraftManager, OMJMaasCore, NSMutableArray, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MJTemplateCoreManager : MMRootService <OMJExportManagerDelegate, OMJMaasCoreReportDelegate, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_cleanClipBundleQueue;
    NSMutableSet *_finishedClipBundleRelativePathSet;
}

@property (retain, nonatomic) MMContext *mmContext;
@property (nonatomic) long long coreStatus;
@property (retain, nonatomic) OMJMaasCore *maasCore;
@property (copy, nonatomic) NSString *coreKey;
@property (retain, nonatomic) NSMutableArray *corePrepareCompletionHandlers;
@property (retain, nonatomic) MJTemplateSessionQueue *movieSessionQueue;
@property (retain, nonatomic) MJTemplateSessionQueue *moviePlayerQueue;
@property (retain, nonatomic) MJTemplateSessionQueue *cameraSessionQueue;
@property (retain, nonatomic) MJTemplateSessionQueue *movieComposingSessionQueue;
@property (retain, nonatomic) MJTemplateSessionQueue *imageEditSessionQueue;
@property (nonatomic) BOOL isCleaningCache;
@property (retain, nonatomic) NSMutableDictionary *taskStartTimeDictionary;
@property (retain, nonatomic) MJCamTemplateCdnDownloadManager *cdnDownloadManager;
@property (readonly, nonatomic) MJShootComposingDraftManager *mjShootDraftManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncCleanClipBundleIfNeeded;
- (void)finishMissionWithClipBundleID:(id)a0;
- (BOOL)_cleanClipBundleWithRelativePath:(id)a0;
- (void)_loadFinishedClipBundleRelativePathSet;
- (void)_saveFinishedClipBundleRelativePathSet;
- (void)_markClipBundleHasCleanUpTime;
- (BOOL)_exceedMaxCleanCheckInterval;
- (id)init;
- (void)dealloc;
- (BOOL)canStartUp;
- (void)startUpWithCompletionHandler:(id /* block */)a0;
- (void)_createAndStartUpMaasCoreWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteStartingUpWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareCoreWithCompletionHandler:(id /* block */)a0;
- (void)Core_didFinishPreparingCoreWithError:(id)a0;
- (void)_prepareCore;
- (void)_finishCleaningUp;
- (id)generateILinkAppClientParams;
- (void)_requestILinkAuthorizationWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)maasCore:(id)a0 didReportAnalyticsEventWithType:(long long)a1 data:(id)a2;
- (id)sessionQueueForSession:(id)a0;
- (BOOL)checkIdleForAllSessionQueues;
- (void)prepareSession:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_prepareSession:(id)a0;
- (void)destroySession:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)prepareNextSessionInQueue:(id)a0;
- (void)prepareNextSessionsForAllQueues;
- (void)Sessions_didFinishPreparingCoreWithError:(id)a0;
- (void)Sessions_cleanCachesIfNeeded;
- (void)startExportTaskWithID:(id)a0;
- (void)pauseExportTaskWithID:(id)a0;
- (void)cancelExportTaskWithID:(id)a0;
- (id)_startExportTaskWithID:(id)a0;
- (id)_pauseExportTaskWithID:(id)a0;
- (id)_cancelExportTaskWithID:(id)a0;
- (void)ExportTasks_didFinishPreparingCoreWithError:(id)a0;
- (void)exportTaskDidCompleteWithTaskID:(id)a0;
- (BOOL)checkIdleForExportManager:(id)a0;
- (void)ExportTasks_cleanCachesIfNeeded;
- (void)exportManager:(id)a0 serviceStateDidChange:(unsigned long long)a1;
- (void)exportManager:(id)a0 videoFrameDidUpdate:(id)a1 taskID:(id)a2;
- (void)exportManager:(id)a0 taskStateDidChangeWithTaskID:(id)a1 taskState:(unsigned long long)a2 progress:(float)a3 outputFilePath:(id)a4;
- (void)cleanCachesIfNeeded;
- (void)_cleanCachesWithExcludedClipBundleIDs:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)reportScene;
- (void).cxx_destruct;

@end
