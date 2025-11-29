@class NSMapTable;

@interface BDImageWeakCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMapTable *weakCache;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
