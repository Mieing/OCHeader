@class NSString, CJPayStateView, UIImageView, UIView;

@interface CJPayHalfPageBaseViewController : CJPayBaseViewController <CJPayStateDelegate>

@property (readonly, nonatomic) CJPayStateView *stateView;
@property (retain, nonatomic) UIView *backColorView;
@property (copy, nonatomic) id /* block */ transCompletionBlock;
@property (nonatomic) BOOL hasClosed;
@property (retain, nonatomic) UIImageView *loadingContainerView;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) unsigned long long exitAnimationType;
@property (copy, nonatomic) id /* block */ closeActionCompletionBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topView;
@property (copy, nonatomic) NSString *from;
@property (nonatomic) BOOL isSupportClickMaskBack;
@property (nonatomic) BOOL clipToHalfPageBounds;
@property (nonatomic) BOOL forceOriginPresentAnimation;

- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 completion:(id /* block */)a2;
- (long long)vcType;
- (void)useCloseBackBtn;
- (BOOL)isShowMask;
- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 presentStyle:(long long)a2 completion:(id /* block */)a3;
- (BOOL)cjNeedAnimation;
- (BOOL)cjAllowTransition;
- (BOOL)cjShouldShowBottomView;
- (void)closeWithAnimation:(BOOL)a0 comletion:(id /* block */)a1;
- (double)maskAlpha;
- (void)showBackButton;
- (void)hiddenLoadingContainerView;
- (void)showMask:(BOOL)a0;
- (long long)defaultPresentStyle;
- (double)loadingShowheight;
- (void)showState:(long long)a0;
- (void)stateButtonClick:(id)a0;
- (BOOL)loadingIsCenter;
- (void)tapTopView;
- (void)addLoadingViewInTopLevel:(id)a0;
- (id)getHalfPageBGColor;
- (void)p_initUI;
- (void)close;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)setTitle:(id)a0;
- (void)viewDidLoad;
- (void)hideBackButton;
- (double)containerHeight;

@end
