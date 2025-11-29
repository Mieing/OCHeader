@class NSString, NSMutableArray, C2CVideoDownloadTaskInfo;

@interface C2CVideoDownloadMgr : MMUserService <WCPlayerEventExt, CdnServiceDownloadMgrExt, MMServiceProtocol>

@property (retain, nonatomic) C2CVideoDownloadTaskInfo *currentTask;
@property (retain, nonatomic) NSMutableArray *arrDownloadTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startDownloadWithArgsWrap:(id)a0 isSaveAlbum:(BOOL)a1;
- (BOOL)startDownloadRawVideo:(id)a0;
- (BOOL)startDownloadVideoWithTaskInfo:(id)a0;
- (id)getExistVideoSaveDownloadArgsWrap:(id)a0;
- (id)getDownloadTaskInfo:(id)a0;
- (void)stopDownloadRawVideo:(id)a0;
- (void)stopDownloadVideo:(id)a0;
- (void)stopVideoWithFileKey:(id)a0;
- (void)stopDownloadWithChatName:(id)a0;
- (void)checkQueue;
- (id)getExistDownloadTaskInfo:(id)a0;
- (BOOL)isMsgDownloading:(id)a0;
- (BOOL)isRawVideoDownloading:(id)a0;
- (BOOL)isCompressVideoDownloading:(id)a0;
- (void)onPlayerStartDownload:(id)a0;
- (void)onPlayerDownloadStartFail:(int)a0 argsWrap:(id)a1;
- (void)onPlayerDownloadStop:(id)a0 downloadInfo:(id)a1;
- (void)onPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onPlayerDownloadComplete:(id)a0 downloadInfo:(id)a1;
- (void)onDownloadFail:(id)a0;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void).cxx_destruct;

@end
