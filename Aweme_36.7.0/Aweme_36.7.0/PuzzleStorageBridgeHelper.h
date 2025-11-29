@interface PuzzleStorageBridgeHelper : NSObject

+ (void)old_setObject:(id)a0 withKey:(id)a1;
+ (void)setObject:(id)a0 withBiz:(id)a1 key:(id)a2;
+ (id)getStorageWithBiz:(id)a0 key:(id)a1;
+ (id)old_getStorageWithKey:(id)a0;
+ (void)old_removeStorageWithKey:(id)a0;
+ (id)h5Key:(id)a0;
+ (id)getStoreWithBiz:(id)a0;
+ (void)saveBizIfNeed:(id)a0;
+ (BOOL)old_containsObjectForKey:(id)a0;
+ (id)storeName:(id)a0;
+ (id)getUserDefaultsStore;
+ (id)getMMKVStore;
+ (id)getAllBiz;
+ (void)removeStorageWithBiz:(id)a0 key:(id)a1;
+ (BOOL)containsObjectForBiz:(id)a0 key:(id)a1;
+ (id)removePrefix:(id)a0;
+ (id)old_getAllStorage;
+ (void)old_removeAllStorage;

@end
