@class NSString, UIScrollView, UIViewController;

@interface BDXLynxOverlayLight : LynxUI <BDXLynxOverlayLightViewDelegate, LynxViewVisibleHelper> {
    int _ignoreFocus;
    int _pointerEvents;
}

@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL eventPassThrough;
@property (nonatomic) BOOL eventPassThroughHasBeenSet;
@property (nonatomic) BOOL allowPanGesture;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) long long level;
@property (retain, nonatomic) NSString *nestScrollViewID;
@property (retain, nonatomic) UIScrollView *nestScrollView;
@property (nonatomic) BOOL willBecomeVisible;
@property (retain, nonatomic) Class customViewControllerClass;
@property (weak, nonatomic) UIViewController *customViewController;
@property (nonatomic) BOOL notAdjustLeftMargin;
@property (nonatomic) BOOL notAdjustTopMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__2762;
+ (id)__lynx_prop_config__2843;
+ (id)__lynx_prop_config__2884;
+ (id)__lynx_prop_config__2925;
+ (id)__lynx_prop_config__3056;
+ (id)__lynx_prop_config__3107;
+ (id)__lynx_prop_config__3158;
+ (id)__lynx_prop_config__3199;
+ (id)__lynx_prop_config__32810;
+ (id)__lynx_props_group_config__47511;

- (BOOL)shouldHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onNodeReady;
- (void)eventDidSet;
- (BOOL)ignoreFocus;
- (int)pointerEvents;
- (BOOL)eventThrough:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)blockNativeEvent:(id)a0;
- (void)setIgnoreFocus:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setPointerEvents:(long long)a0 requestReset:(BOOL)a1;
- (BOOL)checkNestedScrollView:(id)a0;
- (id)findNestedScrollView:(id)a0;
- (BOOL)forbidPanGesture;
- (void)setMode:(id)a0 requestReset:(BOOL)a1;
- (long long)getSign;
- (id)windowContainer;
- (BOOL)eventPassed:(struct CGPoint { double x0; double x1; })a0;
- (void)requestClose:(id)a0;
- (void)overlayTouched:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 state:(long long)a2 velocity:(struct CGPoint { double x0; double x1; })a3;
- (id)overlayRootUI;
- (BOOL)IsViewVisible;
- (void)setVisible:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setAllowPanGesture:(BOOL)a0 requestReset:(BOOL)a1;
- (void)enableSwipeBack:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setLevel:(long long)a0 requestReset:(BOOL)a1;
- (void)setEventPassthrough:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setNestScroll:(id)a0 requestReset:(BOOL)a1;
- (void)setIosNotAdjustLeftMargin:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setIosNotAdjustTopMargin:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isOverlay;
- (id)createView;

@end
