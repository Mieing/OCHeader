@class NSString;

@interface AWEGurdServiceImpl : NSObject <AWEGurdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)clearAllCache:(BOOL)a0;
- (unsigned long long)env;
- (id)gurdVersion;
- (BOOL)isGurdRequestEnable;
- (void)registerAccessKey:(id)a0;
- (void)registerAccessKey:(id)a0 SDKVersion:(id)a1;
- (void)registerCustomParamKey:(id)a0 getValueBlock:(id /* block */)a1 forAccessKey:(id)a2;
- (id)rootDirectoryForAccessKey:(id)a0;
- (id)rootDirectoryForAccessKey:(id)a0 channel:(id)a1;
- (BOOL)hasCacheForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)prefetchDataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)dataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (void)asyncGetDataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
- (long long)cacheStatusForAccessKey:(id)a0 channel:(id)a1;
- (long long)fileTypeForAccessKey:(id)a0 channel:(id)a1;
- (id)lazyResourcesInfoWithAccesskey:(id)a0 channel:(id)a1;
- (unsigned long long)internalPackageIdForAccessKey:(id)a0 channel:(id)a1;
- (void)enableGurdRequest;
- (void)syncResourcesIfNeeded;
- (BOOL)enqueueSyncResourcesTask:(id)a0;
- (void)observeAccessKey:(id)a0 channel:(id)a1 downloadProgressBlock:(id /* block */)a2;
- (void)removeObserverWithIdentity:(id)a0;
- (void)cancelDownloadWithAccesskey:(id)a0 channel:(id)a1;
- (void)activeAllInternalPackagesWithBundleName:(id)a0 completion:(id /* block */)a1;
- (void)activeInternalPackageWithBundleName:(id)a0 accessKey:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
- (id)internalRootDirectoryForAccessKey:(id)a0 channel:(id)a1;
- (void)setCacheConfiguration:(id)a0 forAccessKey:(id)a1;
- (void)clearCacheExceptWhitelist:(BOOL)a0;
- (void)addCacheWhitelistWithAccessKey:(id)a0 channels:(id)a1;
- (long long)getClearCacheSize:(int)a0;
- (void)clearExpiredCache:(int)a0 cleanType:(int)a1 completion:(id /* block */)a2;
- (void)clearCacheForAccessKey:(id)a0 channel:(id)a1;
- (void)clearCacheForAccessKey:(id)a0;
- (void)registerEventDelegate:(id)a0;
- (void)setLowStorageThreshold:(int)a0;
- (void)setEnableDownload:(BOOL)a0;
- (BOOL)enableDownload;
- (void)addOnDemandResourceWithAccessKey:(id)a0 groups:(id)a1 channels:(id)a2;
- (void)ondemandListEnable:(BOOL)a0;
- (void)addRequestBlocklistGroupNames:(id)a0 forAccessKey:(id)a1;

@end
