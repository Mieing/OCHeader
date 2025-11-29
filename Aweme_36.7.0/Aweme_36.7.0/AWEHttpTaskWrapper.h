@class TTHttpTask, NSString;

@interface AWEHttpTaskWrapper : NSObject <AWEHttpTask> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rw_lock;
}

@property (retain, nonatomic) TTHttpTask *httpTask;
@property (nonatomic) float latestPriority;
@property (nonatomic) long long retryOptions;
@property (readonly, copy, nonatomic) id /* block */ wrapTaskBlock;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTaskBlock:(id /* block */)a0;
- (void)retryIfNeeded;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)dealloc;
- (void)cancel;

@end
