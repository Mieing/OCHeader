@class NSString, CdnUploadTaskInfo, HistoryMsgUploadTask, HistoryMsgUploadMgr, ChatRoomHistoryShareStat;

@interface NewChatRoomHistoryUploadLogic : MMUserService <HistoryMsgUploadMgrDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSString *uploadingTaskID;
@property (retain, nonatomic) HistoryMsgUploadTask *task;
@property (retain, nonatomic) CdnUploadTaskInfo *uploadInfo;
@property (retain, nonatomic) HistoryMsgUploadMgr *uploadMgr;
@property (retain, nonatomic) ChatRoomHistoryShareStat *oRoomHistoryStat;
@property (nonatomic) BOOL isUploadFail;
@property (retain, nonatomic) NSString *lastUploadErrMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)uploadHistory:(id)a0 arrMsg:(id)a1 chatroom:(id)a2;
- (void)invalidate;
- (void)stopUploadHistory;
- (void)onUploadDataFinish:(id)a0 taskInfo:(id)a1;
- (void)onUploadDataFail:(id)a0;
- (void).cxx_destruct;

@end
