@class NSArray, NSNumber, UIView;

@interface BDPNavigationBar : UIView

@property (nonatomic) BOOL isNavigationBarHidden;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *leftItems;
@property (copy, nonatomic) NSArray *rightItems;
@property (nonatomic) BOOL canHitThrough;
@property (nonatomic) BOOL isTransparentColor;
@property (nonatomic) BOOL deleteLeftMargin;
@property (retain, nonatomic) NSNumber *customNaviBarHeight;

- (void)handleWillEnterForeground:(id)a0;
- (void)setNavigationBarBackgroundColor:(id)a0;
- (void)setNavigationBarLeftItems:(id)a0;
- (void)setNavigationBarRightItems:(id)a0;
- (void)updateNavigationBarConstraintFrame;
- (void)setNavigationBarItemColor:(id)a0;
- (void)custom_updateLoadingViewAnimation;
- (void)updateContentViewConstraintFrame;
- (void)custom_setLoadingAnimationRotation:(id)a0;
- (void)setCustomNavigationBarLoading:(BOOL)a0;
- (void)setLoadingAnimationRotation:(id)a0;
- (void)setNavigationBarLoading:(BOOL)a0;
- (void)updateLoadingViewAnimation;
- (void)addOrRemoveNotification:(BOOL)a0;
- (void)initContentViewConstraintFrame;
- (double)p_navigationBarHeight;
- (void)setNavigationBarLeftView:(id)a0;
- (void)setNavigationBarRightView:(id)a0;
- (void)_setNavigationBarTitleViewDefault;
- (void)adjustLabelViewSizeWithAttributeText;
- (void)_updateTitleViewConstrains;
- (void)switchToFullScreen;
- (void)switchToSmallScreen;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (void)setNavigationBarTitle:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setAlpha:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setNavigationBarHidden:(BOOL)a0;
- (void)setupView;
- (void)setNavigationBarTitleView:(id)a0;
- (void)setNavigationBarTitleTextAttributes:(id)a0;

@end
