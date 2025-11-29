@class __RxKVOObserverCollector, NSMutableSet;

@interface __RxBlockKVOController : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    __RxKVOObserverCollector *_collector;
    NSMutableSet *_tokens;
}

- (void)__removeToken:(id)a0;
- (void)__addToken:(id)a0;
- (id)addObserver:(id)a0 owner:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
