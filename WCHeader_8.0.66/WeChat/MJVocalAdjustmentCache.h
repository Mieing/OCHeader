@class NSMutableDictionary;

@interface MJVocalAdjustmentCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)safeSetObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectsForKeys:(id)a0;
- (id)allKeys;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
