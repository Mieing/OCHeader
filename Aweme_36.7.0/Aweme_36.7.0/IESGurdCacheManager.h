@interface IESGurdCacheManager : NSObject

+ (void)asyncGetDataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
+ (void)clearCacheForAccessKey:(id)a0 channel:(id)a1;
+ (void)downloadByOdr:(id)a0 completion:(id /* block */)a1 reqType:(long long)a2;
+ (BOOL)isLazyRequest:(id)a0;
+ (BOOL)needRequest:(id)a0;
+ (void)syncResourcesWithParams:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)getChannelVersionOnlyOfflineForAccessKey:(id)a0 channel:(id)a1;

@end
