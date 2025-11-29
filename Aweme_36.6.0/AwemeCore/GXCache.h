@class GXLRUCache;

@interface GXCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain, nonatomic) GXLRUCache *gxCache;

- (id)initWithCacheCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
