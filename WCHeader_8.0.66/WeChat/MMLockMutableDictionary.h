@class NSMutableDictionary, NSRecursiveLock;

@interface MMLockMutableDictionary : MMObject {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
}

+ (id)dictionaryWithMutableDictionary:(id)a0;

- (id)init;
- (id)initWithMutableDictionary:(id)a0;
- (void)setDictionary:(id)a0;
- (id)fetchDictionary;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)allKeys;
- (id)allValues;
- (id)allKeysForObject:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)a0;
- (int)count;
- (void).cxx_destruct;

@end
