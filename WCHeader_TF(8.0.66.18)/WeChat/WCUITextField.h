@interface WCUITextField : UITextField

@property (nonatomic) BOOL m_bRestrictShareMenu;
@property (nonatomic) double m_fPlaceholderFontSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandHitAreaInsets;

- (id)init;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
