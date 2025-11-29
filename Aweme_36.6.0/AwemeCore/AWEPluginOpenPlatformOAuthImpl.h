@class NSString, AWEMicroPlatformOAuthManager;

@interface AWEPluginOpenPlatformOAuthImpl : NSObject <BDPOAuthPluginDelegate, AWEMicroPlatformOAuthManagerDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ authCompleteBlk;
@property (copy, nonatomic) id /* block */ authTimorCompletion;
@property (retain, nonatomic) AWEMicroPlatformOAuthManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)authorizeComplated:(id)a0 error:(id)a1;
- (void)authorizeFetchAuthInfoFailWithError:(id)a0;
- (void)authorizeFetchAuthInfoCompleted:(id)a0;
- (void)bdp_getScopeInfoWithAuthModel:(id)a0 resultCallback:(id /* block */)a1 autoAuth:(id /* block */)a2;
- (void)bdp_authorizeWithScopeString:(id)a0 completion:(id /* block */)a1;
- (void)bdp_fetchAuthList:(id)a0 completion:(id /* block */)a1;
- (void)bdp_changeSwitchStatus:(id)a0 completion:(id /* block */)a1;
- (void)bdp_halfAuthorizeWithAuthModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
