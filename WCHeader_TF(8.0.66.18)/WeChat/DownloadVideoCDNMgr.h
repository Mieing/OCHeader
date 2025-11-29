@class NSString, PreloadVideoCleanLogic, NSMutableArray, CdnTaskInfo;

@interface DownloadVideoCDNMgr : NSObject <WCPlayerEventExt, C2CVideoDownloadMgrExt, ICdnComMgrExt> {
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrPreloadTask;
    BOOL _bEnablePreload;
    PreloadVideoCleanLogic *m_preloadCacheCleanLogic;
}

@property (retain, nonatomic) CdnTaskInfo *curTaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)IsNextPreloadOverDailyMaxCount;
- (void)AddPreloadRecord:(id)a0;
- (void)RemovePreloadRecord:(id)a0 shouldRemoveFile:(BOOL)a1;
- (void)CleanOutOfDatePreloadTempFile;
- (unsigned long long)CleanAllPreloadTempFile;
- (void)KVStatPreloadVideoFinish:(id)a0 kbPerSec:(unsigned int)a1;
- (void)KVStatPreloadVideoFinish:(id)a0 kbPerSec:(unsigned int)a1 result:(const void *)a2;
- (void)updateVideoThumbImage:(id)a0;
- (void)updateVideoThumb:(id)a0;
- (void)DownloadOk:(id)a0;
- (void)DownloadFail:(int)a0 oDownloadInfo:(id)a1 taskInfo:(id)a2;
- (void)videoKVReportWithTaskInfo:(id)a0 result:(const void *)a1;
- (void)DelTaskInDownloadQueue:(id)a0;
- (void)DelTaskInPreloadQueue:(id)a0;
- (void)DelTask:(id)a0 inQueue:(id)a1;
- (BOOL)CheckForLocalCache:(id)a0 isPreloadTask:(BOOL)a1;
- (void)CheckQueue;
- (BOOL)checkDownloadState:(id)a0;
- (BOOL)isFirstDownloadTask:(id)a0;
- (void)updateFileAndCache:(id)a0;
- (BOOL)IsMsgInDownloadQueue:(id)a0;
- (BOOL)IsMsgInPreloadQueue:(id)a0;
- (BOOL)IsMsgCurrentDownloading:(id)a0 inNormalDownloadQueue:(BOOL)a1;
- (void)StartDownloadVideo:(id)a0 AutoDownload:(BOOL)a1;
- (void)StartDownloadVideo:(id)a0 AutoDownload:(BOOL)a1 Priority:(BOOL)a2;
- (void)StartDownloadVideo:(id)a0 AutoDownload:(BOOL)a1 Priority:(BOOL)a2 Silent:(BOOL)a3;
- (void)StartPreloadVideo:(id)a0;
- (void)StartPreloadVideo:(id)a0 useQuota:(BOOL)a1;
- (void)StartPreloadVideo:(id)a0 behavior:(long long)a1;
- (unsigned long long)GetVideoMessageDownloadingMode:(id)a0;
- (BOOL)canUseStreamStopLogic:(id)a0;
- (BOOL)shouldUseOldVideoDownloadLogic:(id)a0;
- (BOOL)canUseVideoStreamFullDownloadLogic:(id)a0;
- (BOOL)StopCurDownload:(id *)a0;
- (BOOL)StopDownload:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)StopDownload:(id)a0 downloadTaskInfo:(id *)a1 needNotify:(BOOL)a2;
- (void)StopDownloadByChatName:(id)a0;
- (void)Stop;
- (void)PausePreload;
- (void)ResumePreload;
- (BOOL)StopVideoStreamingDownload:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)IsVideoMoovHasDownloadedByMessageWrap:(id)a0;
- (void)updateVideoDownloadModeWithClientId:(id)a0 downloadMode:(unsigned long long)a1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)processDownloadCompleteEvent:(id)a0 downloadInfo:(id)a1;
- (void)OnCdnDownload:(id)a0;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void)onPlayerDownloadComplete:(id)a0 downloadInfo:(id)a1;
- (void)onPlayerDownloadStop:(id)a0 downloadInfo:(id)a1;
- (void)onVideoDownloadComplete:(id)a0 isRaw:(BOOL)a1 taskInfo:(id)a2;
- (void)onVideoDownloadStop:(id)a0;
- (void)onRoamBackupPackageServiceLoadMediaProgress:(id)a0 dataID:(id)a1 finished:(unsigned long long)a2 total:(unsigned long long)a3;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)a0 errorCode:(unsigned int)a1 dataID:(id)a2;
- (void).cxx_destruct;

@end
