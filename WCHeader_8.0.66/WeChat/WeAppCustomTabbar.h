@class NSArray, NSMutableDictionary, UIView, NSMutableArray;
@protocol WeAppCustomTabbarDelegate;

@interface WeAppCustomTabbar : UIView

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableArray *tabBarBtns;
@property (retain, nonatomic) NSMutableDictionary *imageViews;
@property (retain, nonatomic) NSMutableDictionary *labelViews;
@property (retain, nonatomic) NSMutableDictionary *badgeViews;
@property (retain, nonatomic) UIView *intervalLine;
@property (weak, nonatomic) id<WeAppCustomTabbarDelegate> delegate;
@property (nonatomic) long long selectedIndex;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)getTabbarLabelForIndex:(long long)a0;
- (void)setTabbarItems:(id)a0;
- (void)updateButtonForIndex:(long long)a0;
- (void)layoutButtons;
- (void)onBtnClick:(id)a0;
- (id)badgeViewForIndex:(long long)a0;
- (void)setTabBarBadgeAsRedDotForIndex:(long long)a0;
- (void)setTabBarBadgeString:(id)a0 color:(id)a1 forIndex:(long long)a2;
- (void)hideTabBarBadgeForIndex:(long long)a0;
- (void)adjustBadgeViewForIndex:(long long)a0;
- (void)setAccessibilityValueForIndex:(unsigned long long)a0 badgeStr:(id)a1;
- (void)alterIntervalLine;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end
