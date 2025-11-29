@interface TTTrackerConcurrentWrapper : NSObject {
    id object;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

+ (id)wrapperWithObject:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)update:(id /* block */)a0;
- (id)get:(id /* block */)a0;
- (void)dealloc;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;

@end
