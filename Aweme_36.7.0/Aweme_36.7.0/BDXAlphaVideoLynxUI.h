@class NSString, BDXAlphaVideoUI;

@interface BDXAlphaVideoLynxUI : LynxUI <BDXHybridUIEventDispatcher, BDXHybridUIContext, BDXAlphaVideoUIDelegate>

@property (retain, nonatomic) BDXAlphaVideoUI *videoUI;
@property (nonatomic) BOOL incompatible;
@property (nonatomic) BOOL hasReportMotionEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__835;
+ (id)__lynx_prop_config__661;
+ (id)__lynx_prop_config__712;
+ (id)__lynx_prop_config__753;
+ (id)__lynx_prop_config__794;
+ (id)__lynx_prop_config__876;
+ (id)__lynx_prop_config__917;
+ (id)__lynx_prop_config__958;
+ (id)__lynx_ui_method_config__1009;
+ (id)__lynx_ui_method_config__11810;
+ (id)__lynx_ui_method_config__13211;
+ (id)__lynx_ui_method_config__14612;
+ (id)__lynx_ui_method_config__17213;
+ (id)__lynx_ui_method_config__19614;
+ (id)__lynx_ui_method_config__20115;
+ (id)__lynx_ui_method_config__21116;
+ (id)__lynx_ui_method_config__22117;
+ (id)__lynx_ui_method_config__23618;
+ (id)__lynx_props_group_config__32319;

- (void)layoutDidFinished;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)autoplay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)poster:(id)a0 requestReset:(BOOL)a1;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (void)src:(id)a0 requestReset:(BOOL)a1;
- (void)sendCustomEvent:(id)a0 params:(id)a1;
- (void)loop:(BOOL)a0 requestReset:(BOOL)a1;
- (void)reportMotionEvent:(id)a0;
- (void)resume:(id)a0 withResult:(id /* block */)a1;
- (void)getDuration:(id)a0 withResult:(id /* block */)a1;
- (void)subscribeUpdateEvent:(id)a0 withResult:(id /* block */)a1;
- (void)unsubscribeUpdateEvent:(id)a0 withResult:(id /* block */)a1;
- (id)bdx_context;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bdx_frame;
- (id)bdx_containerURL;
- (BOOL)loadZipFromResourceFetcher:(id)a0 completion:(id /* block */)a1;
- (void)lastframe:(id)a0 requestReset:(BOOL)a1;
- (void)keepLastframe:(BOOL)a0 requestReset:(BOOL)a1;
- (void)keepPreviousView:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setCompatible:(BOOL)a0 requestReset:(BOOL)a1;
- (void)release:(id)a0 withResult:(id /* block */)a1;
- (void)isPlaying:(id)a0 withResult:(id /* block */)a1;
- (void)iosAsyncRender:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;
- (void)frameDidChange;

@end
