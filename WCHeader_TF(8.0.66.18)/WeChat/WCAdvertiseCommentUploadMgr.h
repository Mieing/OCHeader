@class NSString, WCCommentItem, FIFOFileQueue, NSMutableDictionary, WCMediaUploader;
@protocol WCAdvertiseCommentUploadMgrDelegate;

@interface WCAdvertiseCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt, WCMediaUploaderDelegate> {
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    int m_uploadingCount;
}

@property (retain, nonatomic) WCCommentItem *currentCommentItem;
@property (retain, nonatomic) WCMediaUploader *mediaUploader;
@property (weak, nonatomic) id<WCAdvertiseCommentUploadMgrDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addComment:(id)a0;
- (void)removeInQueueLikeCommentForWCObject:(id)a0;
- (id)getInQueueCommentForWCObject:(id)a0;
- (void)deleteAllCommentInQueue;
- (void)addCommentToWCObjectCache:(id)a0;
- (void)tryStartNextTask;
- (BOOL)doComment:(id)a0;
- (BOOL)checkImageDidUploaded:(id)a0;
- (BOOL)uploadCommentImage:(id)a0;
- (void)onMediaUploadStarted:(id)a0;
- (void)onMediaUploadFinished:(id)a0 uploadResult:(long long)a1 uploadErrType:(long long)a2 cdnErrCode:(int)a3;
- (BOOL)wc_doComment:(id)a0;
- (void)removeCommentFromWCObjectCache:(id)a0;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNewSyncOplogOK;
- (void).cxx_destruct;

@end
