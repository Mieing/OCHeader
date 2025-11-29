@class MMKV;

@interface AWEPzNetworkManager : NSObject

@property (readonly, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) id /* block */ isDomainRegisterBlock;
@property (copy, nonatomic) id /* block */ isStrategyRegisterBlock;

+ (id)mmkv;
+ (void)preloadDomainConfig;
+ (BOOL)didFetchConfigCache;
+ (id)storageKeyWithDomainName:(id)a0;
+ (id)getDomainConfigCacheWithDomainName:(id)a0;
+ (void)initialize;

- (void)requestComponentDataWithRequests:(id)a0 requestType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)getDomainConfigWithDomainName:(id)a0;
- (id)storageKeyWithDomainName:(id)a0;
- (id)tryGetHomePageDomainConfigInOldConfigWithError:(id *)a0;
- (BOOL)p_checkDomainModel:(id)a0 error:(id *)a1 nonSupportStrategies:(id *)a2;
- (BOOL)p_checkConfigModel:(id)a0 error:(id *)a1;
- (void)p_requestComponentDataWithRequests:(id)a0 requestType:(unsigned long long)a1 sessionID:(long long)a2 completion:(id /* block */)a3;
- (id)p_checkConfigModel:(id)a0;
- (BOOL)cacheDomain:(id)a0 data:(id)a1;
- (void)p_requestComponentDataWithURl:(id)a0 requestType:(unsigned long long)a1 hashMap:(id)a2 uid:(id)a3 sessionID:(long long)a4 retryCount:(long long)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;

@end
