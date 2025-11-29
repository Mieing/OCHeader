@class UIColor;

@interface InteractionLabel : MMUILabel {
    id _target;
    SEL _selAction;
    BOOL _bIsTouchesEnded;
}

@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;

- (void)initMembers;
- (void)becomeNormalBackgroundColor;
- (void)becomeHighlightedBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
