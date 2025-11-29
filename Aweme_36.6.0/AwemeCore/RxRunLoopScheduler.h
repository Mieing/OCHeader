@class NSThread;

@interface RxRunLoopScheduler : RxScheduler {
    struct ReadWriteLock { void /* function */ **_vptr$NotCopyableInterface; struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex; struct ConditionVariable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _condition; } _condition; long long _reader; long long _writer; long long _pending; } _rwl;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_pthread;
    NSThread *_thread;
    struct __CFRunLoopSource { } *_wakeupSource;
    struct __CFRunLoopObserver { } *_autoreleasePoolPushObserver;
    struct __CFRunLoopObserver { } *_autoreleasePoolPopObserver;
}

@property (readonly, nonatomic) struct __CFRunLoop { } *cfRunLoop;

+ (BOOL)supportRunLoop;

- (id)after:(id)a0 schedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 schedule:(id /* block */)a3;
- (struct __CFRunLoop { } *)cfRunloop;
- (id)initWithName:(id)a0 runloop:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)signal;
- (void)dealloc;
- (id)schedule:(id /* block */)a0;

@end
