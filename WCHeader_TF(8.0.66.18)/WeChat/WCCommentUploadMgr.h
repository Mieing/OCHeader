@class NSString, WCCommentItem, FIFOFileQueue, NSMutableDictionary, NSMutableArray, WCMediaUploader;
@protocol WCCommentUploadMgrDelegate;

@interface WCCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt, WCMediaUploaderDelegate> {
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    NSMutableArray *m_failedCommentQueue;
    NSMutableArray *m_failedLikeQueue;
    int m_uploadingCount;
}

@property (retain, nonatomic) WCCommentItem *currentCommentItem;
@property (retain, nonatomic) WCMediaUploader *mediaUploader;
@property (weak, nonatomic) id<WCCommentUploadMgrDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addComment:(id)a0;
- (void)removeInQueueLikeCommentForWCObject:(id)a0;
- (id)getInQueueCommentForWCObject:(id)a0;
- (void)addCommentToWCObjectCache:(id)a0;
- (void)removeCommentFromWCObjectCache:(id)a0;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)tryStartNextTask;
- (BOOL)doComment:(id)a0;
- (BOOL)checkImageDidUploaded:(id)a0;
- (BOOL)uploadCommentImage:(id)a0;
- (void)onMediaUploadStarted:(id)a0;
- (void)onMediaUploadFinished:(id)a0 uploadResult:(long long)a1 uploadErrType:(long long)a2 cdnErrCode:(int)a3;
- (BOOL)ww_doComment:(id)a0;
- (id)generateClientCtxBuffer:(id)a0;
- (BOOL)wc_doComment:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)ww_MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)wc_MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNewSyncOplogOK;
- (id)getFailedComments;
- (id)getFailedLike;
- (void)deleteFailedComment:(id)a0;
- (void)setTopTaskFailWithRet:(int)a0;
- (BOOL)saveFailedCommentQueue;
- (BOOL)saveFailedLikeQueue;
- (BOOL)loadFailedQueue;
- (void)doInputAreaReportIfNeededWithCommentItem:(id)a0;
- (void).cxx_destruct;

@end
