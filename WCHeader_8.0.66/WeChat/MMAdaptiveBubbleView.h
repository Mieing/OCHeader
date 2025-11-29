@class MMAdaptiveBubbleShapeView, MMAdaptiveBubbleParams, UIView;

@interface MMAdaptiveBubbleView : MMUIButton

@property (retain, nonatomic) MMAdaptiveBubbleParams *parames;
@property (retain, nonatomic) UIView *highlightCoverView;
@property (retain, nonatomic) MMAdaptiveBubbleShapeView *shapeView;
@property (retain, nonatomic) UIView *mainPartContentView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } mainPartContentViewEdgeInsets;
@property (nonatomic) double arrowImageViewRight;

- (id)initWithParams:(id)a0;
- (void)setupBlurEffectView;
- (void)setupHighlightView;
- (void)setupShapeView;
- (void)setArrowImageViewRight:(double)a0;
- (double)arrowImageViewRight;
- (void)setMainPartContentViewEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })mainPartContentViewEdgeInsets;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)relayoutAllSubviews;
- (void)layoutMainPartContentView;
- (void).cxx_destruct;

@end
