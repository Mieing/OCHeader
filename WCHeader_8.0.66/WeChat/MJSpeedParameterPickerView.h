@class UILabel, UIView;

@interface MJSpeedParameterPickerView : MJPrecisionPickerView

@property (nonatomic) double indicatorHeight;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UILabel *valueLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setValue:(long long)a0 withSpec:(struct { long long x0; long long x1; long long x2; })a1 animated:(BOOL)a2;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
