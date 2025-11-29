@class NSString, NSArray, NSMutableArray;
@protocol HistoryMsgUploadMgrDelegate;

@interface HistoryMsgUploadMgr : NSObject <HistoryMsgUploadTaskDelegate>

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSArray *msgList;
@property (retain, nonatomic) NSMutableArray *arrReadyAddMsg;
@property (retain, nonatomic) NSMutableArray *arrUploadTask;
@property (weak, nonatomic) id<HistoryMsgUploadMgrDelegate> delegate;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL uploadMediaWithoutMsgList;
@property (nonatomic) BOOL uploadNoteMediaOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgList:(id)a0 roomID:(id)a1;
- (id)initWithMsgList:(id)a0 roomID:(id)a1 onlyNoteMedia:(BOOL)a2;
- (void)generateUploadTask;
- (void)startUpload;
- (void)stopUpload;
- (void)onAllTaskFinish;
- (void)uploadHistoryMsgList:(id)a0;
- (void)onUploadTaskSuccessWithMsg:(id)a0 uploadTask:(id)a1;
- (void)onUploadTaskFailWithMsg:(id)a0 uploadTask:(id)a1;
- (void).cxx_destruct;

@end
