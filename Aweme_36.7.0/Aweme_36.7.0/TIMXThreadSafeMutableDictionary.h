@class NSMutableDictionary;

@interface TIMXThreadSafeMutableDictionary : NSMutableDictionary {
    int _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockV2;
    NSMutableDictionary *_dictionary;
}

- (void)performLockedWithDictionary:(id /* block */)a0;
- (void)setDictionary:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)allKeys;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;

@end
