@class AWEIMShapeView;

@interface AWEIMPanelBlankView : AWEIMPanelView

@property (retain, nonatomic) AWEIMShapeView *shapeView;

- (void)awe_themeReload;
- (void)renderWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
