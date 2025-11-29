@class CdnTaskInfo, NSMutableArray, NSRecursiveLock;
@protocol OpenDownloadCDNMgrDelegate;

@interface OpenDownloadCDNMgr : NSObject <ICdnComMgrExt> {
    NSMutableArray *_arrFileInfo;
    CdnTaskInfo *_curTaskInfo;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (weak, nonatomic) id<OpenDownloadCDNMgrDelegate> m_delegate;
@property (nonatomic) BOOL bLargeFile;
@property (nonatomic) BOOL enableChatMessageNotify;

- (id)init;
- (BOOL)InDownloading:(id)a0 MsgWrap:(id)a1;
- (BOOL)IsNonQuotaDownloading:(id)a0 MsgWrap:(id)a1;
- (BOOL)IsCurrentDownloading:(id)a0 MsgWrap:(id)a1;
- (void)DelTaskInDownloadQueue:(id)a0;
- (id)GetTop;
- (void)Pop;
- (void)CheckQueue;
- (void)modMsgByBitSetInMainQueue:(id)a0 MsgWrap:(id)a1 BitSet:(unsigned int)a2;
- (void)DownloadOk;
- (void)DownloadFail:(int)a0 expired:(BOOL)a1;
- (BOOL)StartDownload:(id)a0 MsgWrap:(id)a1;
- (BOOL)StartDownload:(id)a0 MsgWrap:(id)a1 Silent:(BOOL)a2 autoDownload:(BOOL)a3;
- (BOOL)StartDownload:(id)a0 MsgWrap:(id)a1 Silent:(BOOL)a2 autoDownload:(BOOL)a3 behavior:(long long)a4;
- (void)StopCurDownload;
- (void)StopDownload:(id)a0 MsgWrap:(id)a1;
- (void)StopDownload:(id)a0 MsgWrap:(id)a1 needNotify:(BOOL)a2;
- (void)StopDownloadByUsr:(id)a0;
- (id)getAppAttachFilePath:(id)a0;
- (id)GetFileCachePath;
- (void)addCommmonCache:(id)a0;
- (void)moveFileCacheToCommomCache;
- (void)LoadCacheData;
- (BOOL)preCheckIfMsgWrapCanQuickDownload:(id)a0;
- (BOOL)CheckForLocalCache:(id)a0;
- (void)localCacheDownloadSuccess;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
