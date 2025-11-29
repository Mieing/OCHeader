@class NSString, OpenInfo, NSMutableArray, EmoticonHybridDownloadProxy;

@interface OpenDownloadMgr : MMObject <EmoticonDownloadProxyDelegate, PBMessageObserverDelegate> {
    NSMutableArray *m_queDownload;
    unsigned int m_uiCurEventID;
    OpenInfo *m_oCurDownloadInfo;
    EmoticonHybridDownloadProxy *m_emoticonDownloadProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)ClearEventID;
- (id)GetTop;
- (void)Pop;
- (BOOL)InDownloading:(id)a0 MsgWrap:(id)a1 AttachId:(id)a2;
- (BOOL)InDownloading:(id)a0 MsgWrap:(id)a1;
- (BOOL)StartDownload:(id)a0 MsgWrap:(id)a1 AttachId:(id)a2 AttachDataSize:(unsigned int)a3 AttachFileExt:(id)a4;
- (BOOL)StartDownload:(id)a0 MsgWrap:(id)a1;
- (void)StopDownload:(id)a0 MsgWrap:(id)a1 AttachId:(id)a2;
- (void)StopDownload:(id)a0 MsgWrap:(id)a1;
- (void)StopDownloadByUsr:(id)a0;
- (void)CheckQueue;
- (BOOL)CreateDownloadEvent;
- (void)DownloadFail:(unsigned int)a0;
- (void)DownloadFail:(unsigned int)a0 expired:(BOOL)a1;
- (void)DownloadOK:(id)a0;
- (void)DownloadFinishedWithTempFilePath:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onEmoticonDownloadMd5Ok:(id)a0 AndFilePath:(id)a1 withUserInfo:(id)a2;
- (void)onEmoticonDownloadMd5Failed:(id)a0 withUserInfo:(id)a1;
- (void)onEmoticonDownloadingMd5:(id)a0 withUserInfo:(id)a1 partLen:(unsigned long long)a2 totalLen:(unsigned long long)a3;
- (void).cxx_destruct;

@end
