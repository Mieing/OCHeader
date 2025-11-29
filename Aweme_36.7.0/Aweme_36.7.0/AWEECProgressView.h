@class UIView;

@interface AWEECProgressView : UIView

@property (nonatomic) double lastValue;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) double interval;

- (double)widthWithProgress:(double)a0 totalValue:(double)a1;
- (void)updateProgressValue:(double)a0 totalValue:(double)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
