@class BDATMRulesResponse, NSString, NSDictionary, NSLock;

@interface ATMRulesManager : NSObject <IESGurdEventDelegate>

@property (copy, nonatomic) NSDictionary *autoRules;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) BDATMRulesResponse *rulesResponse;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long retryTotalDuration;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSString *accessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)readRulesFromGeckoAccessKey:(id)a0 channel:(id)a1 fromGeckoListener:(BOOL)a2;
- (void)handleData:(id)a0 timeCost:(long long)a1 fromGecko:(BOOL)a2 fromGeckoListener:(BOOL)a3 fromLocal:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)isCurrentEventParams:(id)a0 hitRules:(id)a1;
- (id)parseAutoRules:(id)a0;
- (id)loadLocalRules;
- (id)parseDictionary:(id)a0;
- (id)parseArray:(id)a0;
- (id)parseLeaf:(id)a0;
- (void)requestAutoRulesTest:(id /* block */)a0;
- (void)registerIESGurdEventDelegate;
- (void)registerGeckoAccesskey:(id)a0;
- (void)requestAutoRulesWithParams:(id)a0 completion:(id /* block */)a1;
- (void)readRulesFromLocal;
- (id)ruleHitted:(id)a0 withParams:(id)a1;
- (id)parseRawRules:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)parse:(id)a0;

@end
