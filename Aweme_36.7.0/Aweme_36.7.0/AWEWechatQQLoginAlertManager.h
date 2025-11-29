@class NSString, DUXContentSheet;

@interface AWEWechatQQLoginAlertManager : NSObject <DUXSheetDelegate>

@property (copy, nonatomic) NSString *clickEventName;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) DUXContentSheet *continueLoginSheet;
@property (retain, nonatomic) DUXContentSheet *wechatFailSheet;
@property (retain, nonatomic) NSString *infoPanelTitle;
@property (nonatomic) unsigned long long loginPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)showFailAlertDialog;
- (BOOL)showAlertDialogWithPlatform:(unsigned long long)a0 clickBlock:(id /* block */)a1;
- (void)trackLoginPanelTipsClick:(id)a0;
- (BOOL)showSuggestWithPlatform:(unsigned long long)a0;
- (void)showWechatFailSheet;
- (id)wechatQQAlertDialogSettings;
- (void)trackDialogEvent:(id)a0 buttonString:(id)a1;
- (id)wechatQQAlertDialogSettingsNew;
- (void)failSheetClickAction;
- (void)trackLoginPanelTipsShow;
- (void)showSuggestDialogWithTitle:(id)a0 detail:(id)a1 primaryButtonTitle:(id)a2 continueButtonTitle:(id)a3;
- (void)showSuggestSheetWithTitle:(id)a0 detail:(id)a1 primaryButtonTitle:(id)a2 continueButtonTitle:(id)a3;
- (void)clickSheetPhoneLoginButton;
- (void)clickSheetContinueLogin;
- (void)clickDialogPhoneLoginButton;
- (void)clickDialogContinueLogin;
- (BOOL)newShowAlertDialogWithPlatform:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)transfer;

@end
