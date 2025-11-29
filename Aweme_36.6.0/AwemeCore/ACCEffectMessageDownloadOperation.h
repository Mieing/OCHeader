@class NSRecursiveLock, NSArray, NSString, NSMutableArray;

@interface ACCEffectMessageDownloadOperation : NSOperation

@property (copy, nonatomic) NSArray *urlStringList;
@property (retain, nonatomic) NSMutableArray *completionCallbackArray;
@property (copy, nonatomic) NSString *rootDirectory;
@property (nonatomic) BOOL needUpzip;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (void)cancelInternal;
- (id)initWithUrlList:(id)a0 rootDirectory:(id)a1 needUpzip:(BOOL)a2;
- (void)addHandlersForCompleted:(id /* block */)a0;
- (void)handleCallbackWithUrlList:(id)a0 filePath:(id)a1 error:(id)a2;
- (void)downloadWithUrlList:(id)a0 urlIndex:(long long)a1;
- (id)diskPathForUrlPath:(id)a0;
- (id)downloadDiskCacheWithUrlPath:(id)a0;
- (void)unzipWithFilePath:(id)a0 urlList:(id)a1 urlIndex:(long long)a2;
- (id)unzipDestinationURLPathWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)done;
- (BOOL)isAsynchronous;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
