@class NSString, BDXLynxRefreshFooter, UIScrollView, BDXLynxRefreshHeader, LynxUI;

@interface BDXLynxRefreshView : LynxUI <BDXRefreshDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selfFrame;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) BDXLynxRefreshHeader *lynxHeader;
@property (weak, nonatomic) BDXLynxRefreshFooter *lynxFooter;
@property (weak, nonatomic) LynxUI *lynxList;
@property (nonatomic) BOOL enableRefresh;
@property (nonatomic) BOOL enableLoadMore;
@property (nonatomic) BOOL enableAutoLoadMore;
@property (nonatomic) BOOL enableFooterRebound;
@property (nonatomic) BOOL manualRefresh;
@property (nonatomic) BOOL enableLoadMoreWhenScrollDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__6731;
+ (id)__lynx_prop_config__6802;
+ (id)__lynx_ui_method_config__6873;
+ (id)__lynx_ui_method_config__6944;
+ (id)__lynx_ui_method_config__7115;
+ (id)__lynx_props_group_config__7226;

- (void)finishLayoutOperation;
- (void)startLoadMore;
- (void)startRefresh;
- (void)refreshview:(id)a0 didUpdatePullingPrecent:(double)a1;
- (void)refreshview:(id)a0 didUpdateShowingPrecent:(double)a1;
- (void)loadHeaderAndFooter;
- (id)findViewWithKind:(Class)a0 fromView:(id)a1 excludeViews:(id)a2;
- (void)loadHeader;
- (void)loadFooter;
- (void)headerReleased;
- (void)footerReleased;
- (void)enableRefresh:(BOOL)a0 requestReset:(BOOL)a1;
- (void)enableLoadMore:(BOOL)a0 requestReset:(BOOL)a1;
- (void)finishRefresh:(id)a0 withResult:(id /* block */)a1;
- (void)finishLoadMore:(id)a0 withResult:(id /* block */)a1;
- (void)autoStartRefresh:(id)a0 withResult:(id /* block */)a1;
- (void)setEnableAutoLoadmore:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEnableFooterRebound:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setIosEnableLoadmoreWhenScrollDisabled:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
