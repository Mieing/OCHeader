@class UIImageView, UILabel, UIView, AWETeenNextActionButton;

@interface AWETeenVerifyStep1GetCodeViewController : AWETeenVerifyBaseViewController

@property (retain, nonatomic) UIView *logoBackgroundView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) UILabel *unusedPhoneLabel;
@property (retain, nonatomic) AWETeenNextActionButton *nextButton;

- (void)confirmBtnClicked:(id)a0;
- (void)unuseBtnClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
