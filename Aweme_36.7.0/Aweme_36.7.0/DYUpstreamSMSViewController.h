@class DYUserVerifyUpstreamSMSModel, NSString, AWEUITextLoadingView, AWELoginButton, UILabel, UIButton;

@interface DYUpstreamSMSViewController : UIViewController

@property (retain, nonatomic) AWELoginButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *firstTipNameLabel;
@property (retain, nonatomic) UILabel *firstTipValueLabel;
@property (retain, nonatomic) UILabel *secondTipNameLabel;
@property (retain, nonatomic) UIButton *secondTipValueLabel;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UIButton *editSMSBtn;
@property (retain, nonatomic) UIButton *faqBtn;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) unsigned long long countdown;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) DYUserVerifyUpstreamSMSModel *model;
@property (copy, nonatomic) NSString *enterUrl;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)countDown:(id)a0;
- (void)backAction:(id)a0;
- (void)submitAction:(id)a0;
- (void)updateSubmitButtonWithCountdown:(unsigned long long)a0;
- (BOOL)copyPhoneNumberToClipboard;
- (void)editSMSAction:(id)a0;
- (void)faqAction:(id)a0;
- (void)realSubmitActionWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeForText:(id)a0 Font:(id)a1 maxWidth:(double)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
