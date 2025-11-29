@class UILabel;

@interface AWEPLVCardCornerIconView : AWEGradientView

@property (nonatomic) BOOL shouldHideBezierCurve;
@property (nonatomic) unsigned long long iconType;
@property (retain, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
