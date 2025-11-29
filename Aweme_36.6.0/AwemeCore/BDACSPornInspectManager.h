@class BDAThreadSafeArray;

@interface BDACSPornInspectManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    int _runningCount;
}

@property (readonly, nonatomic) BDAThreadSafeArray *queue;

+ (id)shared;

- (void)triggerTask;
- (void)executeDetectWithTask:(id)a0 completion:(id /* block */)a1;
- (void)appendTask:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
