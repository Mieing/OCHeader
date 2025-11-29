@interface WCCanvasSidebarComponent : WCCanvasComponent

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)enumerateButtonViewWithCallback:(id /* block */)a0;
- (id)genSeparatorView;
- (void)initViews;

@end
