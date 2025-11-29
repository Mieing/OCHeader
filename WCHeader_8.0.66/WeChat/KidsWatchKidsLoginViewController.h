@class NSArray, UIButton, KidsWatchFlexibleImageView;
@protocol KidsWatchKidsLoginViewControllerDelegate;

@interface KidsWatchKidsLoginViewController : KidsWatchBaseViewController

@property (retain, nonatomic) NSArray *kidsAccountInfoList;
@property (retain, nonatomic) UIButton *switchAccountButton;
@property (retain, nonatomic) KidsWatchFlexibleImageView *bottomRightBackgroundView;
@property (weak, nonatomic) id<KidsWatchKidsLoginViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setupWithData:(id)a0;
- (void)refreshView;
- (void)onTapItemView:(id)a0;
- (void)onTapSwitchAccountButton;
- (void)onTapKidsLoginCloseBarButtonItem;
- (BOOL)shouldInteractivePop;
- (void).cxx_destruct;

@end
