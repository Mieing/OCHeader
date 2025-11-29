@class NSMutableArray;

@interface _TTVideoEngineTaskQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_taskArray;
}

@property long long maxCount;
@property (readonly, nonatomic) long long count;

- (BOOL)containTaskForKey:(id)a0;
- (id)backTask;
- (id)popBackTask;
- (id)taskForVideoId:(id)a0;
- (id)popTaskForKey:(id)a0;
- (id)popTaskForVideoId:(id)a0;
- (void)popTask:(id)a0;
- (BOOL)_enoughTasks;
- (BOOL)containTask:(id)a0;
- (void)popAllTasks;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)taskForKey:(id)a0;
- (BOOL)enqueueTask:(id)a0;

@end
