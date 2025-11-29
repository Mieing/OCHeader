@interface BDXLynxScrollView : LynxUIScroller {
    BOOL _forceImpression;
}

@property (class, retain) Class BDXUIDelegate;

@property (nonatomic) double sensitivity;
@property (nonatomic) struct CGPoint { double x; double y; } lastScrollPoint;
@property (nonatomic) long long hoverPosition;
@property (nonatomic) BOOL enableDefaultBounceView;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__883;
+ (id)__lynx_prop_config__701;
+ (id)__lynx_prop_config__752;
+ (id)__lynx_prop_config__954;
+ (id)__lynx_prop_config__1005;
+ (id)__lynx_prop_config__1096;
+ (id)__lynx_prop_config__1197;
+ (id)__lynx_prop_config__1288;
+ (id)__lynx_ui_method_config__1369;

- (BOOL)scrollToIndex:(long long)a0;
- (void)layoutDidFinished;
- (void)scrollToIndex:(id)a0 withResult:(id /* block */)a1;
- (void)lynxImpressionWillManualExposureNotification:(id)a0;
- (void)triggerSubviewsImpression;
- (void)triggerSubviewsExit;
- (void)bounce:(BOOL)a0 requestReset:(BOOL)a1;
- (void)scrollToSubview:(id)a0;
- (void)scrollToIndex:(long long)a0 requestReset:(BOOL)a1;
- (void)scrollToID:(id)a0 requestReset:(BOOL)a1;
- (void)postion:(id)a0 requestReset:(BOOL)a1;
- (void)pageEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)overflowText:(id)a0 requestReset:(BOOL)a1;
- (void)layoutDirection:(id)a0 requestReset:(BOOL)a1;
- (void)disableDefaultBounceView:(BOOL)a0 requestReset:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)createView;

@end
