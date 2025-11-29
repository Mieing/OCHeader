@interface BDRuleEngineKVStore : NSObject

+ (id)stringForKey:(id)a0 uniqueID:(id)a1;
+ (BOOL)setString:(id)a0 forKey:(id)a1 uniqueID:(id)a2;
+ (id)allKeysWithUniqueID:(id)a0;
+ (void)closeWithUniqueID:(id)a0;
+ (void)removeValueForKey:(id)a0 uniqueID:(id)a1;
+ (BOOL)containsKey:(id)a0 uniqueID:(id)a1;
+ (void)clearAllWithUniqueID:(id)a0;
+ (id)objectOfClass:(Class)a0 forKey:(id)a1 uniqueID:(id)a2;
+ (BOOL)setObject:(id)a0 forKey:(id)a1 uniqueID:(id)a2;
+ (Class)store;

@end
