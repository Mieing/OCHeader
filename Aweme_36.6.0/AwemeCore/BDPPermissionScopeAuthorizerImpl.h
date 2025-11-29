@class NSString;

@interface BDPPermissionScopeAuthorizerImpl : NSObject <BDPPermissionScopeAuthorizerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)acquirePermissionForScope:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (void)acquirePermissionForScopeV2:(id)a0 uniqueID:(id)a1 paramsDict:(id)a2 completion:(id /* block */)a3;
- (void)acquirePermissionForScopes:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (BOOL)isAuthFreeScope:(id)a0 uniqueID:(id)a1;
- (void)acquireSystemPermissionForScope:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (void)acquirePermissionOnTopForScope:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (void)acquirePermissionOnTopForScopes:(id)a0 completion:(id /* block */)a1 uniqueID:(id)a2;
- (void)acquirePermissionForScope:(id)a0 isOnTop:(BOOL)a1 uniqueID:(id)a2 paramsDict:(id)a3 completion:(id /* block */)a4;
- (void)acquirePermissionForScopes:(id)a0 isOnTop:(BOOL)a1 completion:(id /* block */)a2 uniqueID:(id)a3;
- (void)acquirePermissionForScope:(id)a0 isOnTop:(BOOL)a1 needRecord:(BOOL)a2 paramsDict:(id)a3 completion:(id /* block */)a4 uniqueID:(id)a5;
- (id)fixCompatibleScope:(id)a0;
- (BOOL)asyncUpdateScope;
- (void)eventAuthResultForScope:(id)a0 error:(id)a1 uniqueID:(id)a2;

@end
