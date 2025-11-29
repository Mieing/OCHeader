@class UIScrollView, CAGradientLayer, NSValue;

@interface AWEFeedMultiTabSegmentedMaskView : UIView

@property (nonatomic) double maskWidth;
@property (nonatomic) double leftMaskAlpha;
@property (nonatomic) double rightMaskAlpha;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (weak, nonatomic) UIScrollView *associatedScrollView;
@property (retain, nonatomic) NSValue *maskFrameValue;
@property (copy, nonatomic) id /* block */ getLeftTotalOffset;

- (void)setMaskRasterizeIfNeeded;
- (void)setMaskFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMaskLayer;
- (void)bindScrollView:(id)a0;
- (id)initWithMaskWidth:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
