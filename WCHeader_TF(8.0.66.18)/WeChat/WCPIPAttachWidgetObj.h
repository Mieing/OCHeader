@class CIImage, UIView;

@interface WCPIPAttachWidgetObj : WCPIPRenderObj

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) CIImage *widgetCIImage;
@property (nonatomic) double widthHeightPercent;
@property (copy, nonatomic) id /* block */ updateCallback;

- (id)initWithRootView:(id)a0;
- (void)refresh;
- (void)refreshWithCompletion:(id /* block */)a0;
- (BOOL)checkEnableRefresh;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transferNormalizedFrameFromCGModeToCIMode:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
