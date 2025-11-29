@class NSString, UIImageView;

@interface AWETeenVerifyBaseViewController : UIViewController

@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) UIImageView *backgroundView;

- (void)backBtnClicked:(id)a0;
- (void)p_setupNavigationBar;
- (void)transferToHelpPage;
- (id)formattedPhoneString:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithPhoneNumber:(id)a0;

@end
