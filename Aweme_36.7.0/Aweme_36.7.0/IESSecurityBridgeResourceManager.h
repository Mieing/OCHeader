@class NSString, NSDictionary, YYMemoryCache;

@interface IESSecurityBridgeResourceManager : NSObject <IESGurdEventDelegate>

@property (class, copy, nonatomic) NSString *appAccessKey;

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) YYMemoryCache *cache;
@property (copy, nonatomic) NSDictionary *bridgeDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)configBridgeValidateDic:(id)a0;
- (BOOL)hasCacheForKey:(id)a0;
- (id)rulesCacheForKey:(id)a0;
- (void)setRules:(id)a0 forKey:(id)a1;
- (id)bridgeValidateListWithContainerType:(unsigned long long)a0;
- (id)privacyBridgeConfig;
- (void).cxx_destruct;
- (id)init;

@end
