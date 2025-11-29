@class TTDownloadManager, TTDownloadDispatcher;

@interface TTDownloadApi : NSObject {
    TTDownloadManager *downloadManager;
    TTDownloadDispatcher *dispatcher;
}

+ (void)setIsReportFileStatus:(BOOL)a0;
+ (id)shareInstance;

- (void)deleteDownloadWithURL:(id)a0 resultBlock:(id /* block */)a1;
- (void)setLittleFileCleanCacheCycleTime:(int)a0;
- (void)setWifiOnlyWithUrlKey:(id)a0 isWifiOnly:(BOOL)a1;
- (void)startCleanOldCache:(double)a0;
- (void)setGlobalDownloadParameters:(id)a0;
- (BOOL)setThrottleNetSpeedWithURL:(id)a0 bytesPerSecond:(long long)a1;
- (void)stopClearNoExpireCache;
- (long long)getAllNoExpireTimeCacheCount;
- (void)setGlobalMetricsBlock:(id /* block */)a0;
- (void)setIsForceCacheLifeTimeMaxEnable:(BOOL)a0;
- (int)resumeDownloadWithURL:(id)a0 progress:(id /* block */)a1 status:(id /* block */)a2 userParameters:(id)a3;
- (int)startDownloadWithURL:(id)a0 fileName:(id)a1 md5Value:(id)a2 urlLists:(id)a3 progress:(id /* block */)a4 status:(id /* block */)a5 userParameters:(id)a6;
- (void)cancelTaskAsync:(id)a0 block:(id /* block */)a1;
- (id)queryTaskInfoSync:(id)a0;
- (int)startDownloadWithKey:(id)a0 fileName:(id)a1 md5Value:(id)a2 urlLists:(id)a3 progress:(id /* block */)a4 status:(id /* block */)a5 userParameters:(id)a6;
- (BOOL)setDownlodingTaskCountMax:(short)a0;
- (void)setDelayBackgroundTaskEnable:(BOOL)a0;
- (void)cancelDownloadWithURL:(id)a0;
- (BOOL)preResourcesCheck:(id)a0 progress:(id /* block */)a1 resultBlock:(id /* block */)a2 userParameters:(id)a3;
- (void)updateResponseHeaderAndCallback:(id)a0 result:(id)a1 resultBlock:(id /* block */)a2;
- (void)reportDownloadProgress:(id)a0 progress:(id /* block */)a1 resultBlock:(id /* block */)a2;
- (void)updateTaskParameters:(id)a0 param:(id)a1;
- (void)dispatchTask:(id)a0 userParameters:(id)a1 resultBlock:(id /* block */)a2 progress:(id /* block */)a3 work:(id /* block */)a4;
- (void)queryDownloadInfoWithURL:(id)a0 downloadInfoBlock:(id /* block */)a1;
- (void)setDownloadEventBlock:(id /* block */)a0;
- (void)cancelTaskSync:(id)a0;
- (BOOL)deleteTaskSync:(id)a0;
- (BOOL)clearAllCache:(long long)a0 clearCacheKey:(id)a1;
- (long long)getAllCacheCount;
- (void)setGlobalCacheLifeTime:(double)a0;
- (void)setStartBackgroundCountdownTime:(double)a0;
- (void)setCheckCacheExpirationTimeEnable:(BOOL)a0;
- (void)setIsDelayDeleteEnable:(BOOL)a0;
- (void)setAppInfo:(id)a0 appChannel:(id)a1;
- (id)startDownloadWithUrlList:(id)a0 urlLists:(id)a1 fileNameDic:(id)a2 downloadDir:(id)a3 concurrentCount:(char)a4 progress:(id /* block */)a5 result:(id /* block */)a6 param:(id)a7;
- (long long)getAllTaskCount;
- (short)getDownlodingTaskCountMax;
- (long long)getQueueWaitTaskCount;
- (int)resumeDownloadWithKey:(id)a0 urlLists:(id)a1 progress:(id /* block */)a2 status:(id /* block */)a3 userParameters:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
