@class UIView;

@interface AWEProfileExtensionAreaProgressBar : UIView

@property (nonatomic) double height;
@property (nonatomic) double indicatorBarLength;
@property (retain, nonatomic) UIView *indicatorBar;

- (void)updateIndicatorLength:(double)a0;
- (void)updateBackgroundBarColor:(id)a0;
- (void)updateIndicatorColor:(id)a0;
- (void)updateIndicatorOffset:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
