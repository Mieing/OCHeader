@class NSString, NSMutableArray, NSMutableDictionary;

@interface WCPlayerHttpDownloadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>

@property (retain, nonatomic) NSMutableArray *preloadingArray;
@property (retain, nonatomic) NSMutableArray *preloadQueue;
@property (retain, nonatomic) NSMutableDictionary *dicMediaTaskInfo;
@property (nonatomic) int videoPreloadQueueMaxCount;
@property (nonatomic) unsigned int maxHttpConcurrent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)StartDownloadWithMediaWrap:(id)a0;
- (void)eliminateMediaTaskInfos;
- (void)removePreloadTaskWithMediaWrap:(id)a0;
- (BOOL)realStartHttpVideoStreamingDownloadWithIdentifier:(id)a0 httpUrl:(id)a1 fileType:(int)a2 filePath:(id)a3 preloadPercent:(int)a4 Timeout:(unsigned int)a5 referer:(id)a6 blockSize:(unsigned int)a7;
- (BOOL)realStartSnsVideoStreamingDownloadWithMediaWrap:(id)a0 httpUrl:(id)a1 filePath:(id)a2 preloadPercent:(int)a3 referer:(id)a4;
- (BOOL)StopDownloadTaskWithMediaWrap:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)StopDownloadTaskWithUrl:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)RemovePreLoadWithVideoUrl:(id)a0;
- (BOOL)IsPreloadingVideoUrl:(id)a0;
- (BOOL)IsDownloadingWithMediaWrap:(id)a0;
- (BOOL)IsPreloadingWithMediaWrap:(id)a0;
- (void)StartPreloadVideoWithMediaWraps:(id)a0;
- (void)StartOnePreloadVideoWithMediaWrap:(id)a0;
- (void)StartOneLIFOPreloadWithMediaWrap:(id)a0;
- (void)CheckPreloadQueue;
- (void)onPreloadSuccessWithTaskInfo:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void).cxx_destruct;

@end
