@class NSString, NSMutableDictionary;

@interface BDPPermissionScopeAuthorizerImplHg : NSObject <BDPPermissionScopeAuthorizerInterface>

@property (nonatomic) BOOL thisAppIDAtList;
@property (retain, nonatomic) NSMutableDictionary *scopeFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)acquirePermissionForScope:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (void)acquirePermissionForScopes:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (BOOL)isAuthFreeScope:(id)a0 uniqueID:(id)a1;
- (id)fixCompatibleScope:(id)a0;
- (void)eventAuthResultForScope:(id)a0 error:(id)a1 uniqueID:(id)a2;
- (void).cxx_destruct;

@end
