@class YYLabel, NSString, UIView, UILabel, UIButton;

@interface AWECertProcessView : UIView

@property (nonatomic) BOOL isAgreed;
@property (retain, nonatomic) UIView *agreementView;
@property (retain, nonatomic) UIButton *checkButton;
@property (retain, nonatomic) YYLabel *agreementLabel;
@property (retain, nonatomic) UIView *authView;
@property (retain, nonatomic) UILabel *authTitleLabel;
@property (retain, nonatomic) UILabel *authSubTitleLabel;
@property (copy, nonatomic) id /* block */ onAuthAction;
@property (copy, nonatomic) NSString *securityUrl;

- (void)adjustLayout;
- (void)showAgreeAgreementAlert;
- (id)buildAgreementText:(id)a0;
- (void)navigateToPrivacyStatement;
- (void)toggleAgreement:(id)a0;
- (void)handleAuth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
