@class NSString, UIImageView, DUXButton, UILabel, DUXLoadingToast;

@interface AWERebindVerifyViewController : UIViewController

@property (retain, nonatomic) UILabel *pageTitleLabel;
@property (retain, nonatomic) UIImageView *verifyIconImageView;
@property (retain, nonatomic) UILabel *verifyTitleLabel;
@property (retain, nonatomic) UILabel *verifyDescription;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) NSString *enterFrom;

- (void)backAction:(id)a0;
- (id)initWithEnterFrom:(id)a0;
- (void)trackBindKindShipPageShow;
- (void)trackBindKindShipReviewSubmitWithButton:(id)a0;
- (void)acceptAction;
- (void)abandonAction;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupUI;

@end
