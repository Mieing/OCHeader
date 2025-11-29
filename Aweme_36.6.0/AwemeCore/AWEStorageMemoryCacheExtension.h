@interface AWEStorageMemoryCacheExtension : NSObject

+ (void)setObject:(id)a0 forKey:(id)a1 withCost:(unsigned long long)a2;
+ (void)setCacheExtensionEnable:(BOOL)a0;
+ (void)setCacheExtensionSize:(long long)a0;
+ (void)setDelegateForAWEStorageIfNeeded;
+ (void)cacheObject:(id)a0 forKey:(id)a1 encodeData:(id)a2;
+ (BOOL)enable;
+ (id)memoryCache;
+ (id)objectForKey:(id)a0;
+ (void)removeObjectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;

@end
