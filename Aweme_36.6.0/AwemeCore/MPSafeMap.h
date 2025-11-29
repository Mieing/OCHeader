@class NSMapTable;

@interface MPSafeMap : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    NSMapTable *_map;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;

@end
