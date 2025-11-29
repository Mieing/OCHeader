@interface AWEPlayInteractionTagsStackView : UIStackView

@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;

- (void)layoutSubviews;
- (BOOL)isActiveOfView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
