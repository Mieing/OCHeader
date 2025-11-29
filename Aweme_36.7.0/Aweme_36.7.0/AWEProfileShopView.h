@class UIImageView, UIButton, UIView;

@interface AWEProfileShopView : UIView

@property (retain, nonatomic) UIImageView *shopArrowView;
@property (retain, nonatomic) UIButton *shopButton;
@property (retain, nonatomic) UIView *goodsYellowDot;
@property (retain, nonatomic) UIView *sepView;
@property (nonatomic) BOOL shouldShowcase;

- (void)updateAccessibilityLabel:(id)a0;
- (id)initWithShouldShowcase:(BOOL)a0;
- (void)updateShopViewWithCommerceShowcaseName:(id)a0 isShopIronMan:(BOOL)a1 isCurrentUser:(BOOL)a2 hasNewGoods:(BOOL)a3 shouldShowcase:(BOOL)a4;
- (void)hideNewGoodsHint;
- (void).cxx_destruct;
- (void)setupUI;

@end
