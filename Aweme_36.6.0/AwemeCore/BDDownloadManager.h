@class NSString, NSMapTable, NSOperationQueue, NSArray, NSDictionary;
@protocol BDDownloadManagerTaskDelegate;

@interface BDDownloadManager : NSObject <BDDownloadTaskDelegate, BDWebImageDownloaderInfo, BDWebImageDownloaderDownloading, BDWebImageDownloaderManagement> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain, nonatomic) NSMapTable *weakTasks;
@property (weak, nonatomic) id<BDDownloadManagerTaskDelegate> delegate;
@property (nonatomic) unsigned long long stackMode;
@property (copy, nonatomic) NSString *tempPath;
@property (nonatomic) BOOL downloadResumeEnabled;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSArray *allTasks;
@property (retain, nonatomic) Class downloadTaskClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long maxConcurrentTaskCount;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double timeoutIntervalForResource;
@property (copy, nonatomic) NSDictionary *defaultHeaders;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL checkMimeType;
@property (nonatomic) BOOL checkDataLength;
@property (nonatomic) BOOL isCocurrentCallback;

- (void)downloadTask:(id)a0 finishedWithData:(id)a1 savePath:(id)a2;
- (void)downloadTask:(id)a0 failedWithError:(id)a1;
- (void)downloadTask:(id)a0 didReceiveBlurHash:(id)a1;
- (void)downloadTask:(id)a0 didReceiveData:(id)a1 finished:(BOOL)a2;
- (BOOL)isRepackNeeded:(id)a0;
- (id)heicRepackData:(id)a0;
- (void)updateTaskThrottleNetSpeed:(long long)a0 withIdentifier:(id)a1;
- (id)downloadWithURL:(id)a0 identifier:(id)a1 config:(id)a2;
- (id)downloadWithURL:(id)a0 identifier:(id)a1 priority:(long long)a2 timeoutInterval:(double)a3 startImmediately:(BOOL)a4 progressDownload:(BOOL)a5 heicProgressDownloadForThumbnail:(BOOL)a6 verifyData:(BOOL)a7;
- (id)_creatMDLTaskWithURL:(id)a0 identifier:(id)a1 timeout:(double)a2;
- (id)_creatTaskWithURL:(id)a0 identifier:(id)a1 timeout:(double)a2;
- (unsigned long long)_resultRequestIgnoreQueueTypeForFirstRequestIgnoreQueueType:(unsigned long long)a0;
- (id)_targetRequestQueueForRequestIgnoreQueueType:(unsigned long long)a0;
- (id)taskWithIdentifier:(id)a0;
- (BOOL)isTaskInRunningTasks:(id)a0;
- (void)downloadTaskDidCanceled:(id)a0;
- (void)downloadTask:(id)a0 receivedSize:(long long)a1 expectedSize:(long long)a2;
- (id)downloadWithURL:(id)a0 identifier:(id)a1 startImmediately:(BOOL)a2;
- (id)downloadWithURL:(id)a0 identifier:(id)a1 priority:(long long)a2 timeoutInterval:(double)a3 startImmediately:(BOOL)a4 progressDownload:(BOOL)a5 verifyData:(BOOL)a6;
- (id)downloadWithURL:(id)a0 identifier:(id)a1 timeoutInterval:(double)a2 startImmediately:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)cancelTaskWithIdentifier:(id)a0;

@end
