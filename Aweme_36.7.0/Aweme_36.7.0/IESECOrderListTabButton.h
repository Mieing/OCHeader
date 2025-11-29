@class NSString, IESECOrderListBadgeView, IESECOrderListTabModel, IESECSliceXUIFont, UIButton;

@interface IESECOrderListTabButton : UIView

@property (retain, nonatomic) IESECOrderListBadgeView *badgeView;
@property (copy, nonatomic) NSString *badge;
@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) IESECOrderListTabModel *item;
@property (retain, nonatomic) IESECSliceXUIFont *fontUtil;
@property (nonatomic) BOOL selected;

- (double)widthWithButtonState:(unsigned long long)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
