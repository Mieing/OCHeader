@class MessageCommonUploader, NSMutableDictionary, FIFOFileQueue, NSString, OpenInfo, MsgDataDownloadLogic, EmoticonUploader;
@protocol OpenUploadMgrDelegate;

@interface OpenUploadMgr : MMObject <MsgDataDownloadDelegate, MessageCommonUploaderDelegate, EmoticonUploaderDelegate, MMAppMsgUploadMgrExt, IMsgExt, PBMessageObserverDelegate> {
    unsigned int m_uiCurEventID;
    BOOL m_bInitQueue;
}

@property (retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic;
@property (retain, nonatomic) EmoticonUploader *emoticonUploader;
@property (retain, nonatomic) MessageCommonUploader *fileUploader;
@property (nonatomic) BOOL isCheckingBigFile;
@property (retain, nonatomic) NSMutableDictionary *msgInfoDict;
@property (weak, nonatomic) id<OpenUploadMgrDelegate> m_delegate;
@property (retain, nonatomic) FIFOFileQueue *m_queUpload;
@property (retain, nonatomic) OpenInfo *m_oCurUploadInfo;
@property (nonatomic) BOOL enableChatMessageNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)InitQueue;
- (void)ClearEventID;
- (void)StartUpload:(id)a0 MsgWrap:(id)a1 Scene:(unsigned int)a2;
- (void)createStartAppMsgEvent:(id)a0;
- (void)onStartUploadRet:(id)a0 success:(BOOL)a1;
- (void)StopUpload:(id)a0;
- (void)StopUploadByChatName:(id)a0;
- (void)stopCurrentUpload;
- (void)CheckQueue;
- (BOOL)checkNeedPreprocess:(id)a0;
- (BOOL)CreateUploadEvent;
- (BOOL)CreateSendAppMsg;
- (id)CreateAppMsgWithMsgWrap:(id)a0;
- (BOOL)CreateSendWithAppMsg:(id)a0 md5:(id)a1 bigFileSignature:(id)a2;
- (BOOL)CreateCheckMd5Upload;
- (BOOL)createEmoticonUploader;
- (id)getCurrentMsgData;
- (BOOL)CreateUploadAppAttach;
- (void)UploadFail:(int)a0;
- (void)UploadOK:(BOOL)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)startDownloadFile;
- (void)onDownloadAnyFail:(id)a0;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void)OnMsgDownloadThumbOK:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadThumbFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadThumbReturn:(BOOL)a0 MsgWrap:(id)a1;
- (void)onEmoticonUploadSuccessWithEmoji:(id)a0 uploadInfo:(id)a1;
- (void)onEmoticonUploadFailWithUploadInfo:(id)a0 reason:(unsigned long long)a1 realMd5:(id)a2;
- (void)createCommonUploader;
- (void)messageUploaderSuccess:(id)a0 result:(id)a1;
- (void)messageUploaderFailure:(id)a0 uploadId:(id)a1;
- (void)messageUploaderProgress:(id)a0 progress:(double)a1;
- (BOOL)isUploading;
- (id)getExtCommInfoXml:(id)a0;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
