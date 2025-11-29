@class NSOperationQueue, NSError;

@interface LVResourceDownloader : NSObject {
    NSOperationQueue *_downloadQueue;
    NSError *_error;
    unsigned long long _taskCount;
    id /* block */ _progressHandler;
    id /* block */ _callback;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL canceled;

- (void)cancelAllRequest;
- (void)downloadResources:(const void *)a0 progressHandler:(id /* block */)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
