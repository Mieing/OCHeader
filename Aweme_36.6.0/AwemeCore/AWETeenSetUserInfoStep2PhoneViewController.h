@class UIImageView, UILabel, AWETeenPhoneNumberInputView, AWETeenNextActionButton;

@interface AWETeenSetUserInfoStep2PhoneViewController : AWETeenSetUserInfoBaseViewController

@property (retain, nonatomic) AWETeenPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) AWETeenNextActionButton *nextButton;

- (void)didClickedConfirm;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
