@class NSString;
@protocol ALMVideoPreloadSpeedProtocol, ALMVideoPreloadCDNInfoProtocol;

@interface ALMSysPlayerPreloaderWrapper : NSObject <ALMVideoPreloadProtocol>

@property (nonatomic) BOOL enablePrefetchWIFIOnly;
@property (nonatomic) BOOL useTTNet;
@property (weak, nonatomic) id<ALMVideoPreloadSpeedProtocol> delegate;
@property (weak, nonatomic) id<ALMVideoPreloadCDNInfoProtocol> cdnDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setNetWorkType:(unsigned long long)a0;
+ (id)sharedPreloader;
+ (id)forceHTTPSURL:(id)a0;

- (void)setEnableMonitorPlayNetwork:(BOOL)a0;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 tag:(id)a6;
- (void)checkOutPreloadStrategyScene:(id)a0;
- (void)pausePreloadStrategyScene:(id)a0;
- (void)resumePreloadStrategyScene:(id)a0;
- (id)strategy:(id)a0 prefetchPreloadInfoOf:(id)a1;
- (void)businessEventStrategyScene:(id)a0;
- (void)setExtInfo:(id)a0;
- (void)setMaxConcurrentCount:(long long)a0;
- (void)reportDownloadStatus:(long long)a0;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 tag:(id)a7;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 tag:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9 cancelBlock:(id /* block */)a10;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10 cancelBlock:(id /* block */)a11;
- (void)preloadAudioID:(id)a0 andAudioURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 tag:(id)a6;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 priorityLevel:(long long)a9 successBlock:(id /* block */)a10 failureBlock:(id /* block */)a11 cancelBlock:(id /* block */)a12;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 priorityLevel:(long long)a9 successBlock:(id /* block */)a10 failureBlock:(id /* block */)a11 cancelBlock:(id /* block */)a12 customHeaderDic:(id)a13;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 tag:(id)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8 cancelBlock:(id /* block */)a9;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 preloadOffset:(long long)a3 group:(id)a4 fileCs:(id)a5 urlKey:(id)a6 videoModelString:(id)a7 videoModelResolution:(unsigned long long)a8 tag:(id)a9 successBlock:(id /* block */)a10 failureBlock:(id /* block */)a11 cancelBlock:(id /* block */)a12;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 preloadOffset:(long long)a3 group:(id)a4 fileCs:(id)a5 urlKey:(id)a6 videoModelString:(id)a7 videoModelResolution:(unsigned long long)a8 tag:(id)a9 priorityLevel:(long long)a10 successBlock:(id /* block */)a11 failureBlock:(id /* block */)a12 cancelBlock:(id /* block */)a13;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 preloadOffset:(long long)a3 group:(id)a4 fileCs:(id)a5 urlKey:(id)a6 videoModelString:(id)a7 videoModelResolution:(unsigned long long)a8 tag:(id)a9 priorityLevel:(long long)a10 successBlock:(id /* block */)a11 failureBlock:(id /* block */)a12 cancelBlock:(id /* block */)a13 customHeaderDic:(id)a14;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 preloadOffset:(long long)a3 group:(id)a4 fileCs:(id)a5 urlKey:(id)a6 videoModelString:(id)a7 videoModelResolution:(unsigned long long)a8 tag:(id)a9 priorityLevel:(long long)a10 progressBlock:(id /* block */)a11 successBlock:(id /* block */)a12 failureBlock:(id /* block */)a13 cancelBlock:(id /* block */)a14 customHeaderDic:(id)a15;
- (void)cancelTaskForVideoID:(id)a0 andVideoURL:(id)a1;
- (void)cancelTaskForVideoID:(id)a0 andVideoURL:(id)a1 urlKey:(id)a2;
- (void)cancelGroup:(id)a0;
- (void)getTaskCacheVideoID:(id)a0 andVideoURL:(id)a1 block:(id /* block */)a2;
- (void)getTaskCacheVideoID:(id)a0 andVideoURL:(id)a1 urlKey:(id)a2 block:(id /* block */)a3;
- (long long)cacheSizeForVideoID:(id)a0 andVideoURL:(id)a1 urlKey:(id)a2;
- (void)preloadVideoID:(id)a0 andVideoURLs:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 priorityLevel:(long long)a9 didStartBlock:(id /* block */)a10 progressBlock:(id /* block */)a11 successBlock:(id /* block */)a12 failureBlock:(id /* block */)a13 cancelBlock:(id /* block */)a14 customHeaderDic:(id)a15;
- (void)preloadVideoID:(id)a0 andVideoURLs:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 priorityLevel:(long long)a9 didStartBlock:(id /* block */)a10 successBlock:(id /* block */)a11 failureBlock:(id /* block */)a12 cancelBlock:(id /* block */)a13 customHeaderDic:(id)a14;
- (void)preloadVideoID:(id)a0 andVideoURLs:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 priorityLevel:(long long)a9 didStartBlock:(id /* block */)a10 successBlock:(id /* block */)a11 failureBlock:(id /* block */)a12 cancelBlock:(id /* block */)a13;
- (void)preloadVideoID:(id)a0 andVideoURLs:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 videoModelResolution:(unsigned long long)a7 tag:(id)a8 didStartBlock:(id /* block */)a9 successBlock:(id /* block */)a10 failureBlock:(id /* block */)a11 cancelBlock:(id /* block */)a12;
- (void)preloadVideoID:(id)a0 andVideoURLs:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 videoModelString:(id)a6 tag:(id)a7 didStartBlock:(id /* block */)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10 cancelBlock:(id /* block */)a11;
- (void)updatePlayerPreloaderParallelNum:(long long)a0;
- (void)preparePreloaderItemCDNUrlExpiredTime:(long long)a0;
- (void)resetPreloaderItemCDNUrlExpiredTime;
- (void)enablePreloadStrategy:(BOOL)a0;
- (void)configPreloadStrategyAlgorithmJson:(id)a0;
- (void)configPreloadStrategySmartAndSettingsJson:(id)a0;
- (void)setMediaDataSourceDelegate:(id)a0;
- (void)configSRStrategyAlgorithmJson:(id)a0;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 tag:(id)a3;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 tag:(id)a4;
- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 completion:(id /* block */)a4 tag:(id)a5;
- (id)mediaListForStrategy:(id)a0 forSceneId:(id)a1 offet:(long long)a2 count:(long long)a3 userData:(id)a4;
- (void)__preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 tag:(id)a4;
- (void)disableSameTask:(BOOL)a0;
- (void)disableMonitorSpecialPreloadtask:(BOOL)a0;
- (void)setItemID:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)cancel;

@end
