@class UIImageView, CAShapeLayer;

@interface BDPLoadingIconView : UIView {
    BOOL _iconImageLoaded;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) CAShapeLayer *iconBorderLayer;
@property (retain, nonatomic) UIImageView *badgeView;
@property (nonatomic) long long style;

- (void)updateIconImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
