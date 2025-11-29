@class UILabel, AWEGradientView;

@interface AWETheaterMoreHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (nonatomic) BOOL enableAdapterPad;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_updateHorizontalBreakPointWithConfig:(id)a0;
- (void)refreshMarginIfNeeded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
