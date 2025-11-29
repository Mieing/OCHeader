@class NSCache, MMKV;

@interface AWEPzDataCacheManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSCache *domainConfigCache;
@property (nonatomic) BOOL didFetchConfigCache;

+ (id)sharedInstance;

- (void)preloadDomainConfig;
- (id)p_storageKeyWithDomainName:(id)a0;
- (id)getDomainConfigCacheWithDomainName:(id)a0;
- (BOOL)p_checkDomainModel:(id)a0 error:(id *)a1 nonSupportStrategies:(id *)a2;
- (BOOL)p_isStrategyRegister:(id)a0;
- (BOOL)hasFetchConfigCache;
- (id)getDomainConfigWithDomainName:(id)a0;
- (BOOL)cacheDomain:(id)a0 data:(id)a1;
- (BOOL)checkDomainModel:(id)a0 error:(id *)a1 nonSupportStrategies:(id *)a2;
- (BOOL)p_isDomainRegister:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
