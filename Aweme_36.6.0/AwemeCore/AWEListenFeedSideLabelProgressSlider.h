@class UIView;
@protocol AWEListenFeedProgressViewProtocol;

@interface AWEListenFeedSideLabelProgressSlider : UISlider

@property (weak, nonatomic) UIView<AWEListenFeedProgressViewProtocol> *containerView;
@property (nonatomic) double trackHeight;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
