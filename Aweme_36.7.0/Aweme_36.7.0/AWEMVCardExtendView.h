@interface AWEMVCardExtendView : UIButton

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
