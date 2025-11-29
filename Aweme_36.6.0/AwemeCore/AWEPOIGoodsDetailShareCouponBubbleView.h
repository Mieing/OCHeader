@class UIImageView, UILabel, UIView;

@interface AWEPOIGoodsDetailShareCouponBubbleView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)duxPopover_view;
- (id)initWithBubbleModel:(id)a0 playStatus:(long long)a1;
- (void)setupUIWithBubbleModel:(id)a0 playStatus:(long long)a1;
- (void).cxx_destruct;

@end
