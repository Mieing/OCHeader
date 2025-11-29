@class NSString, FIFOFileQueue, NSDate, NSMutableArray, WCTaskUploader;
@protocol WCUploadMgrDelegate;

@interface WCUploadMgr : MMObject <WCTaskUploaderDelegate, INetworkStatusMgrExt, ICdnComMgrExt, WCUploadPendingExt> {
    FIFOFileQueue *m_taskQueue;
    NSMutableArray *m_failedQueue;
    NSMutableArray *m_succeedItems;
    BOOL m_taskRunning;
    WCTaskUploader *m_taskUploader;
    NSDate *m_dateLastNotifySentFail;
}

@property (retain, nonatomic) FIFOFileQueue *pendingQueue;
@property (weak, nonatomic) id<WCUploadMgrDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPendingExtensionKeyWithTaskId:(id)a0 businessType:(int)a1;

- (id)init;
- (void)dealloc;
- (unsigned long long)onServiceCleanCache;
- (BOOL)loadFailedQueue;
- (BOOL)saveFailedQueue;
- (BOOL)loadSucceedItems;
- (BOOL)saveSucceedItems;
- (void)cleanUpForTask:(id)a0;
- (id)getInQueueUploads;
- (id)getFailedUploads;
- (void)addSucceedUpload:(id)a0;
- (id)getTimelineSucceedUploads;
- (id)getHomepageSucceedUploads;
- (void)doDeleteSucceedUploads:(id)a0 from:(id)a1;
- (void)deleteTimelineSucceedUploads:(id)a0;
- (void)deleteHomepageSucceedUploads:(id)a0;
- (BOOL)cleanFailDataItemForSpam:(id)a0;
- (void)updateFailDataItemForSpam:(id)a0;
- (void)updateAllSpamDataItemsForSecurityVerification:(BOOL)a0;
- (void)setTaskFail:(id)a0;
- (void)setTaskArrFail:(id)a0;
- (void)TryStartTask;
- (void)restartUploadTaskWithDataIem:(id)a0;
- (id)findUploadTaskWithDataItem:(id)a0;
- (BOOL)deleteUploadTaskWithDataIem:(id)a0;
- (BOOL)_deleteUploadFailedTaskWithDataIem:(id)a0;
- (BOOL)_deleteUploadingTaskWithDataItem:(id)a0;
- (void)retryStartTask;
- (void)addUploadTask:(id)a0;
- (void)notifyUploadFinished:(id)a0;
- (void)notifyUploadFailed:(id)a0;
- (void)notifyUploadRestart:(id)a0;
- (void)notifyUploadFailStatusChanged:(id)a0;
- (void)saveCurrentTask;
- (void)onMediaUploadFinished:(id)a0 task:(id)a1;
- (void)onUploader:(id)a0 didUpdateUploadTask:(id)a1;
- (void)onUploadFinished:(id)a0;
- (void)onUploadFailNotify:(id)a0;
- (void)restartAllFailUploadFromLocalNotification;
- (void)enterForeground;
- (void)enterBackground;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)OnCdnInit;
- (void)initPendingQueue;
- (void)registerPendingExtension;
- (id)getInPendingQueue;
- (void)uploadPendingTask:(id)a0;
- (void)addPendingTask:(id)a0 pendingTaskKey:(id)a1 forBusiness:(int)a2;
- (id)removePendingTaskForTaskKey:(id)a0 forBusiness:(int)a1;
- (id)deletePendingTaskForDataItem:(id)a0;
- (id)getPendingTask:(id)a0 forBusiness:(int)a1;
- (void)onPendingTaskUploaded:(id)a0 forBusiness:(int)a1 prepareUploadTask:(id)a2;
- (void)deleteFailedPendingTask:(id)a0;
- (void)onPendingTaskUpdatedForFail:(id)a0 forBusiness:(int)a1 removedFromPending:(BOOL)a2;
- (id)checkIsNeedDeletePendingTask:(id)a0;
- (void)checkPendingTaskOverTime;
- (void).cxx_destruct;

@end
