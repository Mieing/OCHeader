@class NSDictionary, NSCache, NSString;

@interface IESSecurityGurdManager : NSObject <IESGurdEventDelegate>

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSCache *cache;
@property (copy, nonatomic) NSDictionary *bridgeDic;
@property (copy, nonatomic) NSDictionary *dataMap;
@property (copy, nonatomic) NSString *appAccessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)setupCache;
- (void)configBridgeValidateDic:(id)a0;
- (BOOL)hasCacheForKey:(id)a0;
- (id)rulesCacheForKey:(id)a0;
- (void)setRules:(id)a0 forKey:(id)a1;
- (id)privacyBridgeConfig;
- (id)privacyBridgeDataMap;
- (id)pnsRulesForPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
