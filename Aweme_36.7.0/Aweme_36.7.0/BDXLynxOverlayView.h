@class BDXLynxOverlayContainerView, NSString, BDXLynxOverlayContentView;

@interface BDXLynxOverlayView : LynxUI <BDXLynxOverlayContentViewDelegate, LynxViewVisibleHelper> {
    BOOL _visible;
    int _ignoreFocus;
    int _pointerEvents;
}

@property (nonatomic) BOOL statusBarTranslucent;
@property (nonatomic) BOOL eventsPassThrough;
@property (retain, nonatomic) BDXLynxOverlayContainerView *containerView;
@property (retain, nonatomic) BDXLynxOverlayContentView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1262;
+ (id)__lynx_props_group_config__1231;
+ (id)__lynx_prop_config__1353;
+ (id)__lynx_prop_config__1404;
+ (id)__lynx_prop_config__1455;
+ (id)__lynx_prop_config__1546;

- (void)layoutDidFinished;
- (BOOL)shouldHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)ignoreFocus;
- (int)pointerEvents;
- (BOOL)eventThrough:(struct CGPoint { double x0; double x1; })a0;
- (void)setIgnoreFocus:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setPointerEvents:(long long)a0 requestReset:(BOOL)a1;
- (void)operateContainer:(BOOL)a0;
- (void)requestClose:(id)a0;
- (id)overlayRootUI;
- (BOOL)IsViewVisible;
- (void)visible:(BOOL)a0 requestReset:(BOOL)a1;
- (void)statusBarTranslucent:(BOOL)a0 requestReset:(BOOL)a1;
- (void)eventsPassThrough:(BOOL)a0 requestReset:(BOOL)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;

@end
