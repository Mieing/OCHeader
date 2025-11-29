@class NSArray, CdnUploadTaskInfo, NSString, ChatRoomHistoryShareStat, CMessageWrap, RecordUploadCDNMgr, MMTimer;

@interface ChatRoomHistoryUploadLogic : MMUserService <RecordUploadCDNMgrDelegate, MMServiceProtocol> {
    RecordUploadCDNMgr *_recordUploadCDNMgr;
    CMessageWrap *_uploadingRecordMsg;
    NSString *_chatroomId;
    MMTimer *_uploadTimer;
    NSArray *_arrSelectedMsgs;
}

@property (retain, nonatomic) CdnUploadTaskInfo *uploadInfo;
@property (retain, nonatomic) NSString *uploadingTaskId;
@property (retain, nonatomic) ChatRoomHistoryShareStat *oRoomHistoryStat;
@property (retain, nonatomic) NSString *lastUploadErrMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)uploadHistory:(id)a0 arrMsg:(id)a1 chatroom:(id)a2;
- (void)invalidate;
- (void)OnUploadProgressChanged:(id)a0 total:(unsigned long long)a1 remain:(unsigned long long)a2;
- (void)OnUploadRecordForHistory:(id)a0 uploadInfo:(id)a1 errMsg:(id)a2;
- (void).cxx_destruct;

@end
