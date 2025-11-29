@class NSString;

@interface AWEPrivacyAlertServiceImpl : HTSService <AWEPrivacyAlertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleCommonAdapterClass;
+ (Class)aAWEMainModuleAlertInterceptorAdapterClass;
+ (Class)aAWEPrivacyAlertAdapterClass;

- (BOOL)canShow;
- (BOOL)needDelayDid;
- (void)showQuitBasicModeAlert;
- (void)popUpPrivacyAlert:(id /* block */)a0;
- (void)advancePopUpPrivacyAlert:(id /* block */)a0;
- (void)popUpPrivacyAlertNotUseAlertManagerWithCompletion:(id /* block */)a0;
- (void)popUpPrivacyAlertNotUseAlertManager;
- (BOOL)hasAgreed;
- (BOOL)isShowingPrivacyAndUserItemAlert;
- (BOOL)hasDismissedPrivacyAlert;
- (void)showPrivacyAlert:(id /* block */)a0;
- (void)securityMSSDKInit;
- (void)showQuitBasicModeAlertWithAgreeBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showQuitAppInBasicModeAlertWithAgreeBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)markAlertAgreed;
- (id)aAWEMainModuleAlertInterceptorAdapter;
- (id)aAWEMainModuleCommonAdapter;
- (id)aAWEPrivacyAlertAdapter;

@end
