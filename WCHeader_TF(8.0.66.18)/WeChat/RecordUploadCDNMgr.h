@class NSRecursiveLock, NSString, RecordUploadTask, CMessageWrap, OpenBufferUploadMgr, NSMutableArray;
@protocol RecordUploadCDNMgrDelegate;

@interface RecordUploadCDNMgr : NSObject <RecordUploadTaskDelegate, IBufferUploadExt, MMAppAttachFileMgrExt, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate> {
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrRecordData;
    NSMutableArray *m_arrCDNUploadInfo;
    RecordUploadTask *m_curUploadTask;
    RecordUploadTask *m_recordSelfUploadTask;
    OpenBufferUploadMgr *m_openBufferUploadMgr;
    int m_sendRetryCount;
    NSMutableArray *m_bigFileTasks;
    unsigned long long m_uiCurUploadTaskTotalSize;
    NSMutableArray *m_favTranCDNItemArr;
    NSMutableArray *m_favTranCDNItemRespArr;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) CMessageWrap *m_curMsgWrap;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (nonatomic) BOOL bJustUploadNoteDataField;
@property (weak, nonatomic) id<RecordUploadCDNMgrDelegate> m_delegate;
@property (nonatomic) BOOL enableChatMessageNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)IsRecordMsgUploading:(id)a0;
- (void)StartUploadRecordMsg:(id)a0;
- (void)StopUploadRecordMsg:(id)a0;
- (void)StopUploadRecordMsgByUsername:(id)a0;
- (BOOL)isUploadSameMsg:(id)a0 compare:(id)a1;
- (void)setDelegate:(id)a0;
- (void)StopCurUpload;
- (void)CheckCDNUploadMsgQueue;
- (void)UploadRecordData;
- (void)AddUploadTaskForDataList:(id)a0 ignoreMedia:(BOOL)a1;
- (void)BatchTransCDNItemForMsg;
- (id)genBatchTransItemArrayWithDataList:(id)a0 withClientStrId:(id)a1;
- (void)BatchTransCDNItemForFav;
- (void)sendBatchTranCDNItem;
- (void)RemoveMsgWrap:(id)a0;
- (BOOL)handleFinishRecordUpload;
- (void)clearLocalProperty:(id)a0;
- (BOOL)SendCurAppMsg;
- (void)SendMsgFail;
- (void)SendMsgOK:(id)a0;
- (void)TryNextMsgWrap;
- (void)HandleBatchTransCDNResp:(id)a0;
- (void)HandleSendMsgResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnSetCdnDnsInfo;
- (void)makeMessageUploadFail;
- (void)OnRecordUploadTaskFail:(id)a0;
- (void)OnRecordUploadTaskFinish:(id)a0 uploadTask:(id)a1;
- (void)OnRecordUploadTask:(id)a0 progressChange:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)OnBufferUploadFail:(id)a0 ClientAppDataId:(id)a1;
- (void)OnBufferUploadOK:(id)a0 ClientAppDataId:(id)a1 MediaId:(id)a2;
- (void)checkBigFileTaskAndUpload;
- (void)onBatchCheckBigFileUploadResult:(BOOL)a0 respList:(id)a1 wrapMsg:(id)a2 errMsg:(id)a3;
- (BOOL)UploadCurAppMsg;
- (id)exportCurMsg;
- (void)convertUploadBigFileRecordData:(id)a0;
- (void)calTotalUploadSize;
- (unsigned long long)remainUploadSize:(id)a0 exceptTask:(id)a1;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
