@class AWEDataLayerLinkedList;

@interface AWEDataLayerLRUList : NSObject {
    BOOL _useLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct __CFDictionary { } *_map;
    AWEDataLayerLinkedList *_linkedList;
}

+ (id)listWithCapacity:(int)a0 useLock:(BOOL)a1;
+ (id)listWithCapacity:(int)a0;

- (void)cleanIfNeeded:(long long *)a0;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;

@end
