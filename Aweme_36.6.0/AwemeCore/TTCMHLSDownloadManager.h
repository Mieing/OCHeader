@class NSOperationQueue, NSMutableDictionary;
@protocol TTCMHLSDownloadManagerDelegate;

@interface TTCMHLSDownloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloadTasks;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (nonatomic) long long maxConcurrentDownloads;
@property (weak, nonatomic) id<TTCMHLSDownloadManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)getTaskByKey:(id)a0;
- (void)removeDownloadFileByKey:(id)a0;
- (void)downloadFail:(id)a0 error:(id)a1;
- (void)downloadDidSuspend:(id)a0;
- (void)pauseTask:(id)a0;
- (id)downloadSource:(id)a0 cacheKey:(id)a1 vid:(id)a2;
- (void)resumeDownloadSource:(id)a0;
- (void)cancelTask:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)resume;

@end
