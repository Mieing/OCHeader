@interface BDXGurdService : NSObject

+ (void)registerAccessKey:(id)a0;
+ (id)rootDirectoryForAccessKey:(id)a0;
+ (id)rootDirectoryForAccessKey:(id)a0 channel:(id)a1;
+ (BOOL)hasCacheForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
+ (id)dataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
+ (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
+ (long long)fileTypeForAccessKey:(id)a0 channel:(id)a1;
+ (void)clearCacheForAccessKey:(id)a0 channel:(id)a1;
+ (void)syncResourcesWithTask:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isRequestThrottledWithStatusDictionary:(id)a0;
+ (void)cancelTaskWithAK:(id)a0 channel:(id)a1;

@end
