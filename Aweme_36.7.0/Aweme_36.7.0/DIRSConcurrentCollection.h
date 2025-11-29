@interface DIRSConcurrentCollection : NSObject {
    id raw;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

+ (id)collectionWithRaw:(id)a0;

- (void)operate:(id /* block */)a0;
- (id)access:(id /* block */)a0;
- (id)rawValue;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;

@end
