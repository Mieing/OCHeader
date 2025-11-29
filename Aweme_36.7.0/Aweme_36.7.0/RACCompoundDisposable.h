@class RACDisposable;

@interface RACCompoundDisposable : RACDisposable {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    RACDisposable *_inlineDisposables[2];
    struct __CFArray { } *_disposables;
    BOOL _disposed;
}

+ (id)compoundDisposable;
+ (id)compoundDisposableWithDisposables:(id)a0;

- (BOOL)isDisposed;
- (id)initWithDisposables:(id)a0;
- (void)addDisposable:(id)a0;
- (void)removeDisposable:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;
- (void)dispose;
- (void)dealloc;

@end
