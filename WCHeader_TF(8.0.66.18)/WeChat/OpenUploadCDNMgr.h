@class CdnTaskInfo, NSString, NSMutableDictionary, FIFOFileQueue, MsgDataDownloadLogic, NSMutableArray;
@protocol OpenUploadCDNMgrDelegate;

@interface OpenUploadCDNMgr : MMObject <MsgDataDownloadDelegate, MMAppMsgUploadMgrExt, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate, MMAppAttachFileMgrExt> {
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned int _curEventId;
    CdnTaskInfo *_curTaskInfo;
}

@property (retain, nonatomic) NSString *nsQueuePath;
@property (retain, nonatomic) NSMutableDictionary *msgInfoDict;
@property (retain, nonatomic) NSMutableDictionary *bigFileUploadRespDict;
@property (retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic;
@property (weak, nonatomic) id<OpenUploadCDNMgrDelegate> m_delegate;
@property (nonatomic) BOOL bLargeFile;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (nonatomic) BOOL enableChatMessageNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cacheFileToHardLink:(id)a0;

- (id)init;
- (id)initWithQueuePath:(id)a0;
- (void)initData;
- (void)dealloc;
- (void)InitQueue;
- (id)getUploadFinishBufferWithMsg:(id)a0;
- (void)removeUploadFinishBufferWithMsg:(id)a0;
- (void)CheckQueue;
- (BOOL)tryStartFileMsgHitCheckWithFileInfo:(id)a0;
- (BOOL)checkNeedPreprocess:(id)a0;
- (void)modAppmsg:(id)a0 bitset:(int)a1;
- (void)onAppmsgUploadProcessComplete:(id)a0;
- (void)onAppmsgSendSucc:(id)a0;
- (void)onAppmsgDataUploaded:(id)a0;
- (void)UploadFail:(int)a0;
- (void)UploadFail:(int)a0 canRetry:(BOOL)a1;
- (void)ClearEventID;
- (void)StartUpload:(id)a0 MsgWrap:(id)a1 Scene:(unsigned int)a2;
- (void)createStartAppMsgEvent:(id)a0;
- (void)onStartUploadRet:(id)a0 success:(BOOL)a1;
- (void)StopCurUpload;
- (void)StopUpload:(id)a0;
- (void)StopUploadByChatName:(id)a0;
- (BOOL)CreateCurUploadEvent:(BOOL)a0 crc32:(unsigned int)a1 useSafeCdn:(BOOL)a2;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)checkBigFileUpload:(id)a0 scene:(unsigned int)a1;
- (void)onCheckBigFileUploadResult:(BOOL)a0 resp:(id)a1 wrapMsg:(id)a2 errMsg:(id)a3;
- (void)checkIfAppAttachExistInSvr:(id)a0;
- (void)onCheckAppAttachRet:(id)a0 isExistInSvr:(BOOL)a1 taskInfo:(id)a2;
- (void)startUploadAppAttach:(id)a0;
- (void)realUploadAppAttach:(id)a0;
- (void)startDownloadFile;
- (void)onDownloadAnyFail:(id)a0;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
