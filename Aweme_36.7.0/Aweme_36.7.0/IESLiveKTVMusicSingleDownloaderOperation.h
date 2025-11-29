@class NSString, NSProgress, NSURL, NSError, RACDisposable, TTHttpTask;

@interface IESLiveKTVMusicSingleDownloaderOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain) NSError *error;
@property (retain) NSProgress *progress;
@property (nonatomic) long long retryCount;
@property (copy, nonatomic) id /* block */ preprocess;
@property (copy, nonatomic) NSString *destination;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSURL *filePath;
@property (retain, nonatomic) RACDisposable *progressDisposable;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (retain, nonatomic) TTHttpTask *downloadTask;

- (id)initWithRequest:(id)a0 destination:(id)a1 retryCount:(long long)a2 preprocess:(id /* block */)a3;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (void)suspend;
- (BOOL)isAsynchronous;
- (void)start;
- (void)resume;
- (BOOL)isExecuting;
- (void)dealloc;
- (BOOL)isFinished;
- (void)download:(long long)a0;

@end
