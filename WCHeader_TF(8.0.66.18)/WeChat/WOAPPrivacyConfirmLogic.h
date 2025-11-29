@class NSString, WOAPObject, MMWebViewController, UIViewController;

@interface WOAPPrivacyConfirmLogic : MMObject <PBMessageObserverDelegate, MMWebViewDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) MMWebViewController *privacyWebView;
@property (retain, nonatomic) WOAPObject *requestObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setForcePrivacyConfirmRequirement;
+ (BOOL)isNeedPrivacyConfirm;

- (void)requestPrivacyConfirmrequirement:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)reqeustSetGDPRPrivacyConfirmState:(id)a0;
- (void)dealloc;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetGDRPAuthResponse:(id)a0;
- (void)handleSetGDRPAuthResponse:(id)a0;
- (void)showPrivacyViewController;
- (void)onWebViewClickClose;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void)completionPrivacyConfirmLogicWithResult:(long long)a0;
- (id)bizStringFromWOAPObjectType:(long long)a0;
- (void).cxx_destruct;

@end
