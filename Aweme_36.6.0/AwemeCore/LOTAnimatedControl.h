@class LOTAnimationView, LOTComposition, NSMutableDictionary;

@interface LOTAnimatedControl : UIControl {
    unsigned long long _priorState;
    NSMutableDictionary *_layerMap;
}

@property (readonly, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) LOTComposition *animationComp;

- (void)checkStateChangedAndUpdate:(BOOL)a0;
- (void)setLayerName:(id)a0 forState:(unsigned long long)a1;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_commonInit;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
