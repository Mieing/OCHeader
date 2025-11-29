@class NSString, DUXAlertDialog;

@interface IESAccountUIConfigInject : NSObject <IESAccountUIDelegate>

@property (copy, nonatomic) NSString *assisAccountEnterFrom;
@property (nonatomic) double assisAccountStartTime;
@property (nonatomic) long long assistLayoutStyle;
@property (copy, nonatomic) id /* block */ beforeAlertBlock;
@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)colorWithType:(id)a0;
- (void)accountsdk:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 actions:(id)a3;
- (void)alp_disableLocalizations:(id)a0;
- (void)updateParamsBeforeAssistRegister:(double)a0 enterFrom:(id)a1 layoutStyle:(long long)a2 beforeAlertBlock:(id /* block */)a3;
- (void)accountsdk:(id)a0 showKickAlertWithTitle:(id)a1 message:(id)a2 showLoginBtn:(BOOL)a3 action:(id)a4;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 actions:(id)a2;
- (void)routerOpenWithSchema:(id)a0 isURL:(BOOL)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)accountsdk:(id)a0 openSMSVerificationPage:(id)a1;
- (void).cxx_destruct;
- (BOOL)isLightTheme;

@end
