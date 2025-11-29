@interface AWEElementStackView : UIStackView

@property (nonatomic) BOOL needUpdateCustomSpacing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;
@property (nonatomic) BOOL enableCustomSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customInnerMargins;

+ (void)initialize;

- (void)dealloc;
- (id)arrangedSubviews;
- (void)setAlpha:(double)a0;
- (BOOL)isActiveOfView:(id)a0;
- (void)updateCustomSpacingIfNeeded;
- (void)updateCustomSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })calculateCustomLayoutMargins;
- (id)getCustomPaddingElement4View:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
