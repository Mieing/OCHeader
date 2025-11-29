@class TTAVPreloaderItem;

@interface TTVideoEnginePlayPreloadSource : TTVideoEnginePlayVidSource

@property (retain, nonatomic) TTAVPreloaderItem *preloadItem;

- (id)currentUrl;
- (unsigned long long)autoResolution;
- (id)supportResolutions;
- (BOOL)supportSSL;
- (BOOL)supportDash;
- (BOOL)isMainUrl;
- (BOOL)isLocalFile;
- (id)urlForResolution:(unsigned long long)a0;
- (id)allUrlsForResolution:(unsigned long long *)a0;
- (BOOL)skipToNext;
- (long long)retryStrategyForRetryCount:(long long)a0;
- (BOOL)preloadDataIsExpire;
- (void).cxx_destruct;
- (id)deepCopy;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)currentResolution;

@end
