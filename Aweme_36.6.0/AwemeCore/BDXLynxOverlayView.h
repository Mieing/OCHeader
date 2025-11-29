@class BDXLynxOverlayContainerView, NSString, BDXLynxOverlayContentView;

@interface BDXLynxOverlayView : LynxUI <BDXLynxOverlayContentViewDelegate, LynxViewVisibleHelper> {
    BOOL _visible;
    int _eventThrough;
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
+ (id)__lynx_props_group_config__1141;
+ (id)__lynx_prop_config__1172;
+ (id)__lynx_prop_config__1263;
+ (id)__lynx_prop_config__1314;

- (void)layoutDidFinished;
- (BOOL)shouldHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)eventThrough;
- (void)setEventThrough:(BOOL)a0 requestReset:(BOOL)a1;
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
