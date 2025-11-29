@class NSMutableDictionary, NSString, WCStoryComment, NSMutableArray;
@protocol WCStoryCommentUploadMgrDelegate;

@interface WCStoryCommentUploadMgr : NSObject <PBMessageObserverDelegate, INewSyncExt, ICdnComMgrExt, INetworkStatusMgrExt>

@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) NSMutableArray *failedQueue;
@property (retain, nonatomic) WCStoryComment *curTask;
@property (retain, nonatomic) NSMutableDictionary *dicUploadingComments;
@property (weak, nonatomic) id<WCStoryCommentUploadMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadTaskQueue;
- (void)loadFailQueue;
- (void)saveTaskQueue;
- (void)saveFailQueue;
- (BOOL)isUploadingWithComment:(id)a0;
- (BOOL)isFailCommentWithComment:(id)a0;
- (BOOL)isRetryTimeout:(id)a0;
- (long long)getErrorTypeWithRetcode:(int)a0;
- (void)addNewStoryComment:(id)a0;
- (void)retry;
- (void)CheckQueue;
- (BOOL)startCgiWithStoryComment:(id)a0;
- (id)getFailedComments;
- (void)deleteFailedComment:(id)a0;
- (BOOL)canTaskRetryWithErrorType:(long long)a0;
- (void)addTask:(id)a0;
- (id)removeFirstTask;
- (void)moveTaskToBack;
- (id)getUploadingCommentsWithTid:(id)a0;
- (void)addCommentToDicUploadingCache:(id)a0;
- (void)removeCommentFromDicUploadingCache:(id)a0;
- (void)onStoryCommentFail:(long long)a0;
- (void)handleNewStoryDoCommentResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNewSyncOplogOK;
- (void)OnSetCdnDnsInfo;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
