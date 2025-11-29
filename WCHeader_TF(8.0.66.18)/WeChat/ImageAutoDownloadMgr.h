@class NSString, ImageAutoControl, CMessageWrap, NSMutableArray;

@interface ImageAutoDownloadMgr : MMUserService <MMServiceProtocol, IMsgExt, IDownloadImageExt, IEnterpriseMsgExt> {
    NSMutableArray *m_arrChatQueue;
    NSMutableArray *m_arrBackGroundQueue;
    unsigned int m_uiStatus;
    ImageAutoControl *m_oImageAutoControl;
}

@property (retain, nonatomic) CMessageWrap *m_CurDownloadingMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)LoadControlData;
- (void)SaveControlData;
- (unsigned int)GetQueueType:(id)a0;
- (BOOL)IsQueueCheckNotify:(id)a0;
- (BOOL)IsInDownloadQueue:(id)a0 Queue:(id)a1;
- (void)RemoveMsgFromQueue:(id)a0 Msg:(id)a1;
- (void)RemoveMsgFromQueue:(id)a0 ByChatName:(id)a1;
- (BOOL)IsMsgDownloaded:(id)a0;
- (BOOL)IsMsgCanDownloadForExp:(id)a0 CheckNotify:(BOOL)a1;
- (BOOL)IsMsgCanDownload:(id)a0 CheckNotify:(BOOL)a1;
- (BOOL)IsImageShouldDownload:(id)a0;
- (BOOL)StartDownloadMsgFromQueue:(id)a0;
- (void)CheckQueue;
- (void)InternalAddMsgToQueue:(id)a0 Msg:(id)a1;
- (void)StartAutoDownloadFromChat:(id)a0;
- (void)StopBackGroundQueue;
- (void)ResumeBackGroundQueue;
- (void)ClearChatQueue;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnBeginDownloadVideo:(id)a0 mode:(unsigned long long)a1;
- (void)OnBeginDownloadAppData:(id)a0;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)OnDownloadImageStopByChatName:(id)a0 FromDelMsg:(BOOL)a1;
- (void)OnDownloadImageStop:(id)a0;
- (void)OnDownloadImageExpired:(id)a0;
- (void)OnDownloadImageFail:(id)a0;
- (void)OnDownloadImageOk:(id)a0;
- (void)OnBeginDownloadAppData:(id)a0 Brand:(id)a1;
- (void)OnDelMsg:(id)a0 Brand:(id)a1 DelAll:(BOOL)a2;
- (void)OnAddEnterpriseMsg:(id)a0 Brand:(id)a1 WrapMsg:(id)a2;
- (void).cxx_destruct;

@end
