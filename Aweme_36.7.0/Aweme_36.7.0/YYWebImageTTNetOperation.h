@class NSData, NSString, NSRecursiveLock, YYImageDecoder, YYImageCache, TTHttpTask, NSURLResponse, NSURLRequest, NSProgress, NSMutableData;

@interface YYWebImageTTNetOperation : NSOperation <NSURLConnectionDelegate, YYWebImageOperation>

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) YYImageCache *cache;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) BOOL shouldUseCredentialStorage;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (getter=isCancelled) BOOL cancelled;
@property (getter=isStarted) BOOL started;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long taskID;
@property (nonatomic) double lastProgressiveDecodeTimestamp;
@property (retain, nonatomic) YYImageDecoder *progressiveDecoder;
@property (nonatomic) BOOL progressiveIgnored;
@property (nonatomic) BOOL progressiveDetected;
@property (nonatomic) unsigned long long progressiveScanedLength;
@property (nonatomic) unsigned long long progressiveDisplayCount;
@property (copy, nonatomic) id /* block */ progress;
@property (copy, nonatomic) id /* block */ transform;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (nonatomic) long long expectedSize;
@property (retain, nonatomic) NSMutableData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_networkThreadMain:(id)a0;
+ (id)_networkThread;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_imageQueue;

- (void)_didReceiveImageFromDiskCache:(id)a0;
- (void)_startRequest:(id)a0;
- (void)_didReceiveImageFromWeb:(id)a0;
- (void)_cancelOperation;
- (void)_startOperation;
- (id)initWithRequest:(id)a0 options:(unsigned long long)a1 cache:(id)a2 cacheKey:(id)a3 progress:(id /* block */)a4 transform:(id /* block */)a5 completion:(id /* block */)a6;
- (void)callbackActionWithError:(id)a0 obj:(id)a1 response:(id)a2;
- (void)callbackSuccessWithResponse:(id)a0;
- (void)callbackError:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (void)_finish;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)_endBackgroundTask;

@end
