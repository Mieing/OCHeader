@class NSString, NSMutableDictionary, WCFImageTaskInfo;

@interface WCFImageDownloaderOperation : NSObject <WCFImageDownloadOperation> {
    WCFImageTaskInfo *_taskInfo;
    unsigned long long _checksum;
    NSMutableDictionary *_callbacks;
    long long _cdnType;
    BOOL _isStarted;
    BOOL _terminated;
}

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property long long status;
@property (nonatomic) unsigned long long beginDownloadTimestamp;
@property (readonly, nonatomic) BOOL isPreload;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) BOOL executed;
@property (readonly, nonatomic) long long priority;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long feedMediaType;
@property (copy, nonatomic) NSString *tid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithMedia:(id)a0 type:(long long)a1 key:(id)a2;
+ (id)operationsWithMedia:(id)a0 isThumb:(BOOL)a1;
+ (id)marsScheduleQueue;

- (id)initWithTaskInfo:(id)a0;
- (id)initWithURL:(id)a0 key:(id)a1;
- (void)commonInit;
- (id)cdnTask;
- (long long)mediaType;
- (id)key;
- (long long)factor;
- (BOOL)isInvalid;
- (BOOL)isURLInvalid;
- (void)addCompletion:(id /* block */)a0 forToken:(id)a1 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a2;
- (id)allCallbacks;
- (id)removedCompletionByToken:(id)a0;
- (void)done;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (BOOL)cancel:(id)a0;
- (void)cancel;
- (void)start;
- (void)realStart;
- (id)taskURLString;
- (void)startMarsTask:(BOOL *)a0 completion:(id /* block */)a1;
- (void)stopTask;
- (BOOL)isLocalTask;
- (id)pathForLocalTask;
- (void)callCompletionsWithError:(id)a0 callbacks:(id)a1;
- (void)callCompletionsWithPath:(id)a0 callbacks:(id)a1;
- (void)doFinish:(id)a0 error:(id)a1;
- (BOOL)isEqual:(id)a0;
- (long long)compareByFactor:(id)a0;
- (long long)compareByWeight:(id)a0;
- (id)toLogMessage;
- (void).cxx_destruct;

@end
