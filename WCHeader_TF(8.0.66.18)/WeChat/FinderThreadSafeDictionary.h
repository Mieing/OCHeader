@class NSMutableDictionary, NSRecursiveLock;

@interface FinderThreadSafeDictionary : NSMutableDictionary {
    NSMutableDictionary *_dic;
    NSRecursiveLock *_lock;
}

- (id)init;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)allKeys;
- (id)allKeysForObject:(id)a0;
- (id)allValues;
- (id)description;
- (id)descriptionInStringsFileFormat;
- (id)descriptionWithLocale:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)objectEnumerator;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)keysSortedByValueUsingSelector:(SEL)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)a0;
- (void)setDictionary:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
