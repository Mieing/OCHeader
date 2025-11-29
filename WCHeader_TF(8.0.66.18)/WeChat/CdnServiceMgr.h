@class NSRecursiveLock, NSMutableDictionary, NSString, NSMutableArray;

@interface CdnServiceMgr : MMUserService <ICdnComMgrExt, MMServiceProtocol, CallbackProtocol> {
    struct shared_ptr<CdnCallback> { struct CdnCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_spCallback;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *arrNotInitUploadTaskBlock;
@property (retain, nonatomic) NSMutableArray *arrNotInitDownloadTaskBlock;
@property (retain, nonatomic) NSMutableDictionary *dicTasksBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)startUploadTaskWithRequest:(id /* block */)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
- (BOOL)startUploadTaskWithRequest:(id /* block */)a0 progress:(id /* block */)a1 existOnSvr:(id /* block */)a2 complete:(id /* block */)a3;
- (BOOL)startUploadTaskWithRequest:(id /* block */)a0 progress:(id /* block */)a1 existOnSvr:(id /* block */)a2 complete:(id /* block */)a3 actionType:(unsigned long long)a4;
- (void)addTaskBlock:(id)a0 forKey:(id)a1;
- (BOOL)stopUploadTaskWithFileKey:(id)a0;
- (BOOL)startDownloadTaskWithRequest:(id /* block */)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
- (BOOL)startDownloadWithType:(unsigned long long)a0 request:(id /* block */)a1 progress:(id /* block */)a2 complete:(id /* block */)a3;
- (BOOL)startDownloadWithType:(unsigned long long)a0 request:(id /* block */)a1 progress:(id /* block */)a2 fastComplete:(id /* block */)a3 complete:(id /* block */)a4;
- (BOOL)startPreloadDataWithRequest:(unsigned long long)a0 request:(id /* block */)a1 progress:(id /* block */)a2 preloadComplete:(id /* block */)a3;
- (BOOL)startDownloadWithType:(unsigned long long)a0 downloadMode:(int)a1 request:(id /* block */)a2 progress:(id /* block */)a3 m3u8Ready:(id /* block */)a4 moovReady:(id /* block */)a5 complete:(id /* block */)a6;
- (unsigned long long)startDownloadWithType:(unsigned long long)a0 downloadMode:(int)a1 request:(id /* block */)a2 progress:(id /* block */)a3 m3u8Ready:(id /* block */)a4 moovReady:(id /* block */)a5 fastComplete:(id /* block */)a6 complete:(id /* block */)a7 preloadComplete:(id /* block */)a8;
- (void)makeDownloadTaskStartFail:(id)a0 errorCode:(int)a1;
- (BOOL)checkIfAllowMultipleTask:(id)a0 existTaskBlocks:(id)a1;
- (BOOL)StartBatchCheckHitUpload:(void *)a0 complete:(id /* block */)a1;
- (void)setFastCompleteBlock:(id)a0 block:(id /* block */)a1;
- (int)requestVideoData:(id)a0 offset:(unsigned long long)a1 length:(long long)a2 bitrate:(int)a3 dataReadyBlock:(id /* block */)a4;
- (BOOL)stopDownloadTaskWithFileKey:(id)a0;
- (BOOL)stopDownloadTaskWithFileKey:(id)a0 taskInfo:(id *)a1;
- (BOOL)isTaskRunning:(id)a0;
- (unsigned int)getTaskStatus:(id)a0;
- (void)removeCallbackBlock:(id)a0;
- (void)retryTaskWhenCdnInit;
- (void)setCdnDebugIPForUpload:(id)a0;
- (void)setCdnDebugIPForDownload:(id)a0;
- (BOOL)internalStartUploadTaskWithTaskBlock:(id)a0;
- (unsigned long long)internalStartDownloadTaskWithTaskBlock:(id)a0;
- (void)OnUploadProgress:(id)a0;
- (void)onUploadFileExistOnCdn:(id)a0;
- (void)OnUploadEnd:(id)a0;
- (void)OnDownloadProgress:(id)a0;
- (void)OnDownloadEnd:(id)a0;
- (void)OnDownloadPartialVideoData:(id)a0;
- (void)OnM3u8Ready:(id)a0;
- (void)OnMoovReady:(id)a0;
- (void)OnMoovNotFound:(id)a0;
- (void)onDownloadToEnd:(id)a0;
- (void)OnPreloadCompleted:(id)a0;
- (void)OnRequestGetCdnDns:(int)a0;
- (void)OnRequestGetCdnDistance:(unsigned int)a0 province:(unsigned int)a1 city:(unsigned int)a2;
- (void)OnCdnInit;
- (void)UpdatePlaybackTime:(id)a0 playTime:(double)a1;
- (void)NotifyPlayerEnterBuffering:(id)a0;
- (void)NotifyPlayerLeaveBuffering:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
