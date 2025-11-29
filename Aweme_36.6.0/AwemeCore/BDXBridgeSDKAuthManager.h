@class NSArray, NSString, NSDictionary, NSMutableSet, BDXBridgeAuthPackage, NSLock, NSNumber;

@interface BDXBridgeSDKAuthManager : NSObject <BDXBridgeAuthModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *namespace;
@property (copy, nonatomic) NSDictionary *authRules;
@property (retain, nonatomic) NSMutableSet *privateDomains;
@property (retain, nonatomic) NSLock *methodSetLock;
@property (retain, nonatomic) NSMutableSet *publicMethods;
@property (retain, nonatomic) NSMutableSet *protectedMethods;
@property (retain, nonatomic) NSMutableSet *privateMethods;
@property (retain, nonatomic) NSMutableSet *secureMethods;
@property (retain, nonatomic) BDXBridgeAuthPackage *authPackage;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } authPackageLock;
@property (nonatomic, getter=hasFetchedAuthInfos) BOOL fetchedAuthInfos;
@property (nonatomic, getter=isFetchingAuthInfos) BOOL fetchingAuthInfos;
@property (nonatomic, getter=hasUsedAuthInfosBeforeConfiguring) BOOL usedAuthInfosBeforeConfiguring;
@property (copy, nonatomic) NSNumber *lastUpdatePackageVersion;
@property (copy, nonatomic) id /* block */ monitorHybridBlock;
@property (nonatomic, getter=isBypassJSBAuthEnabled) BOOL bypassJSBAuthEnabled;
@property (nonatomic, getter=isBuiltinAuthInfosEnabled) BOOL builtinAuthInfosEnabled;
@property (readonly, nonatomic) BOOL hasCachedAuthInfos;
@property (copy, nonatomic) NSArray *innerDomains;
@property (readonly, copy, nonatomic) NSNumber *authPackageVersion;

+ (id)sharedManagerWithNamesapce:(id)a0;
+ (void)configBoeUrlString:(id)a0;
+ (void)updateAuthPackagesWithJsonObjects:(id)a0;
+ (void)p_updateAuthManagerWithPackages:(id)a0;
+ (void)addPrivateDomains:(id)a0 inNamespace:(id)a1;
+ (id)parseAuthInfosWithJSON:(id)a0 accessKey:(id)a1;
+ (id)getRequestParamsWithAccessKey:(id)a0 commonParams:(id)a1 extraChannels:(id)a2;
+ (id)sharedManager;

- (void)registerMethod:(id)a0 withAuthType:(long long)a1;
- (id)__paramsWithContainer:(id)a0;
- (id)__monitorWithContainer:(id)a0;
- (id)isAuthorizedWithBridgeAuthInfo:(id)a0 andControlManager:(id)a1;
- (BOOL)isAuthorizedForLynxView:(id)a0 callMessage:(id)a1;
- (void)addPrivateDomains:(id)a0;
- (void)endMonitorEvent:(id)a0;
- (id)strippedURL:(id)a0;
- (void)updateAuthGroup:(long long *)a0 includedMethods:(id)a1 excludedMethods:(id)a2 forURL:(id)a3;
- (id)secondLevelDomainForURL:(id)a0;
- (void)updateAuthRules;
- (void)updateMethodAuthTypes;
- (void)updateLynxPublicKyes;
- (BOOL)isAuthorizedMethod:(id)a0 forURL:(id)a1 fromSource:(id)a2 frameURL:(id)a3 isMainFrame:(BOOL)a4 fromEngineView:(id)a5;
- (long long)authGroupForURL:(id)a0;
- (id)isAuthorizedMethod:(id)a0 methodName:(id)a1 bizID:(id)a2 forURL:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
