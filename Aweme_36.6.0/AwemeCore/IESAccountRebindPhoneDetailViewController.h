@class DUXNavigationBar, NSString, DUXButton, UILabel;

@interface IESAccountRebindPhoneDetailViewController : UIViewController

@property (retain, nonatomic) DUXNavigationBar *navBar;
@property (retain, nonatomic) UILabel *rebindTitleLabel;
@property (retain, nonatomic) UILabel *rebindMaskPhoneLabel;
@property (retain, nonatomic) DUXButton *rebindPhoneButton;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ clickRebindPhone;

- (id)trackParams;
- (void)rebindPhone;
- (id)initWithEnterFrom:(id)a0;
- (void)trackBindFrontPageShow;
- (void)trackBindFrontPageSubmitWithButton:(id)a0;
- (void)addCustomNaviBar;
- (void)backAction;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
