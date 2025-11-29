@class NSString;

@interface MMHttpCacheMgr : MMUserService <MMServiceProtocol, MMHttpConnectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)GetCacheType:(id)a0;
+ (id)GetCacheDir:(unsigned int)a0;
+ (id)GetFilePath:(id)a0 Type:(unsigned int)a1;
+ (void)ClearCacheDir:(unsigned int)a0;
+ (void)ClearCacheDirByUsrName:(id)a0;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (BOOL)getWithURL:(id)a0 cacheKey:(id)a1 Type:(unsigned int)a2 NotifyKey:(id)a3;
- (BOOL)getWithURL:(id)a0 cacheKey:(id)a1 Type:(unsigned int)a2 NotifyKey:(id)a3 RefererHeader:(id)a4;
- (void)LoadCache:(id *)a0 CacheKey:(id)a1 Type:(unsigned int)a2;
- (void)HttpConnectionFinished:(id)a0 cachekey:(id)a1 response:(id)a2 ErrNo:(int)a3;
- (void)HttpConnectionFail:(id)a0;

@end
