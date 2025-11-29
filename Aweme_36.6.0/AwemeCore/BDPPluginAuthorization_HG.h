@class BDPBatchPermissionAuthorizer_HG, BDPOpenPlatformAlertControllerLogic_HG;

@interface BDPPluginAuthorization_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPOpenPlatformAlertControllerLogic_HG *alertLogic;
@property (retain, nonatomic) BDPBatchPermissionAuthorizer_HG *batchPermissionAuthorizer;

+ (id)p_transformError:(id)a0;

- (BOOL)shouldUseCombineAuthorizeForAppID:(id)a0;
- (void)authorizeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showDouyinOpenAuthWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openSettingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSettingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (long long)localScopeCount:(id)a0;
- (void)showLocalAuthorize:(id)a0 scopes:(id)a1 callback:(id /* block */)a2;
- (void)showRemoteAuthorize:(id)a0 scopes:(id)a1 callback:(id /* block */)a2;
- (void)mergeLocalAndServerPermission:(id)a0 localRecords:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)convertError:(id)a0;
- (id)init;

@end
