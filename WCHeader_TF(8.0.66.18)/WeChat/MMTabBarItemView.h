@class UILabel, NSString, MMBadgeView, MMTabbarItem, MMWebImageView, MMTabBarItemIconView;

@interface MMTabBarItemView : UIView

@property (retain, nonatomic) MMTabbarItem *item;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) NSString *badgeString;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMTabBarItemIconView *customIconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MMBadgeView *badgeView;

- (void)willRemoveSubview:(id)a0;
- (id)initWithItem:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setTitle:(id)a0;
- (void)setBadgeViewHidden:(BOOL)a0;
- (void)setTabBarBadgeValue:(long long)a0;
- (void)setTabBarBadgeString:(id)a0;
- (void)showSmallRedDot;
- (void)removeSmallRedDot;
- (id)getBadgeView;
- (void)setupUI;
- (void)onBadgeViewExposeChange:(id)a0 isExposed:(BOOL)a1;
- (void)relayoutIconAndBadge;
- (void)layoutIcon;
- (void)layoutBadgeView;
- (double)getBadgeViewRightMarginPortrait;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (BOOL)isSelectedState;
- (void)reloadIconImage;
- (void)preloadURLImages;
- (void)bindRedDotExposeEventCallback:(id)a0 tabIndex:(long long)a1;
- (void).cxx_destruct;

@end
