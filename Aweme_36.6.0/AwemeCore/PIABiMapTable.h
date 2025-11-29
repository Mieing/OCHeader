@class NSMapTable, NSRecursiveLock;

@interface PIABiMapTable : NSObject

@property (retain, nonatomic) NSMapTable *valueKeyReleaseObjMap;
@property (retain, nonatomic) NSMapTable *keyValueReleaseObjMap;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (nonatomic) unsigned long long keyOptions;
@property (nonatomic) unsigned long long valueOptions;
@property (readonly) unsigned long long count;

+ (id)weakToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)weakToWeakObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;

- (id)initWithKeyOptions:(unsigned long long)a0 objectOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)removeObjectForReleasableKey:(id)a0;
- (void)removeReleasableObject:(id)a0;
- (id)convertDictionary;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)removeObject:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)keyForObject:(id)a0;

@end
