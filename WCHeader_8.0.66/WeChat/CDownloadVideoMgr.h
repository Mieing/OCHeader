@class NSMutableArray, CMessageWrap;

@interface CDownloadVideoMgr : NSObject <PBMessageObserverDelegate> {
    NSMutableArray *m_arrDownloadList;
    NSMutableArray *m_arrDownloadStatList;
    unsigned int m_uiCurDownloadEventID;
}

@property (retain, nonatomic) CMessageWrap *m_wrapCurDownloadMsg;

- (id)init;
- (void)dealloc;
- (void)DelMsgInDownloadQueue:(id)a0;
- (id)GetStatInfo:(id)a0;
- (void)updateMessageWrap:(id)a0 downloadStatus:(unsigned int)a1;
- (void)logStatInfo:(id)a0 retCode:(int)a1;
- (void)updateMessageWrapDownload:(id)a0 offset:(unsigned int)a1;
- (id)getFilePath:(id)a0;
- (BOOL)saveData:(id)a0 file:(id)a1;
- (unsigned int)getFileSize:(id)a0;
- (void)resetCurrentDownloadStatus;
- (void)StopCurrentDownload;
- (void)Stop;
- (BOOL)createDownloadEvent:(id)a0;
- (void)downloadVideo:(id)a0;
- (BOOL)IsMsgInDownloadQueue:(id)a0;
- (id)GetMsg:(id)a0;
- (void)StartDownload:(id)a0 MsgWrap:(id)a1;
- (void)interStopDownload:(id)a0;
- (void)StopDownload:(id)a0 MsgWrap:(id)a1;
- (void)StopDownloadByChatName:(id)a0;
- (id)getDownloadingMesageWrap:(id)a0;
- (void)OnDownloadPartFail:(id)a0 RetCode:(int)a1;
- (BOOL)CheckDownloadPart:(id)a0 messageWrap:(id)a1;
- (void)OnDownloadPartOK:(id)a0 messageWrap:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
