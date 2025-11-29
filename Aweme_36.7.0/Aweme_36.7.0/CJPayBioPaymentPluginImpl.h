@class NSString;

@interface CJPayBioPaymentPluginImpl : NSObject <CJPayBioPaymentPlugin, CJPayRequestParamInjectDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;
+ (id)getLocalBioInfo;
+ (id)injectReskInfoData;
+ (id)injectDevInfoData;
+ (id)injectPassThroughInfo;
+ (BOOL)isBioTokenValidWithUID:(id)a0 appId:(id)a1;

- (BOOL)isBiometryNotAvailable;
- (id)bioType;
- (id)biometricParams;
- (void)correctLocalTime;
- (BOOL)pluginHasInstalled;
- (BOOL)isValidForCurrentUid:(id)a0;
- (BOOL)hasValidToken;
- (BOOL)shouldShowBioSystemSettingGuideWithResultResponse:(id)a0;
- (void)showBioSystemSettingVCWithVerifyManager:(id)a0 completionBlock:(id /* block */)a1;
- (id)getPreTradeCreateBioParamDic;
- (id)getPreTradeCreateBioDataWithParams:(id)a0;
- (BOOL)isBioPayAvailableWithResponse:(id)a0;
- (BOOL)isBioPayAvailableWithDict:(id)a0;
- (id)obtainBioPayUnavailableReason:(id)a0;
- (BOOL)isLocalBiometryAbilityAvailable;
- (id)obtainLocalBiometryUnavailableReason;
- (BOOL)isBioGuideAvailable;
- (BOOL)isBiometryLockout;
- (void)callBioVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)openBioPay:(id)a0 withExtraParams:(id)a1 completion:(id /* block */)a2;
- (id)buildPwdDicWithModel:(id)a0 lastPWD:(id)a1;

@end
