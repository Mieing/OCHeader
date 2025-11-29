@interface FlowKitBizUI.QuoteViewButton : UIControl

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
