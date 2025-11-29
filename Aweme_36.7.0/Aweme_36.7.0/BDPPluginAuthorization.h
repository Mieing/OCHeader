@class BDPOpenPlatformAlertControllerLogic, BDPBatchPermissionAuthorizer, BDPSubscribe;

@interface BDPPluginAuthorization : BDPBridgeInstancePlugin {
    BDPSubscribe *_subs;
}

@property (retain, nonatomic) BDPOpenPlatformAlertControllerLogic *alertLogic;
@property (retain, nonatomic) BDPBatchPermissionAuthorizer *batchPermissionAuthorizer;

- (BOOL)shouldUseCombineAuthorizeForAppID:(id)a0;
- (BOOL)hasUseOpenUserInfo:(id)a0;
- (BOOL)hasUseWalletAccount:(id)a0;
- (void)trackRequestOpenAuthWithUniqueID:(id)a0 Stage:(BOOL)a1 WithError:(id)a2;
- (void)p_addLifeServiceInfoForResultDict:(id)a0 uniqueID:(id)a1;
- (void)p_addSubscribeInfoForResultDict:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)authorizeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showDouyinOpenAuthWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openSettingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSettingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerRecordAuthorizeResultWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)requirePrivacyAuthorizeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openPrivacyContractWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPrivacySettingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerAuthorizePrivacyContractWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
