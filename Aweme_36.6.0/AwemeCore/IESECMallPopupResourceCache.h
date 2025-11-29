@interface IESECMallPopupResourceCache : NSObject

+ (id)sanitizeFileName:(id)a0;
+ (id)rootCachePath;
+ (id)cachePathForChannel:(id)a0 fileName:(id)a1;
+ (void)saveData:(id)a0 channel:(id)a1 fileName:(id)a2 completion:(id /* block */)a3;
+ (BOOL)contains:(id)a0 channel:(id)a1;
+ (void)clearCache:(id)a0 files:(id)a1 completion:(id /* block */)a2;
+ (void)cleanCacheWithExpirationDays:(long long)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (void)loadDataForChannel:(id)a0 fileName:(id)a1 completion:(id /* block */)a2;
+ (id)taskQueue;

@end
