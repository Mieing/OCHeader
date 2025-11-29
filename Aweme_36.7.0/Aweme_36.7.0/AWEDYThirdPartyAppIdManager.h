@interface AWEDYThirdPartyAppIdManager : AWEThirdPartyAppIdManager

+ (void)setupThirdPartyAccount;
+ (void)registerSDKs;
+ (id)getAwemeKey;
+ (id)getXiguaKey;
+ (id)getDouyinKey;
+ (Class)aAWEDYThirdPartyAppIdManagerCommonAdapterClass;
+ (Class)aAWEInfraConfigModuleServiceCommonAdapterClass;
+ (void)_setupThirdPartyAccountAsynchronous:(BOOL)a0 completion:(id /* block */)a1;

- (id)aAWEDYThirdPartyAppIdManagerCommonAdapter;
- (id)aAWEInfraConfigModuleServiceCommonAdapter;

@end
