@class GPBMessage, NSMutableDictionary;

@interface GPBAutocreatedDictionary : NSMutableDictionary {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (id)keyEnumerator;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
