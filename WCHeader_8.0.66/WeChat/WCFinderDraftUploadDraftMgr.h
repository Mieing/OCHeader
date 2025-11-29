@class NSMutableDictionary, NSString, WCFinderUploadDraftTask, WCFinderUploadCdnMgr, NSMutableArray;
@protocol WCFinderDraftUploadDraftMgrDelegate;

@interface WCFinderDraftUploadDraftMgr : NSObject <WCFinderDraftUploadProgressDelegate, WCFinderPostDataItemExt, WCFinderUploadCdnMgrExt>

@property (retain, nonatomic) NSMutableDictionary *progressMap;
@property (retain, nonatomic) NSMutableArray *pendingTasks;
@property (readonly, nonatomic) WCFinderUploadDraftTask *currentDraftTask;
@property (weak, nonatomic) id<WCFinderDraftUploadDraftMgrDelegate> delegate;
@property (retain, nonatomic) WCFinderUploadCdnMgr *uploadMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)bindProgress:(id)a0 progress:(id)a1;
- (id)progressForDraftId:(id)a0;
- (void)uploadDraft:(id)a0;
- (void)deleteDraft:(id)a0;
- (void)deleteTaskWithDraft:(id)a0;
- (void)uploadFeedDraft:(id)a0 subTask:(id)a1;
- (void)doUploadFeedDraft:(id)a0;
- (void)finishUploadFeedDraft:(id)a0 infos:(id)a1;
- (void)failedPostDraft:(id)a0 infos:(id)a1;
- (void)uploadBackgroundLongVideoDraft:(id)a0;
- (void)checkLongVideoCompress:(id)a0;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderDraftPostSessionSuccess:(id)a0 draftId:(id)a1;
- (void)onFinderDraftPostSessionFailedWithErrorType:(long long)a0 draftId:(id)a1;
- (void)onTaskDoneWithId:(id)a0 info:(id)a1;
- (void)onTaskDone:(id)a0 info:(id)a1;
- (void)onTaskFailedWithId:(id)a0 info:(id)a1;
- (void)onTaskFailed:(id)a0 info:(id)a1;
- (void)tryUploadDraftTask;
- (void)onFinderUploadMgrIdle:(id)a0;
- (void)onProgressValueDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
