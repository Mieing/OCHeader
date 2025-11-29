@class NSMutableDictionary, NSArray, NSMutableArray, WCStoryDownloadTaskInfo;

@interface WCStoryDownloadVideoCdnMgr : MMObject <ICdnComMgrExt, INetworkStatusMgrExt>

@property (retain, nonatomic) NSMutableDictionary *dicIplist;
@property (retain, nonatomic) WCStoryDownloadTaskInfo *curTaskInfo;
@property (retain, nonatomic) NSMutableArray *arrPreloadQueue;
@property (retain, nonatomic) NSMutableDictionary *dicPreloadingTask;
@property (retain, nonatomic) NSArray *arrBadNetworkPreload;
@property (retain, nonatomic) NSArray *arrSmoothNetworkPreload;
@property (nonatomic) unsigned int lastPreloadChatRoomTime;

- (id)init;
- (id)generateDownloadTaskInfoWith:(id)a0;
- (BOOL)IsTaskNeedPreload:(id)a0;
- (BOOL)IsNetWorkSmooth;
- (void)stopNotNeedPreloadTasks:(id)a0;
- (void)cleanTaskForStreamTaksInfo:(id)a0;
- (void)StartVideoPreloadWithItems:(id)a0;
- (void)StartPreloadChatRoomVideoWithMediaItem:(id)a0;
- (void)StartPreloadSNSEntranceWithItems:(id)a0;
- (void)CheckPreloadQueue;
- (void)StartVideoStreamDownloadWithMediaWrap:(id)a0;
- (BOOL)StopVideoDownloadWithMediaWrap:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)StopDownloadTaskWithClientId:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)IsStreamDownloadingWithMediaItem:(id)a0;
- (void)downloadTask:(id)a0;
- (void)realStartDownload:(id)a0;
- (void)report16664WithPreloadTaskInfo:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)videoSourceChange:(id)a0;
- (void)OnCdnVideoPreloadEnd:(id)a0;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
