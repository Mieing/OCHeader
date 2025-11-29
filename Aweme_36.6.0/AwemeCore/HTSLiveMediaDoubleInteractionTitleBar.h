@interface HTSLiveMediaDoubleInteractionTitleBar : UIView

@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isAnchor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(unsigned long long)a1 isAnchor:(BOOL)a2 diContext:(id)a3;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)loadViews;

@end
