@interface HTSKVStoreManager : NSObject

+ (id)defaultStoreWith:(long long)a0;
+ (void)clearAllKeyValue;
+ (id)rootDirectoryPath;
+ (id)storeWith:(long long)a0 name:(id)a1;
+ (id)mmkvInstanceCache;
+ (id)userDefaultInstanceCache;

@end
