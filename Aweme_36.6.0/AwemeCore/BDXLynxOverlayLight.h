@class NSString, UIScrollView, UIViewController;

@interface BDXLynxOverlayLight : LynxUI <BDXLynxOverlayLightViewDelegate, LynxViewVisibleHelper>

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
+ (id)__lynx_prop_config__2162;
+ (id)__lynx_prop_config__2243;
+ (id)__lynx_prop_config__2284;
+ (id)__lynx_prop_config__2325;
+ (id)__lynx_prop_config__2456;
+ (id)__lynx_prop_config__2507;
+ (id)__lynx_prop_config__2558;
+ (id)__lynx_props_group_config__3959;

- (BOOL)shouldHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)eventDidSet;
- (void)onNodeReady;
- (BOOL)blockNativeEvent:(id)a0;
- (BOOL)checkNestedScrollView:(id)a0;
- (id)findNestedScrollView:(id)a0;
- (BOOL)forbidPanGesture;
- (void)setMode:(id)a0 requestReset:(BOOL)a1;
- (long long)getSign;
- (id)windowContainer;
- (BOOL)eventPassed;
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
