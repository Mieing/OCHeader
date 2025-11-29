@class UIColor, UIView;

@interface AWEStoryProgressCell : UICollectionViewCell

@property (nonatomic) double lastValue;
@property (nonatomic) BOOL needMini;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double interval;

- (double)widthWithProgress:(double)a0 totalValue:(double)a1;
- (double)miniWidth;
- (void)updateProgressValue:(double)a0 totalValue:(double)a1 lastValue:(double)a2 needMini:(BOOL)a3 animated:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
