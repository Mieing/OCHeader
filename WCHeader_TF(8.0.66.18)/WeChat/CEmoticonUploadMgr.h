@class NSString, CEmoticonUploadInfo, NSMutableArray, EmoticonUploader;

@interface CEmoticonUploadMgr : MMObject <EmoticonUploaderDelegate, IMsgExt, PBMessageObserverDelegate> {
    unsigned int m_uiCurEventID;
    NSMutableArray *m_uploadInfoQueue;
    CEmoticonUploadInfo *m_oCurUploadInfo;
    EmoticonUploader *m_emoticonUploader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)ClearEventID;
- (void)ClearCurUpload;
- (BOOL)IsMsgInUploadQueue:(id)a0;
- (void)DeleteUploadInfoWithMsg:(id)a0;
- (void)DeleteUploadInfosWithUserName:(id)a0;
- (BOOL)InsertMessageToUploadQueue:(id)a0;
- (void)StartUpload:(id)a0;
- (void)StopUpload:(id)a0;
- (void)StopUploadByChatName:(id)a0;
- (void)CheckUpload;
- (BOOL)CreateUploadEvent:(id)a0;
- (BOOL)StartCdnUpload;
- (void)UploadFail;
- (void)UploadOK:(BOOL)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)getExtCommInfoXml:(id)a0;
- (void)onEmoticonUploadSuccessWithEmoji:(id)a0 uploadInfo:(id)a1;
- (void)onEmoticonUploadFailWithUploadInfo:(id)a0 reason:(unsigned long long)a1 realMd5:(id)a2;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
