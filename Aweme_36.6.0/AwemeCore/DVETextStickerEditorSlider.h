@class CAShapeLayer, UIView;
@protocol DVETextStickerEditorSliderDelegate;

@interface DVETextStickerEditorSlider : UIControl

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) CAShapeLayer *contentBackgroundLayer;
@property (retain, nonatomic) UIView *indicator;
@property (nonatomic) struct CGPoint { double x; double y; } previousTouchLocation;
@property (nonatomic) float maximunValue;
@property (nonatomic) float minimumValue;
@property (nonatomic) float value;
@property (weak, nonatomic) id<DVETextStickerEditorSliderDelegate> delegate;

- (void)showTipsAnimation:(id /* block */)a0;
- (void)updateValueByAddingPercentage:(double)a0;
- (void)layoutContentBackground;
- (void)layoutIndicator;
- (BOOL)indicatorMoveable;
- (void)touchMovedTo:(struct CGPoint { double x0; double x1; })a0;
- (void)dockContentToLeading:(id /* block */)a0;
- (void)dockContentToTrailing:(id /* block */)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)accessibilityIncrement;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)accessibilityValue;

@end
