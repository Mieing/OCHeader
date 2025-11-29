@class UIColor, UIFont, BDPTabBarConfig, UIView, NSMutableArray;
@protocol BDPFakeTabBarDelegate;

@interface BDPFakeTabBar : UIView {
    BDPTabBarConfig *_tabBarConfig;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (weak, nonatomic) id<BDPFakeTabBarDelegate> delegate;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double itemSpacing;

- (void)bdp_showTabBarRedDotWithIndex:(long long)a0;
- (void)bdp_hideTabBarRedDotWithIndex:(long long)a0;
- (void)bdp_setTabBarBadgeWithIndex:(long long)a0 text:(id)a1;
- (void)bdp_removeTabBarBadgeWithIndex:(long long)a0;
- (void)bdp_updateBadgePositionOnItemIndex:(long long)a0;
- (void)bdp_bringBadgeToFrontOnItemIndex:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabBarConfig:(id)a1;
- (void)tabButtonTapped:(id)a0;
- (void)updateSelectedAndUnselectedStatus:(unsigned long long)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1;

@end
