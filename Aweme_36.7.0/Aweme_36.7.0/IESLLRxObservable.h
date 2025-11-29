@class NSObject;
@protocol OS_dispatch_source;

@interface IESLLRxObservable : NSObject {
    struct vector<void (^)(id, IESLLRxContext *), std::allocator<void (^)(id, IESLLRxContext *)>> { id /* block */ *__begin_; id /* block */ *__end_; id /* block */ *__cap_; } m_subscribs;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (id)throttle:(double)a0;
- (void)send:(id)a0 withContext:(id)a1;
- (id)subscribeWithContext:(id /* block */)a0;
- (void)doOperation:(id /* block */)a0 afterDelay:(double)a1;
- (id)subscribe:(id /* block */)a0;
- (void).cxx_destruct;
- (void)send:(id)a0;
- (id).cxx_construct;
- (id)map:(id /* block */)a0;
- (void)dealloc;
- (id)filter:(id /* block */)a0;
- (void)bind:(id)a0;

@end
