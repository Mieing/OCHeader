@class WCFinderJumpInfo, NSString, UIScreenEdgePanGestureRecognizer, UIView, WCFinderAnimationLoadingView, UIButton, WCFinderGoodsInfo, UILabel;
@protocol WCFinderCommentGoodsSelectVCDelegate;

@interface WCFinderCommentGoodsSelectVC : MMUIHalfScreenViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popGesture;
@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCFinderGoodsInfo *selectedGoodsInfo;
@property (retain, nonatomic) WCFinderJumpInfo *selectedGoodsJumpInfo;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) BOOL miniAppHasSet;
@property (weak, nonatomic) id<WCFinderCommentGoodsSelectVCDelegate> delegate;

- (id)initWithTid:(id)a0;
- (void)baseInit;
- (BOOL)useTransparentNavibar;
- (BOOL)useCustomNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (double)topViewHeight;
- (void)setupUI;
- (void)setupShopMiniApp;
- (void)setupPopGes;
- (void)setupTopView;
- (void)handlePopGesture:(id)a0;
- (id)genCommentGoodsJumpInfoWithGoods:(id)a0;
- (void)completeSelectGoodsTitle:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
