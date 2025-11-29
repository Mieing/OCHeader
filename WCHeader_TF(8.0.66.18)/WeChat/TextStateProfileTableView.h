@interface TextStateProfileTableView : WCTableView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expendTouchInsets;

- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
