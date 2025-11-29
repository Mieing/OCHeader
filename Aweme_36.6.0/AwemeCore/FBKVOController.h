@class NSMapTable;

@interface FBKVOController : NSObject {
    NSMapTable *_objectInfosMap;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, weak, nonatomic) id observer;

+ (id)controllerWithObserver:(id)a0;

- (void)unobserve:(id)a0 keyPath:(id)a1;
- (void)observe:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (void)unobserve:(id)a0;
- (id)initWithObserver:(id)a0 retainObserved:(BOOL)a1;
- (void)unobserveAll;
- (void)_observe:(id)a0 info:(id)a1;
- (void)observe:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 action:(SEL)a3;
- (void)observe:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)_unobserve:(id)a0 info:(id)a1;
- (void)_unobserve:(id)a0;
- (void)_unobserveAll;
- (void)observe:(id)a0 keyPaths:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (void)observe:(id)a0 keyPaths:(id)a1 options:(unsigned long long)a2 action:(SEL)a3;
- (void)observe:(id)a0 keyPaths:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)dealloc;
- (id)debugDescription;

@end
