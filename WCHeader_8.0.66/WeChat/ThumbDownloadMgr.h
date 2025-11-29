@class CdnTaskInfo, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ThumbDownloadMgr : NSObject <ICdnComMgrExt> {
    NSMutableArray *m_arrQueue;
    NSObject<OS_dispatch_queue> *m_thumbDownloadQueue;
}

@property (retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo;

- (id)init;
- (void)CheckQueue;
- (BOOL)IsDownloadingThumb:(id)a0;
- (BOOL)realIsDownloadingThumb:(id)a0;
- (void)StartDownloadThumb:(id)a0 isPrior:(BOOL)a1;
- (void)realStartDownloadThumb:(id)a0 isPrior:(BOOL)a1;
- (void)StopCurDownload;
- (void)StopDownloadThumb:(id)a0;
- (void)realStopDownloadThumb:(id)a0;
- (void)StopDownloadThumbByUsrName:(id)a0;
- (void)realStopDownloadThumbByUsrName:(id)a0;
- (void)DownloadFail:(int)a0;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
