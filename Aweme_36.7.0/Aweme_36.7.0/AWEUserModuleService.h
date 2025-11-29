@class NSString;

@interface AWEUserModuleService : HTSService <AWEUserModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVerifyStatus:(id /* block */)a0;
- (id)aweUserContextManagerInstance;
- (void)ssoServiceStartConfiguration;
- (void)bdTicketTrackConfig;
- (void)uploadCompanyHeaderImage:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInAuthorizeLogin;
- (BOOL)isInRequireLogin;
- (void)checkInWhenLaunch;
- (id)labelForPlatform:(unsigned long long)a0;
- (void)dismissUserLoadingHUD;
- (void)trackUserVerifyWithEnterFrom:(id)a0 scene:(id)a1 uid:(id)a2 verifyType:(long long)a3;
- (void)verifyWithUid:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)usersArray;
- (void)refetchUser:(BOOL)a0 isColdLaunch:(BOOL)a1;
- (void)showBindPhoneAlertOnLiveWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showBindPhonePageOnlyOnLive;
- (void)startBindPhoneAlertManager;
- (void)showRealNameVerifyNavForLive;
- (void)realNameVerifyBindPhone;
- (void)showRealNameVerifyForECommerceWithVerifyDidSucceedBlock:(id /* block */)a0;
- (void)setVerifyStatus:(unsigned long long)a0;
- (void)showRealNameVerifyForECommerce;
- (id)bindPhoneAlertUtils;
- (BOOL)shouldForbidWartermarkWhenDownloadAweme;
- (BOOL)isSelfSeeWhenPostAmeme;
- (id)txBanAlertManager;
- (BOOL)checkAndShowBindPhoneAlertOnIMWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (long long)newCarrierManagerAvailabeCarrierType;
- (Class)aweProfileEditManagerClass;
- (id)showProfileEditDatePickWithModel:(id)a0 valueChange:(id /* block */)a1 cancel:(id /* block */)a2 completion:(id /* block */)a3;
- (Class)aweUserSettingsManagerClass;
- (void)trackWithInfo:(id)a0;
- (Class)DYVCDAccountVerifyService;
- (id)switchAccountFrom:(id)a0 target:(id)a1;
- (void)gotoBindPhoneWithType:(unsigned long long)a0 presentHandler:(id /* block */)a1;
- (void)gotoBindPhoneWithType:(unsigned long long)a0 presentHandler:(id /* block */)a1 didCancelBindBlock:(id /* block */)a2 didFinishBindBlock:(id /* block */)a3;
- (id)dySyncToutiaoAlertManager;
- (id)aweGuideBindMobileManager;
- (Class)aweRealNameVerifyManager;
- (id)highRiskBindManager;
- (id)aweHuoshanSyncHelper;
- (id)aweUserListener;
- (Class)bindPhoneAlertUtilsClass;
- (id)txBanSharedManager;
- (id)newAWETXBanAlertViewController;
- (Class)aweTXBanAlertViewControllerClass;
- (id)dateFormatter;

@end
