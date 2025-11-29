@class NSString, MMUIViewController, MMUIWindow, MMWebViewController;
@protocol WCPrivacyPolicyControlLogicDelegate;

@interface WCPrivacyPolicyControlLogic : MMObject <MMWebViewDelegate, MMTipsViewControllerDelegate> {
    MMUIWindow *_window;
    MMUIViewController *_rootVC;
    MMWebViewController *_webviewVC;
    MMWebViewController *_webviewConfirmVC;
}

@property (weak, nonatomic) id<WCPrivacyPolicyControlLogicDelegate> delegate;
@property (retain, nonatomic) NSString *privacyUrl;
@property (retain, nonatomic) NSString *birthdayUrl;
@property (retain, nonatomic) NSString *confirmUrl;
@property (retain, nonatomic) NSString *guidanceContent;
@property (retain, nonatomic) NSString *doublecheckContent;
@property (retain, nonatomic) NSString *doublecheckCancel;
@property (retain, nonatomic) NSString *doublecheckOk;
@property (nonatomic) BOOL bFromReg;
@property (nonatomic) BOOL bShowPrivacy;
@property (nonatomic) BOOL bShowBirthday;
@property (nonatomic) BOOL bNeedOpenplatform;
@property (nonatomic) BOOL bNeedConfirm;
@property (nonatomic) BOOL bNotNeedDoublecheck;
@property (retain, nonatomic) NSString *cc;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *regSessionid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)checkData;
- (void)startLogic;
- (id)showPrivacyPolicyView:(id)a0 animate:(BOOL)a1 close:(BOOL)a2;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)onWebViewDisagree;
- (void)onWebViewClickClose;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void).cxx_destruct;

@end
