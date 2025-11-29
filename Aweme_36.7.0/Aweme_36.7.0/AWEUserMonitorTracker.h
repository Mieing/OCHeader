@interface AWEUserMonitorTracker : NSObject

+ (id)carrierStringForType:(long long)a0;
+ (void)monitorSendVerifyCode:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorLoadAmbientImage:(BOOL)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorAuthorizeLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorPadGetLoginQRcode:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorPadQRLoginResult:(unsigned long long)a0 extraInfo:(id)a1;
+ (void)monitorHotsoonAccountAuth:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorThirdPartyLogin:(unsigned long long)a0 platform:(unsigned long long)a1 error:(id)a2 extraInfo:(id)a3;
+ (void)monitorLoginSLOWith:(id)a0;
+ (void)monitorLoadLoginGuideImage:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorPrefetchLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2 carrierType:(long long)a3;
+ (void)monitorQuickLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2 carrierType:(long long)a3;
+ (void)monitorEmailLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorMobilePasswordLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorMobileVerifyCodeLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorService:(id)a0 status:(unsigned long long)a1 error:(id)a2 extraInfo:(id)a3;
+ (BOOL)isThirdPartyWithPlatform:(unsigned long long)a0;
+ (id)telecomCarrier:(id)a0;
+ (void)monitorAccountDropWithErrorCode:(long long)a0 extraInfo:(id)a1;
+ (void)monitorVerifiedEnvLogin:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorLogout:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorBindMobile:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorRebindMobile:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorKickoutDevice:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorMutiAccountSwitch:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorQuickBind:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2 carrierType:(long long)a3;
+ (void)monitorUIDMisMatch:(id)a0;
+ (void)monitorSendWhatsAppVerifyCode:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorSecondVerifyStatus:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorSharedLoginStatus:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorFindPasswordStatus:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorEnterAccountSafety:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorloginWithAgreeTerm:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorHighRiskPhoneVerifyStatus:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)moinitorNonMainlandPhoneVeriyStatus:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorRealNameAuthStatus:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorLoginGuideShow:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
+ (void)monitorVideoAuthResult:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;

@end
