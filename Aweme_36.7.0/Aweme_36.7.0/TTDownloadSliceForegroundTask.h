@class NSString, TTRangeTracker;
@protocol TTDownloadTaskProtocol;

@interface TTDownloadSliceForegroundTask : TTDownloadSliceTask

@property (retain) id<TTDownloadTaskProtocol> task;
@property BOOL isRestartImmediately;
@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property (copy) NSString *sliceStorageDir;
@property BOOL isRangeDownloadCompleted;
@property (retain, nonatomic) TTRangeTracker *rangeTracker;
@property (copy) id /* block */ onSliceTaskEndCallback;
@property BOOL isSetSliceTaskCallback;
@property (copy) id /* block */ startTaskDelayHandle;

- (BOOL)setThrottleNetSpeed:(long long)a0;
- (BOOL)updateSubSliceInfoByRealFileSize;
- (id)setRangeAndMergeUserHeader:(long long)a0 endByte:(long long)a1;
- (void)decreseRetryTimesAtomic;
- (id)getUrl;
- (id)initWhithSliceConfig:(id)a0 downloadTask:(id)a1 onSliceTaskEndCallback:(id /* block */)a2;
- (void)clearReferenceCount;
- (void)setRestartImmediately;
- (id)getRangeTracker;
- (void)trySwitchCdn;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
