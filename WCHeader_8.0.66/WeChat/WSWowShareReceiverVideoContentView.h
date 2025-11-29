@class MMUIImageView, UIView, MMWebImageView, MMUILabel;

@interface WSWowShareReceiverVideoContentView : UIView

@property (retain, nonatomic) MMWebImageView *thumbImageView;
@property (retain, nonatomic) UIView *thumbShadowView;
@property (retain, nonatomic) MMUIImageView *thumbIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) unsigned int type;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)outsideSetType:(unsigned int)a0 title:(id)a1 subTitle:(id)a2 videoThumbUrl:(id)a3;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
