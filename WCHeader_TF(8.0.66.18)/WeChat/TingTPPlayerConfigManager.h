@class NSString;

@interface TingTPPlayerConfigManager : MMUserService <TPLogDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnableIndependentQueue;
+ (BOOL)isEnableForceOpenWhenResume;
+ (long long)getConfigValueWithDict:(id)a0 key:(id)a1 defaultValue:(long long)a2 error:(id *)a3;

- (void)onServiceInit;
- (id)createTPPlayerEnaleCache:(BOOL)a0;
- (void)logWithLevel:(int)a0 tag:(id)a1 file:(const char *)a2 function:(const char *)a3 line:(unsigned long long)a4 content:(id)a5;
- (id)cacheConfigPath;
- (id)cacheDataPath;
- (id)cacheFilePathWithCacheId:(id)a0;
- (id)fileTargetPathWithCacheId:(id)a0 pathSuffix:(id)a1;
- (id)fileDownloadingPathWithCacheId:(id)a0;
- (id)fileCacheIdForUrl:(id)a0 listenType:(unsigned int)a1 cacheKey:(id)a2;
- (id)getCacheFileDir;
- (void)tryCreateCacheFileDir;

@end
