@class BDXLynxPageViewPro, NSMutableArray, NSString;

@interface BDXLynxFoldViewPro : LynxUI <BDXFoldViewProDelegate, BDXLynxFoldHeaderViewProDelegate, BDXLynxPageViewProDelegate>

@property (retain, nonatomic) NSMutableArray *foldItems;
@property (nonatomic) BOOL hasDataChanged;
@property (retain, nonatomic) BDXLynxPageViewPro *lynxPage;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL allowVerticalBounce;
@property (nonatomic) double granularity;
@property (nonatomic) double preHeaderOffsetPercent;
@property (nonatomic) BOOL scrollBarEnable;
@property (nonatomic) BOOL pageRefresh;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) int gestureDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__4111;
+ (id)__lynx_prop_config__4532;
+ (id)__lynx_prop_config__4573;
+ (id)__lynx_prop_config__4614;
+ (id)__lynx_prop_config__4655;
+ (id)__lynx_prop_config__4726;
+ (id)__lynx_prop_config__4777;

- (void)layoutDidFinished;
- (void)removeChild:(id)a0 atIndex:(long long)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 onUIWithCustomLayout:(id)a2;
- (void)allowVerticalBounce:(BOOL)a0 requestReset:(BOOL)a1;
- (void)granularity:(double)a0 requestReset:(BOOL)a1;
- (void)scrollBarEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)refreshMode:(id)a0 requestReset:(BOOL)a1;
- (void)scrollEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setFoldExpanded:(id)a0 withResult:(id /* block */)a1;
- (void)lynxFoldHeaderLayoutIfNeeded:(id)a0;
- (unsigned long long)foldViewHeaderViewHeight;
- (id)foldView:(id)a0 initListAtIndex:(long long)a1;
- (void)foldView:(id)a0 mainTableViewDidScroll:(id)a1;
- (void)foldView:(id)a0 listScrollViewDidScroll:(id)a1;
- (void)mainTableViewOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)headerOffsetting:(id)a0;
- (void)lynxPageViewLayoutIfNeeded;
- (void)setFoldExpanded:(BOOL)a0;
- (void)gestureDirection:(int)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
