@class NSMutableDictionary;

@interface BDAThreadSafeDictionary : NSMutableDictionary {
    NSMutableDictionary *_dic;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _attr;
}

+ (void)initialize;

- (void)removeObjectsForKeys:(id)a0;
- (void)setDictionary:(id)a0;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectEnumerator;
- (id)description;
- (id)objectForKey:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allValues;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)hash;
- (void)removeObjectForKey:(id)a0;
- (id)allKeysForObject:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)allKeys;
- (id)keysSortedByValueUsingComparator:(id /* block */)a0;
- (id)keysOfEntriesPassingTest:(id /* block */)a0;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)descriptionInStringsFileFormat;
- (id)keysSortedByValueWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (id)keysSortedByValueUsingSelector:(SEL)a0;

@end
