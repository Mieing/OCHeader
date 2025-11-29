@class RACDisposable;

@interface RACSerialDisposable : RACDisposable {
    RACDisposable *_disposable;
    BOOL _disposed;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain) RACDisposable *disposable;

+ (id)serialDisposableWithDisposable:(id)a0;

- (BOOL)isDisposed;
- (id)swapInDisposable:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;
- (void)dispose;
- (void)dealloc;

@end
