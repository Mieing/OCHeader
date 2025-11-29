@class NSMutableArray, UIView;
@protocol MMTabBarDelegate;

@interface MMTabBar : UITabBar

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableArray *tabBarItemViews;
@property (nonatomic) double extraKeyboardHeight;
@property (weak, nonatomic) id<MMTabBarDelegate> customDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)a0;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)a0;
- (void)onKeyboradWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onKeyboardWillChangeFrame:(id)a0;
- (void)updateFrameWithKeyboard:(id)a0;
- (void)selectIndex:(long long)a0;
- (long long)tabBarItemCount;
- (BOOL)targetIndexIsSelected:(long long)a0;
- (id)tabBarItemViewAtIndex:(long long)a0;
- (void)setTabBarBackgroundColor:(id)a0 useBlur:(BOOL)a1;
- (long long)semanticContentAttribute;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)calcHeight;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)setHidden:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addCustomBackground;
- (void)layoutSubviews;
- (id)findBlurEffectView:(id)a0;
- (id)findShadowView:(id)a0;
- (void)createTabBarItemViews;
- (void)relayoutTabBarItems;
- (void)configureClearBackground;
- (void).cxx_destruct;

@end
