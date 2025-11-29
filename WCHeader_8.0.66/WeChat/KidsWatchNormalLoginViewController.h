@class KidsWatchTipsButton, KidsWatchButton, KidsWatchSwitchCardView, MMUIButton;
@protocol KidsWatchNormalLoginViewControllerDelegate;

@interface KidsWatchNormalLoginViewController : KidsWatchBaseViewController

@property (retain, nonatomic) KidsWatchSwitchCardView *switchCardView;
@property (retain, nonatomic) KidsWatchTipsButton *tipsButton;
@property (retain, nonatomic) KidsWatchButton *loginButton;
@property (retain, nonatomic) MMUIButton *syncChatCheckbox;
@property (nonatomic) BOOL showSyncChat;
@property (weak, nonatomic) id<KidsWatchNormalLoginViewControllerDelegate> delegate;

- (void)setupWithData:(id)a0;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)onTapLoginButton;
- (void)onTapTipsButton;
- (void)onTapSyncChatCheckbox;
- (void).cxx_destruct;

@end
