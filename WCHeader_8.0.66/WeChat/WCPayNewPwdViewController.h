@class WCPayTenpayPasswordCtrlItem, NSString, UIView, UILabel, UIButton;
@protocol WCPayNewPwdViewControllerDelegate;

@interface WCPayNewPwdViewController : WCPayBaseViewController <WCBaseInfoItemDelegate> {
    id<WCPayNewPwdViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) NSString *vcPwdTitle;
@property (retain, nonatomic) NSString *vcPwdTips;
@property (retain, nonatomic) NSString *vcBiotricTitle;
@property (retain, nonatomic) NSString *vcTouchIdTips;
@property (retain, nonatomic) NSString *vcFaceIdTips;
@property (retain, nonatomic) UIView *verifyPasswordView;
@property (retain, nonatomic) UIView *verifyBiotricView;
@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) UIButton *footerButton;
@property (retain, nonatomic) UILabel *pwdDetailLabel;
@property (retain, nonatomic) UILabel *bioDetailLabel;
@property (retain, nonatomic) UIButton *changeToBiotricAuthBtn;
@property (retain, nonatomic) UIButton *changeToPwdAuthBtn;
@property (nonatomic) BOOL isUseFaceId;
@property (nonatomic) BOOL canUseBiotricAuth;
@property (retain, nonatomic) NSString *seChallenge;
@property (retain, nonatomic) WCPayTenpayPasswordCtrlItem *passwordTextField;
@property (nonatomic) unsigned long long authType;
@property (nonatomic) BOOL isLogicStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)updateSwitchBiotricLabel:(double)a0;
- (void)viewWillLayoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)initNavigationBar;
- (void)onCancelVerify;
- (void)updatePwdCtrlWithTitle:(id)a0 tips:(id)a1;
- (void)onChangeToBiotricAuth;
- (void)onChangeToPwdAuth;
- (void)updateBiotricCtrlWithTitle:(id)a0 touchTips:(id)a1 faceidTips:(id)a2;
- (void)onBiotricAuthNext;
- (void)updateAuthView:(id)a0 pwdTips:(id)a1 biotricTitle:(id)a2 touchIdTips:(id)a3 faceIdTips:(id)a4 canUseBiotricAuth:(BOOL)a5 challenge:(id)a6;
- (void)showVerifyPwdCtrl;
- (void)showVerifyBiotricCtrl;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)clearPwdInput;
- (void)animateToPwdCtrl;
- (void).cxx_destruct;

@end
