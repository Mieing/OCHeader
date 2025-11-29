@class NSString;

@interface AWEPluginOpenPlatformImpl : NSObject <BDPOpenPlatformPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_getOpenIdWithappID:(id)a0 completion:(id /* block */)a1;
- (void)bdp_joinGroupWithGroupIDs:(id)a0 appID:(id)a1 scene:(id)a2 type:(id)a3 completion:(id /* block */)a4;
- (void)bdp_joinGroupWithGroupID:(id)a0 appID:(id)a1 isHalfPage:(BOOL)a2 extraDict:(id)a3 completion:(id /* block */)a4;
- (id)bdp_allLocalScopes;
- (void)bdp_authScope:(id)a0 forClientKey:(id)a1;
- (BOOL)bdp_checkScope:(id)a0 forClientKey:(id)a1;
- (void)bdp_removeScope:(id)a0 forClientKey:(id)a1;

@end
