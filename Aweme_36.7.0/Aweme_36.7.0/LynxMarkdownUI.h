@class LynxMarkdownBundle;

@interface LynxMarkdownUI : LynxUI {
    LynxMarkdownBundle *_bundle;
}

+ (void)lynxLazyLoad;
+ (id)__lynx_props_group_config__331;
+ (id)__lynx_ui_method_config__1452;
+ (id)__lynx_ui_method_config__2163;
+ (id)__lynx_ui_method_config__2254;
+ (id)__lynx_ui_method_config__2395;
+ (id)__lynx_ui_method_config__2566;
+ (id)__lynx_ui_method_config__2817;
+ (id)__lynx_ui_method_config__2968;
+ (id)__lynx_ui_method_config__3939;
+ (id)__lynx_ui_method_config__43210;
+ (id)__lynx_ui_method_config__44111;

- (void)onListCellDisappear:(id)a0 exist:(BOOL)a1 withList:(id)a2;
- (void)onReceiveUIOperation:(id)a0;
- (void)onNodeReady;
- (void)didInsertChild:(id)a0 atIndex:(long long)a1;
- (void)onListCellPrepareForReuse:(id)a0 withList:(id)a1;
- (void)onNodeReload;
- (void)onListCellAppear:(id)a0 withList:(id)a1;
- (void)removeChildrenExposureUI;
- (void)getContent:(id)a0 withResult:(id /* block */)a1;
- (void)pauseAnimation:(id)a0 withResult:(id /* block */)a1;
- (void)resumeAnimation:(id)a0 withResult:(id /* block */)a1;
- (id)getTextBoundingRectFromBoxes:(id)a0 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getHandleMap:(id)a0 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getMapFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setEnableTextSelection:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setSelectionBackgroundColor:(id)a0 requestReset:(BOOL)a1;
- (void)setSelectionHandleColor:(id)a0 requestReset:(BOOL)a1;
- (void)setSelectionHandleSize:(double)a0 requestReset:(BOOL)a1;
- (void)getTextBoundingRect:(id)a0 withResult:(id /* block */)a1;
- (void)getSelectedText:(id)a0 withResult:(id /* block */)a1;
- (void)setTextSelection:(id)a0 withResult:(id /* block */)a1;
- (void)setMarkdownEffect:(id)a0 requestReset:(BOOL)a1;
- (void)setAsyncDraw:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setRegionView:(BOOL)a0 requestReset:(BOOL)a1;
- (void)clearStatus:(id)a0 withResult:(id /* block */)a1;
- (void)getParseResult:(id)a0 withResult:(id /* block */)a1;
- (void)getImages:(id)a0 withResult:(id /* block */)a1;
- (void)clearResources:(id)a0 withResult:(id /* block */)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (id)createView;
- (void)frameDidChange;

@end
