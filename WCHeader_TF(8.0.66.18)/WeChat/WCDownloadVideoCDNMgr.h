@class NSMutableDictionary, NSString, NSMutableArray, WCPreloadVideoCleanLogic;

@interface WCDownloadVideoCDNMgr : NSObject <WCPlayerEventExt, ICdnComMgrExt>

@property (nonatomic) BOOL bEnablePreload;
@property (retain, nonatomic) NSMutableArray *arrDownloadTask;
@property (retain, nonatomic) NSMutableArray *arrPreloadTask;
@property (retain, nonatomic) WCPreloadVideoCleanLogic *preloadCacheCleanLogic;
@property (retain, nonatomic) NSMutableDictionary *dicPreloadingTask;
@property (retain, nonatomic) NSMutableDictionary *dicStreamingTask;
@property (retain, nonatomic) NSMutableDictionary *dicDownloadingInfoWraps;
@property (retain, nonatomic) NSMutableDictionary *dicDownloadingArgsWraps;
@property (readonly, nonatomic) long long category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)videoDownloadCategoryForDataItem:(id)a0;
+ (long long)videoDownloadCategoryForMediaItem:(id)a0;

- (id)initWithCategory:(long long)a0;
- (void)initData;
- (BOOL)IsMediaItemInDownloadQueue:(id)a0;
- (BOOL)IsMediaItemInDownloadQueue:(id)a0 isIncludePlayerDownload:(BOOL)a1;
- (BOOL)checkDownloadState:(id)a0;
- (id)getDownloadReferUrl:(id)a0;
- (unsigned long long)StartDownloadVideo:(id)a0;
- (unsigned long long)StartDownloadVideo:(id)a0 DownloadMode:(unsigned long long)a1;
- (void)StartPreloadVideoForMediaItem:(id)a0 preloadItem:(id)a1;
- (void)clearAllCurrentVideoPreload;
- (unsigned long long)StartDownloadVideo:(id)a0 DownloadMode:(unsigned long long)a1 requestPercent:(unsigned int)a2 preloadItem:(id)a3;
- (void)startPreloadWithTask:(id)a0;
- (void)stopPreloadWithTask:(id)a0;
- (void)startStreamingDownloadWithTask:(id)a0;
- (BOOL)StopCurDownloadWithTaskInfo:(id)a0 outInfo:(id *)a1;
- (void)reportKVVideoArgsWithResult:(id)a0;
- (BOOL)StopPreloadVideo:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)StopDownloadVideo:(id)a0 downloadTaskInfo:(id *)a1;
- (void)downloadTaskWithTaskInfo:(id)a0;
- (void)CheckQueue;
- (BOOL)prepareDownloadArgsForTaskInfo:(id)a0;
- (id)generateVideoInfoWrap:(id)a0;
- (void)realStartDownload:(id)a0 info:(id)a1;
- (void)PausePreload;
- (void)ResumePreload;
- (BOOL)createFileWithPath:(id)a0 exists:(BOOL *)a1;
- (BOOL)saveFileFromPath:(id)a0 toPath:(id)a1;
- (BOOL)IsNextPreloadOverDailyMaxCount;
- (void)AddPreloadRecord:(id)a0;
- (void)RemovePreloadRecord:(id)a0 shouldRemoveFile:(BOOL)a1;
- (void)CleanOutOfDatePreloadTempFile;
- (void)KVStatPreloadVideoFinish:(id)a0 kbPerSec:(unsigned int)a1;
- (void)KVStatPreloadVideoFinish:(id)a0 kbPerSec:(unsigned int)a1 result:(const void *)a2;
- (void)DelTaskInDownloadQueue:(id)a0;
- (void)OnCdnVideoMoovReady:(id)a0;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)videoSourceChange:(id)a0;
- (void)downloadVideoSucess:(id)a0;
- (BOOL)regenerateThumbImageForMediaItem:(id)a0 withSightPath:(id)a1;
- (void)getMomentsFileKey:(id *)a0 mid:(id *)a1 fromDownloadArgsWrap:(id)a2;
- (void)onPlayerStartDownload:(id)a0;
- (void)onPlayerDownloadStartFail:(int)a0 argsWrap:(id)a1;
- (void)onPlayerDownloadComplete:(id)a0 downloadInfo:(id)a1;
- (void)onPlayerDownloadStop:(id)a0 downloadInfo:(id)a1;
- (void).cxx_destruct;

@end
