@class DownloadImageInfo, NSMutableArray;

@interface DownloadImageMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_arrQueue;
}

@property (retain, nonatomic) DownloadImageInfo *m_oCurInfo;

- (id)init;
- (void)dealloc;
- (void)StopCurrentDownload;
- (BOOL)CheckMsgIsInQueue:(id)a0;
- (void)RemoveInfoFromQueue:(id)a0;
- (void)StartDownloadImage:(id)a0 HD:(BOOL)a1;
- (void)StopDownloadImage:(id)a0;
- (void)CheckQueue;
- (BOOL)CreateImplGetImg:(id)a0;
- (BOOL)CreateDownload;
- (BOOL)IsDownloading:(id)a0;
- (BOOL)StopImageDownloadTaskWithMsg:(id)a0;
- (id)GetFilePath:(id)a0;
- (id)GetTempFilePath:(id)a0;
- (void)HandleDownload:(id)a0;
- (void)DownloadFail:(int)a0 Expired:(BOOL)a1;
- (void)DownloadFail:(int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
