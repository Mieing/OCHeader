@class UIImageView, LSIMChatDetailVC, UIView;

@interface LSIMChatDetailFoatingContainerVC : UIViewController

@property (retain, nonatomic) UIImageView *snapshotView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (nonatomic) BOOL hasShowed;
@property (retain, nonatomic) LSIMChatDetailVC *detailVC;
@property (copy, nonatomic) id /* block */ setEnablePopGestureBlock;
@property (copy, nonatomic) id /* block */ setDisablePopGestureBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)dismissFloatView;
- (void)expandToFull;
- (void)showFloatView;
- (double)floatViewHeight;
- (double)floatViewTopMargin;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
