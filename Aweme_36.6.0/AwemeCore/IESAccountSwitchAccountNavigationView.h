@class UIButton, UILabel;

@interface IESAccountSwitchAccountNavigationView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *accountManageButton;
@property (nonatomic) long long manageState;
@property (copy, nonatomic) id /* block */ backActionCallBack;
@property (copy, nonatomic) id /* block */ manageActionCallBack;

- (void)setAccountManageButtonTitle:(id)a0;
- (void)updateNavView;
- (void)manageAction;
- (void)setManageButtonHidden:(BOOL)a0;
- (BOOL)isManageState;
- (void)manualSetManageState:(long long)a0;
- (void)backAction;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (void)setupUI;

@end
