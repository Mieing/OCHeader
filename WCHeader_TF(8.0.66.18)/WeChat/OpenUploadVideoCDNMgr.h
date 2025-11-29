@class CdnTaskInfo, NSMutableArray, FIFOFileQueue;
@protocol OpenUploadCDNMgrDelegate;

@interface OpenUploadVideoCDNMgr : MMObject <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate> {
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned int _curEventId;
    CdnTaskInfo *_curTaskInfo;
}

@property (weak, nonatomic) id<OpenUploadCDNMgrDelegate> m_delegate;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;

- (id)init;
- (void)dealloc;
- (void)InitQueue;
- (void)CheckQueue;
- (void)UploadOk:(long long)a0 aeskey:(id)a1;
- (void)UploadFail:(int)a0;
- (void)ClearEventID;
- (void)StartUpload:(id)a0 MsgWrap:(id)a1 Scene:(unsigned int)a2;
- (void)StopCurUpload;
- (void)StopUpload:(id)a0;
- (void)StopUploadByChatName:(id)a0;
- (BOOL)CreateCurUploadEvent:(unsigned int)a0;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
