@class NSString, KidsWatchButton, KidsWatchTipsCardView;
@protocol KidsWatchKidsRegisterBindConfirmViewControllerDelegate;

@interface KidsWatchKidsRegisterBindConfirmViewController : KidsWatchBaseViewController

@property (retain, nonatomic) KidsWatchTipsCardView *tipsCardView;
@property (retain, nonatomic) KidsWatchButton *continueButton;
@property (retain, nonatomic) KidsWatchButton *backButton;
@property (retain, nonatomic) NSString *bindedNickName;
@property (retain, nonatomic) NSString *bindedHeadImageURL;
@property (weak, nonatomic) id<KidsWatchKidsRegisterBindConfirmViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)setupWithData:(id)a0;
- (void)initSubviews;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapCloseBarButtonItem;
- (void)onTapContinueButton;
- (void)onTapBackButton;
- (void).cxx_destruct;

@end
