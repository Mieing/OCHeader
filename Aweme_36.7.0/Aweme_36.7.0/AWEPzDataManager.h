@class AWEPzDataCacheManager, NSDictionary, NSString;

@interface AWEPzDataManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEPzDataCacheManager *cacheManager;
@property (retain, nonatomic) NSDictionary *domainDataControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getDomainConfigWithDomainName:(id)a0;
- (void)loadConfigIfNeedWithDomain:(id)a0;
- (void)loadConfigIfNeedWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)loadAllDomainConfigIfNeed:(id /* block */)a0;
- (void)notifyDomainConfigChange:(id)a0;
- (void)p_getDomainConfigWithDomainName:(id)a0 completion:(id /* block */)a1;
- (void)registerDomainConfigObserver:(id)a0 domainName:(id)a1;
- (void)getDomainConfigWithDomainName:(id)a0 completion:(id /* block */)a1;
- (void)getDomainConfigMapCompletion:(id /* block */)a0;
- (void)getDomainHashMapCompletion:(id /* block */)a0;
- (long long)dataRequestStateWithDomain:(id)a0;
- (BOOL)configFromHotSwitchWithDomain:(id)a0;
- (void)updateResponses:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
