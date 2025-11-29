@class NSArray, NSMapTable, IESFileDownloadStrategyV2, NSOperationQueue;
@protocol EffectPlatformRequestDelegate;

@interface IESFileDownloader : NSObject

@property (retain, nonatomic) NSArray *extraDownloadQueueList;
@property (retain, nonatomic) NSArray *downloadStrategys;
@property (retain, nonatomic) NSMapTable *taskOperationMap;
@property (retain, nonatomic) IESFileDownloadStrategyV2 *downloadStrategyV2;
@property (nonatomic) BOOL enableDownloadOptimize;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;

+ (long long)operationQueueOfPriority:(long long)a0;
+ (long long)operationQueueOfPriority:(long long)a0;
+ (id)sharedInstance;

- (void)setMaxConcurrentCount:(unsigned long long)a0;
- (void)configExtraDownloadQueue;
- (void)configDownloadStrategys;
- (id)delegateDownloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)delegateDownloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadQueuePriority:(long long)a2 downloadQualityOfService:(long long)a3 downloadProgress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)delegateDownloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadParameters:(id)a2 downloadQueuePriority:(long long)a3 downloadQualityOfService:(long long)a4 downloadProgress:(id /* block */)a5 completion:(id /* block */)a6;
- (id)delegateV2DownloadFileWithURLs:(id)a0 downloadPath:(id)a1 taskKey:(id)a2 insertFront:(BOOL)a3 cancelExistDownloading:(BOOL)a4 defaultDownloadQueue:(BOOL)a5 downloadParameters:(id)a6 downloadProgress:(id /* block */)a7 completion:(id /* block */)a8;
- (void)notifyDownloadTaskWithIdentifier:(id)a0 downloadParameters:(id)a1 cancelExistDownloading:(BOOL)a2;
- (void)sortTaskByUsingDownloadInfoBlock:(id /* block */)a0;
- (id)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)delegateV2DownloadFileWithURLs:(id)a0 downloadPath:(id)a1 taskKey:(id)a2 insertFront:(BOOL)a3 cancelExistDownloading:(BOOL)a4 defaultDownloadQueue:(BOOL)a5 downloadProgress:(id /* block */)a6 completion:(id /* block */)a7;
- (BOOL)isDownloadTaskFinished:(id)a0;
- (BOOL)isDownloadTaskPaused:(id)a0;
- (void)pauseTaskWithKeyIfNeed:(id)a0;
- (void)cancelTaskWithKeyIfNeed:(id)a0;
- (void)resumeTaskWithKeyIfNeed:(id)a0 insertFront:(BOOL)a1 cancelDownloading:(BOOL)a2 defaultDownloadQueue:(BOOL)a3 downloadProgress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)notifyTrackCurrentDownloadingFlowWithBusinessParameters:(id)a0;
- (BOOL)shouldTaskBePausedWithTaskKey:(id)a0 thresholdSize:(long long)a1;
- (void)configDownloadStrategyV2WithConfig:(id)a0;
- (id)acc_optimize_downloadFileWithURLs:(id)a0 priority:(long long)a1 downloadPath:(id)a2 downloadProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)acc_optimize_downloadFileWithURLs:(id)a0 priority:(long long)a1 downloadPath:(id)a2 downloadProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
