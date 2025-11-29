@class DUXNavigationBar, UIImageView, DUXButton, UILabel, NSDictionary, DUXLoadingToast;

@interface IESAccountRebindVerifyViewController : UIViewController

@property (retain, nonatomic) DUXNavigationBar *navBar;
@property (retain, nonatomic) UIImageView *verifyIconImageView;
@property (retain, nonatomic) UILabel *verifyTitleLabel;
@property (retain, nonatomic) UILabel *verifyDescription;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (copy, nonatomic) NSDictionary *trackParams;

- (id)initWithTrackParams:(id)a0;
- (void)trackBindKindShipPageShow;
- (void)trackBindKindShipReviewSubmitWithButton:(id)a0;
- (void)acceptAction;
- (void)abandonAction;
- (void)addCustomNaviBar;
- (void)backAction;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupUI;

@end
