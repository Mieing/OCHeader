@class NSMutableDictionary;

@interface AWESafeMemoryMap : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    struct SpinLock { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } _spinLock;
    NSMutableDictionary *_map;
}

- (void)removeObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id).cxx_construct;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
