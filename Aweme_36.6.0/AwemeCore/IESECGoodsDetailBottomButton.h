@class UIImageView, UILabel;

@interface IESECGoodsDetailBottomButton : UIView

@property (retain, nonatomic) UIImageView *mainButtonImageView;
@property (retain, nonatomic) UILabel *mainButtonTitleLabel;
@property (nonatomic) BOOL withCoupon;
@property (retain, nonatomic) UILabel *couponLabel;
@property (retain, nonatomic) UIImageView *separatorLineView;
@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) struct CGSize { double width; double height; } rectCornerRadius;

+ (Class)layerClass;

- (void)maskToRectCorner:(unsigned long long)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateMainButtonBackgroundColorForType:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actionType:(long long)a1 withCoupon:(BOOL)a2;
- (void)updateTitle:(id)a0 detailText:(id)a1 type:(long long)a2;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)layoutSubviews;

@end
