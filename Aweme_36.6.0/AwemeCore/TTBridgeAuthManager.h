@class NSArray, NSMutableDictionary, NSString;

@interface TTBridgeAuthManager : NSObject <TTBridgeAuthorization, TTBridgeAuthDefaultSettings>

@property (retain, nonatomic) NSMutableDictionary *friendDomainMethods;
@property (copy, nonatomic) NSArray *remoteInnerDomains;
@property (copy, nonatomic) NSArray *innerDomains;
@property (nonatomic) BOOL authEnabled;
@property (copy) NSString *authRequesthHost;
@property (nonatomic) BOOL geckoAuthEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureWithAccessKey:(id)a0 commonParams:(id /* block */)a1;
+ (void)configureWithAuthDomain:(id)a0 accessKey:(id)a1 commonParams:(id /* block */)a2;
+ (void)configureWithAuthDomain:(id)a0 accessKey:(id)a1 boeHostSuffix:(id)a2 afterDelay:(double)a3 commonParams:(id /* block */)a4;
+ (BOOL)_isAuthorizedBridgeCommand:(id)a0 engine:(id)a1 domain:(id)a2;
+ (id)rexxarPublicBridge;
+ (BOOL)isInnerDomain:(id)a0;
+ (BOOL)_isAuthorizedBridgeCommand:(id)a0 engine:(id)a1 URL:(id)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;

- (BOOL)engine:(id)a0 isAuthorizedBridge:(id)a1 domain:(id)a2;
- (void)engine:(id)a0 isAuthorizedBridge:(id)a1 domain:(id)a2 completion:(id /* block */)a3;
- (BOOL)engine:(id)a0 isAuthorizedMeta:(id)a1 domain:(id)a2;
- (BOOL)engine:(id)a0 isAuthorizedBridge:(id)a1 URL:(id)a2;
- (id)defaultAuthRequesthHost;
- (id)adjustedDomains:(id)a0;
- (id)defaultInnerDomains;
- (void)updateInnerDomainsFromRemote:(id)a0 shouldUpdateGeckoPrivateDomains:(BOOL)a1;
- (void)startGetAuthConfigWithPartnerClientKey:(id)a0 partnerDomain:(id)a1 secretKey:(id)a2 finishBlock:(id /* block */)a3;
- (void)updateInnerDomainsFromRemote:(id)a0;
- (BOOL)isInnerDomainForURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
